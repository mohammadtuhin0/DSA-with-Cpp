#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector <int> vec;

    cout<<"Size = " <<vec.size() <<endl;


    // Push_back
    vec.push_back(25);
    vec.push_back(30);
    vec.push_back(35);
    cout<< "After push back_size = " <<vec.size() <<endl;
    
    for(int val : vec) {
        cout<< val <<endl;
    }
    return 0;
}