#include <iostream>

using namespace std;
int main (){

    double  discount, bill, total_bill;
    cout << " Enter the amount: "<< endl;
    cin>> bill;
    if ( bill >=50){
            discount = (10.0/100)* bill;
        total_bill= bill - discount;
    }
    else if ( bill >= 20 && bill < 50){
            discount = (5.0/100)* bill;
        total_bill = bill - discount;

    }
    else {
        total_bill = bill;
    }

    cout << " The total bill after the discount is "<< total_bill<< endl;
    return 0;
}
