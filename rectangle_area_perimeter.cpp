#include <iostream>
using namespace std;
int main (){

    double length, breadth, area, perimeter;
    cout << " Enter the length: "<< endl;
    cin >> length;
    cout << " Enter the breadth: "<< endl;
    cin >> breadth;
    area = length * breadth;
    perimeter = length + length + breadth + breadth;
    cout << " The area of the rectangle is: "<< area << endl;
    cout << " The perimeter of the rectangle is: "<< perimeter<< endl;
    return 0;
}
