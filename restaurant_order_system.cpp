#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string menu_items []= { "Jollof rice" , "Banku & fish", " Rice & Stew", " Tuozafi"};
    int customer_items [100];
    string food;
    int quantity = 0;
    int quantity_of_1 = 0;
    int  quantity_of_2 = 0;
    int  quantity_of_3 = 0;
    int quantity_of_4 = 0;
    double main_price = 0, initial_price, discount, tax;

    double price [] = {50.00, 100.00, 65.00, 70.00};
    int order = 1;



       cout << " For Mortoti's Buy & Chop Restaurant, we buy with food codes. "<< endl;
       cout << " These are the corresponding codes: "<< endl;
       for ( int i = 0; i <= 3; i++){
            cout<< i <<" = "<< menu_items[i]<< endl;

       }
       cout <<" These are the corresponding prices: "<< endl;
       for ( int i = 0; i <= 3; i++){

        cout << i +1 << ". "<< price [i]<< " GHC"<<endl;
       }
       for ( int i = 0; i <= 5; i++){
       while ( order == 1){
        cout << " what food do you want? "<< endl;
         cin >> customer_items[i];
         if ( customer_items[i] == 0){
            quantity_of_1 = quantity_of_1 + 1;
         }
         else if (customer_items[i] == 1 ){
            quantity_of_2 = quantity_of_2 + 1;
         }
          else if (customer_items[i] == 2 ){
            quantity_of_3 = quantity_of_3 + 1;
         }
          else if (customer_items[i] == 3 ){
            quantity_of_4 = quantity_of_4 + 1;
         }



         quantity = quantity + 1;

         cout << " Do you want to buy something else? If yes, type 1 else type 0"<< endl;
         cin >> order;


       }
       }



       int amount [] = { quantity_of_1, quantity_of_2, quantity_of_3, quantity_of_4};
       for ( int i = 0; i <=3; i++){
             initial_price = amount[i]* price[i];
             main_price = main_price + initial_price;



       }
       if ( main_price <= 150){
            discount = 0;

       }
       else if ( main_price <=300 ){
            discount = 0.05 * main_price;

       }
       else
       {
           discount = 0.15 * main_price;

       }
       double discounted_price = main_price - discount;
       tax = 0.16 * discounted_price;
       double final_price = discounted_price + tax;
       system("cls");

       cout << " RECEIPTS "<<endl;
       cout<< "-------------------------------------------------------------------"<< endl;
       cout<<endl;

       cout<<"Food Item\tQuantity\tPrice\tTotal Amount"<<endl;

       for ( int i = 0 ; i < 4; i++){

        if ( amount[i] > 0){

            cout<< menu_items[i] << "\t"<< amount[i]<< "\t" << "\t"<< price[i]<< " \t"<< amount[i]* price[i]<<endl;
        }



       }
        cout << "----------------------------------------------------------\n";
    cout << "Subtotal:        " << main_price << " GHC" << endl;
    cout << "Discount:        " << discount << " GHC" << endl;
    cout << "Tax (16%):       " << tax << " GHC"<< endl;
    cout << "Total:           " << final_price << " GHC" << endl;
    cout << "======================================" << endl;
    cout << "Thank you for buying from Mortoti's Buy & Chop Restaurant!"<< endl;







    return 0;

}
