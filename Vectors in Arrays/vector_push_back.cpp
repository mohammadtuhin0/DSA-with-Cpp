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
    

    // pop back: 
    vec.pop_back(); // 35

    // front: 
    cout<< vec.front() <<endl;

    // back:
    cout<< vec.back() <<endl;

    
    for(int val : vec) {
        cout<< val <<endl;
    }
    return 0;
}