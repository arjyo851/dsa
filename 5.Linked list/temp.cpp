// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    vector<int> v;
    for(int i=0;i<5;i++){
        v.push_back(i);
    }
    v.push_back(5);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    int count = v.size();
    for(int i=0;i<count;i++){
        if(v[i] == 3){
            v.erase(v.begin()+i);
    }
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
