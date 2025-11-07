//write a code that will accept an alphabet and give out the number equivalent
#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout << " Enter an alphabet and i will generate the number equivalent for you" << endl;
    cin >> alphabet;
    cout << "Uppercase: " <<(int) toupper(alphabet)<< " Lowercase: "<< (int) tolower(alphabet);

    return 0;
}
