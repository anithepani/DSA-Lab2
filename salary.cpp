#include <iostream>

using namespace std;


int main() {
    const int size = 20;   
    int *p = new int[size];


    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i+1) << ": ";
        cin >> p[i];
    }
// Apply increment formula
    for (int i = 0; i < size; i++) {
        p[i] = p[i] + p[i] / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    delete [] p;
    return 0;

}