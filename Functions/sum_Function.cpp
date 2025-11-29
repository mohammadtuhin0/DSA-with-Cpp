#include <iostream>
using namespace std;

// sum of two number :
int sum (int a, int b) {
    int s = a + b;
    return s;
}
// Minimum of two number :
int minOfTwo(int a, int b) {        // parameters
    if(a < b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    cout<< sum(10,5)<< endl;

    cout<<"Min : " <<minOfTwo(5, 3)<<endl;      // arguments :

}