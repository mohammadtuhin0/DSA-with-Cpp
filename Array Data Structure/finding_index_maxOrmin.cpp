#include <iostream>
#include <climits>
using namespace std;
int main() {
    int num[5] = {55, 87, 12, 54, 37};      //index : {0, 1, 2, 3, 4}

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestIndex = 0;
    int largestIndex = 0;

    for(int i= 0; i<5; i++) {
        if(num[i] < smallest) {
            smallest = num[i];
            smallestIndex = i;
        }
        if(num[i] > largest) {
            largest = num[i];
            largestIndex = i;
        }
    }

    cout<< "Smallest = " <<smallest << "at index :" <<smallestIndex<<endl;
    cout<<"Largest = " <<largest << "at index : " <<largestIndex <<endl;
}