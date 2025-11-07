#include <iostream>
using namespace std;
int main()
{
    int number_of_passengers;
    int age;
    double price = 10.00;
    double discount;
    double total_price= 0.0;
    cout<<"Welcome to Mortoti Transport"<<endl;
    cout<<"Enter the total number of passengers: ";
    cin>>number_of_passengers;
    for (int i = 0; i<number_of_passengers; i++){
            cout<<"Enter the age of passenger "<<i +1<<": ";
            cin>>age;
            if (age < 0){

                cout<<"Invalid age Nigga, Use you head"<<endl;
            }
            else if (age <5){
                total_price +=0;
            }
            else if (age>=65) {
                discount = (20.0/100)* price;
                price = price - discount;
                total_price += price;
            }
            else{
                total_price += 10;
            }

    }
    cout<<"The total price for all the tickets is: "<<total_price;

}
