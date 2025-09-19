#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string to_rev;
    cout << "Enter the String to be reversed : ";
    getline(cin,to_rev);
    char* array = new char[to_rev.length() +1];
    for(int i=to_rev.length()-1;i>=0;i--){
        array[to_rev.length()-i] = to_rev[i];
        cout << array[to_rev.length()-i];
    }
}