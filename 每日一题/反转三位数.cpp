#include <iostream>
using namespace std;
main(int argc, char const *argv[])
{
    string str;
    string str1;
    cin>> str;
    for (int i = str.size()-1; i >= 0 ; i--)
    {
        str1 += str[i];
    }
    cout << str1;
}
