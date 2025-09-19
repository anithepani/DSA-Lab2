#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the Length of the String : ";
    cin >> size;
    cin.ignore();
    char* array = new char[size+1];
    cout << "Enter the String to reverse : ";
    
    cin.getline(array,size+1);
    
    int start =0;
    int end = size-1;
    while(start<end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
    for(int i =0;i<size;i++){
        cout << array[i];
    }
    
   
}