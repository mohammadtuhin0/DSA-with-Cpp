#include <iostream>
#include <vector>
using namespace std;
int main() {
    // vector<int> vec = {1,2,3};    // 0;
    // cout<< vec[0]<< endl;

    // vector<int> vec(3,2);
    // cout<< vec[0]<< endl;
    // cout<< vec[1]<< endl;
    // cout<< vec[2]<< endl;


    vector <char> vec = {'a', 'b', 'c', 'd'};
    for(char val : vec){        // for each loop
        cout<< val << endl;
    }
    return 0;
}