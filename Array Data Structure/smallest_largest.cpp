#include <iostream>
#include <climits>
using namespace std;
int main() {
    int number[5]  = {85, 75, 12, 152, 66};

    // for(int i=0; i<5; i++) {
    //     cin>> number[i];
    // }
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<5; i++) {
        // if(number[i] < smallest) {
        //     smallest = number[i];
        // }
        smallest = min(number[i], smallest);
        largest = max(number[i], largest);
    }

    cout<<"Smallest = " <<smallest <<endl;
    cout<< "Largest = " <<largest <<endl;
    return 0;
}