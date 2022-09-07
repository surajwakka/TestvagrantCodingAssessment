#include<iostream>
#include<conio.h>
using namespace std;

int T,N;

class ShopingCart
{
    int quantity;
    char name[100];
    float price;
    float Total;
    int GstAmt;
    public:
    void get_data();
    void put_data();
    void calculate();
    void Total1();
    void GST();
};



void ShopingCart::get_data()
{
    cout<<"Enter the name of the item "<<T+1<<" = ";
    cin>>name;
    cout<<"Enter the quantity= ";
    cin>>quantity;
    cout<<"Enter the price= ";
    cin>>price;
    cout<<"Enter The Gst Amount";
    cin>>GstAmt;

    cout<<"\n";

}

void ShopingCart::put_data()
{
    cout<<"\n"<<name<<"\t\t   "<<quantity<<"\t\t   "<<price<<"\t\t\t"<<"SR";
}
void ShopingCart::calculate()
{
    for(T=0;T<N;T++)
    {
        Total=Total+price;
    }

}
void ShopingCart::Total1()
{
    cout<<"\nTotal Amount= "<<Total;
}
void ShopingCart::GST(){
    char name;
if(name=='Leather wallet'){
    int GstAmount=(price*GstAmt)*100;

}
if(name=='Umbrella'){
    int GstAmount=(price*GstAmt)*100;

}
if(name=='Cigarette'){
    int GstAmount=(price*GstAmt)*100;

}
if(name=='Honey'){
    int GstAmount=(price*GstAmt)*100;

}

}


int  main()
{
    int N;

    cout<<"Enter the Total number of item = ";
    cin>>N;
    ShopingCart i[100];
    for(T=0;T<N;T++)
    {
        i[T].get_data();
    }

    cout<<"\nName of items";
    cout<<"\t\tQuantity ";
    cout<<"\titem price ";
    cout<<"\t\tGST ";

    for(T=0;T<N;T++)
    {
        i[T].put_data();
    }

        i[T].calculate();


        i[T].Total1();
        i[T].GST();


        return 0;

}
