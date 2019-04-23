#include <iostream>
#include <vector>

using namespace std;

class SalesTax
{
	public:
		SalesTax();

	//For Computing Sales Tax
	virtual double ComputeSalesTax(double aPrice, double aRate, double aImportduty);

	private:
	//To Round Off Tax
	double RoundOff(double aTax);
};

class SalesTax;

//No Sales Tax No Import Duty
class Item
{
	public:
		Item();	
		Item (SalesTax* aSalesTax);

	//Price After Tax and Import Duty
	virtual void CalculateTotalPrice();

	//Total Tax and Import Duty
	virtual void CalculateTotalTax();

	//Set Price
	void SetPrice(double aPrice);

	//Price Before Tax
	double getPrice();

	//Price After Tax
	double getTotalPrice();

	//Total tax and Import Duty
	double getTax();

	protected:
	SalesTax* iSalesTax;
	double iPrice;
	double iTotalPrice;
	double iTotalTax;
};

//Only Import Duty Items
class ImportedItem : virtual public Item
{
	public:
		ImportedItem();
		ImportedItem(SalesTax* aSalesTax, double aImportDuty);

	virtual void CalculateTotalTax();

	protected:
	double iImportDuty;
};

//Only Sales Tax No Import Duty
class NonFoodBookMedicalItem : virtual public Item
{
	public:
		NonFoodBookMedicalItem();
		NonFoodBookMedicalItem(SalesTax* aSalesTax, double aRate);

	virtual void CalculateTotalTax();

	protected:
	double iRate;
};

//Import Duty and Sales Tax
class NormalItem: public ImportedItem, public NonFoodBookMedicalItem
{
	public:
		NormalItem();
		NormalItem(SalesTax* aSalesTax, double aRate, double aImportDuty);

	virtual void CalculateTotalTax();
};

const int ITEM_WITH_NOSALESTAX_AND_IMPORTDUTY = 1;
const int ITEM_WITH_NOSALESTAX_ONLY_IMPORTDUTY = 2;
const int ITEM_WITH_ONLY_SALESTAX_AND_NOIMPORTDUTY = 3;
const int ITEM_WITH_BOTH_SALESTAX_AND_IMPORTDUTY = 4;

const double SALES_TAX_RATE = 10;
const double IMPORT_DUTY_RATE = 5;

class Not_A_Standard_Item_Type_Exception
{
	public:
	void printerrormsg();
};

class ItemCreator
{
	public:
	virtual Item* Create(int aItemId);
};

void Not_A_Standard_Item_Type_Exception::printerrormsg()
{
	cout<<"Not the correct Item Type"<<endl;
}

Item* ItemCreator::Create(int aItemId)
{
	SalesTax* st = new SalesTax();

switch(aItemId)
{
	case ITEM_WITH_NOSALESTAX_AND_IMPORTDUTY:
		return new Item(st);
		break;

	case ITEM_WITH_NOSALESTAX_ONLY_IMPORTDUTY:
		return new ImportedItem(st,IMPORT_DUTY_RATE);
		break;

	case ITEM_WITH_ONLY_SALESTAX_AND_NOIMPORTDUTY:
		return new NonFoodBookMedicalItem(st,SALES_TAX_RATE);
		break;

	case ITEM_WITH_BOTH_SALESTAX_AND_IMPORTDUTY:
		return new NormalItem(st,SALES_TAX_RATE,IMPORT_DUTY_RATE);
		break;

	default:
	throw Not_A_Standard_Item_Type_Exception();
}
}

SalesTax::SalesTax(){}

double SalesTax::ComputeSalesTax(double aPrice, double aRate, double aImportduty)
{
	double tx = (aPrice*aRate/(double(100))) + (aPrice*aImportduty/(double(100)));
	return RoundOff(tx);
}

double SalesTax::RoundOff(double aTax)
{
	int taxTemp = (int)aTax;
	double decimaltaxTemp = (double)(aTax - (int)taxTemp);
	int tempy = (int)(1000*decimaltaxTemp)/100;
	int tempz = (int)(1000*decimaltaxTemp - tempy*100);
	int temp = (int)(tempz/10);
	int t = tempz%10;

	if (t >= 5)
	temp+=1;

	return (double)(taxTemp + tempy*(0.1) + temp*(0.01));
}

Item::Item(){}
Item::Item(SalesTax* aSalesTax):iSalesTax(aSalesTax),iPrice(0),iTotalPrice(0),iTotalTax(0){}

void Item::CalculateTotalPrice()
{
	iTotalPrice = iPrice + iTotalTax;
}

double Item::getTotalPrice()
{
	return iTotalPrice;
}


void Item::CalculateTotalTax()
{
	iTotalTax = iSalesTax->ComputeSalesTax(iPrice, 0, 0);
}

void Item::SetPrice(double aPrice)
{
	iPrice = aPrice;
}

double Item::getPrice()
{
	return iPrice;
}

double Item::getTax()
{
	return iTotalTax;
}

ImportedItem::ImportedItem(){}
ImportedItem::ImportedItem(SalesTax* aSalesTax, double aImportDuty):Item(aSalesTax)
{
	iImportDuty = aImportDuty;
}

void ImportedItem::CalculateTotalTax()
{
	iTotalTax = iSalesTax->ComputeSalesTax(iPrice, 0, iImportDuty);
}

NonFoodBookMedicalItem::NonFoodBookMedicalItem(){}
NonFoodBookMedicalItem::NonFoodBookMedicalItem(SalesTax* aSalesTax, double aRate):Item(aSalesTax)
{
iRate = aRate;
}

void NonFoodBookMedicalItem::CalculateTotalTax()
{
iTotalTax = iSalesTax->ComputeSalesTax(iPrice, iRate, 0);
}

NormalItem::NormalItem() {}
NormalItem::NormalItem(SalesTax* aSalesTax, double aRate, double aImportDuty):Item(aSalesTax)
{
iRate = aRate;
iImportDuty = aImportDuty;
}

void NormalItem::CalculateTotalTax()
{
iTotalTax = iSalesTax->ComputeSalesTax(iPrice, iRate, iImportDuty);
}

int main()
{
	typedef vector<Item*> listOfItem;
	listOfItem::iterator theIterator;
	listOfItem Basket;
	char answer = 'n';
	double totalprice = 0;
	double totaltax = 0;

do
{
	int type_of_item;

	cout<<"Enter the type of Item: 1/2/3/4 ?"<<endl;
	cout<<"1 for No Sales Tax No Import Duty"<<endl;
	cout<<"2 for No Sales Tax But Import Duty"<<endl;
	cout<<"3 for Sales Tax But No Import Duty"<<endl;
	cout<<"4 for Sales Tax and Import Duty"<<endl;
	
	cin>>type_of_item;

	ItemCreator* itemCreator = new ItemCreator();

try
{
	Item* item = itemCreator->Create(type_of_item);
	
	cout<<"Enter the Price of the Item"<<endl;

	double price;

	cin>>price;

	item->SetPrice(price);

	Basket.push_back(item);
}

catch(Not_A_Standard_Item_Type_Exception& e)
{
	e.printerrormsg();
}

cout<<"Do you wish to add more item(s)? Y/N"<<endl;
cin>>answer;
}

while (answer =='y');
theIterator = Basket.begin();
int pos = 0;
while (theIterator != Basket.end())
{
	Basket.at(pos)->CalculateTotalTax();
	totaltax+=Basket.at(pos)->getTax();
	Basket.at(pos)->CalculateTotalPrice();
	double price = Basket.at(pos)->getPrice();
	double price_after_tax = Basket.at(pos)->getTotalPrice();
	totalprice+=price_after_tax;

	cout<<"Item "<<pos+1<<" Price: "<<price<<endl;
	theIterator++;
	pos++;
}

cout<<"-------------"<<endl;
cout<<"Total Tax: "<<totaltax<<endl;
cout<<"Total Price: "<<totalprice<<endl;

return 1;
}
