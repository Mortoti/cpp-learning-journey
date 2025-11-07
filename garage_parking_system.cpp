#include <iostream>
using namespace std;
int main()
{
    int check = 0;
    string user_input;
    // 1 means that floor is available and 0 means otherwise
    int  garage [5][20]= {0};
    garage [0][12]= 1;
    garage [1][1]= 1;
    garage [3][14]= 1;
    garage [1][10]= 1;
    garage [2][3]= 1;
    garage [4][18]= 1;
    garage [2][19]= 1;
    garage [3][17]= 1;
    garage [2][4]= 1;
    garage [4][3]= 1;
    garage [1][2]= 1;
    cout<< " Welcome To Mortoti's Garage"<< endl;
    cout<< " Note: All inputs should be in small letters !!!"<<endl;
    cout<< " Type check to see the parking slots available"<< endl;
    cout<< " Type nearest to check the nearest available slot"<<endl;
    cout<< " Type display to check the total number of available slots per floor"<< endl;
    cout<< " Type exit to end"<<endl;
    while (check == 0){
            cout << " < "<<endl;
            getline(cin, user_input);
            cout<<endl;
                    if (user_input == "check"){
                            cout<< "These are the available slots: "<< endl;
                            for (int i = 0; i <= 4; i++)

                                for (int j = 0; j<=19; j++){
                                    if (garage[i][j] == 1){
                                        cout<< " Floor "<< i+1 <<" , Slot "<< j+1<< " is Available"<<endl;
                                        }
                                    }
                                    }
                    else if ( user_input == "nearest"){
                            bool found = false;
                            for ( int i = 0; i<=4; i++){

                                for ( int j = 0; j<=19; j++){
                                        if (garage[i][j] == 1){
                                            cout<< " The nearest available slot is on floor "<< i+ 1<<" and slot "<< j+1<< endl;
                                            found = true;
                                            break;}
                                            }
                                if (found) break;

                                    }
                                    if (!found){
                                    cout<<" No available Slots"<< endl;}
                    }
                    else if (user_input=="display"){

                        for (int i =0 ; i<=4; i++){
                            int total_count= 0;
                                for (int j = 0; j <= 19; j++){
                            if (garage[i][j]== 1){
                                    total_count ++;
                            }

                        }
                        cout << " The available slots on floor "<< i+ 1<< " is "<< total_count<< endl;
                    }
                    }
                    else if (user_input== "exit"){
                        cout<<" Exiting the program. Have a nice day from Derry Elijah"<< endl;
                        break;
                    }
                    else {
                        cout<< "Invalid input!!!"<<endl;
                    }

    }
    return 0;
}

