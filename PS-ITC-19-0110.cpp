#include <iostream>

using namespace std;

int main()
{
    int choice;
    int ID;
    int printer=50;
    int table=30;
    int phone=70;
    float vat=0.12;
    float vat_amount;
    int quantity;
    float total_cost;
    float amount_paid;
    float amount_owed;
    float balance;
    string item;
    string item_bought;
    string username;

    cout<<"                                     WELCOME TO INF SUPERMARKET"<<endl<<"-----------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"Please enter your name"<<endl;
    cin>>username;
    cout<<""<<endl;
    cout<<"please enter your ID"<<endl;
    cin>>ID;
    cout<<""<<endl;
    cout<<"Dear "<<username<<","<<" these are the items we have available, and there's a 12% vat on items you purchase"<<endl<<endl;
    cout<<"1. Printer @Ghc 50"<<endl;
    cout<<"2. Phone   @Ghc 70"<<endl;
    cout<<"3. Table   @Ghc 30"<<endl<<endl;

    cout<<"Please what do you want to purchase(enter reference number, thus from 1 to 3)"<<endl;
    cin>>choice;
    cout<<""<<endl;

    cout<<"How many would you like to purchase"<<endl;
    cin>>quantity;

    switch(choice){
    case 1: vat_amount=quantity*printer*vat;
    total_cost= (printer*quantity)+vat_amount;
    item_bought="Printer";
    break;

    case 2: vat_amount=quantity*phone*vat;
    total_cost = (phone*quantity)+vat_amount;
    item_bought="Phone";
    break;

    case 3: vat_amount=quantity*table*vat;
    total_cost= (table*quantity)+vat_amount;
    item_bought="Table";
    break;

    default: cout<<"Enter a figure from 1 to 3"<<endl;
    break;
    }cout<<""<<endl;

    cout<<"Please how much do you have on you"<<endl;
    cin>>amount_paid;

    amount_owed=total_cost-amount_paid;
    balance=amount_paid-total_cost;





cout<<""<<endl<<endl;
cout<<"--------------------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"                                      Here is your receipt           "<<endl<<endl;
cout<<"                               Name of the customer: "<<username<<endl;
cout<<"                               Unique ID: "<<ID<<endl;
cout<<"                               Item bought: "<<item_bought<<endl;
cout<<"                               Quantity bought: "<<quantity<<endl;
cout<<"                               Vat amount: "<<vat_amount<<endl;
cout<<"                               Total cost: "<<total_cost<<endl;
cout<<"                               Total amount paid: "<<amount_paid<<endl;
    if (amount_paid>total_cost){
        cout<<"                               Your balance is "<<balance<<endl;
        }

else;

       if(amount_paid<total_cost) {        cout<<"                               Please you still owe "<<amount_owed<<endl<<endl;
    }

    cout<<"                               Thank you for buying from us "<<username<<", come back next time"<<endl;
    return 0;
    return 0;
}
