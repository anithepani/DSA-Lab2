#include <iostream>
using namespace std;


void analyze_pointer(int *ptr){
    cout << "The memory location the pointer points to :";
    cout << ptr <<endl;
    cout << "The value stored inside the memory location which the pointer points to :";
    cout << *ptr<<endl;
}
int main(){
    // Dynamic Memory Location
    int iValue_stack = 7;
    int *pointer_stack = &iValue_stack;
    analyze_pointer(pointer_stack);
    int *iValue_heap = new int[7];
    analyze_pointer(iValue_heap);

delete iValue_heap; 
return 0;

}