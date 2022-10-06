// Un-ordered set;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>s;
    s.insert(10);
    s.insert(1);
    s.insert(5);
    s.insert(50);
    s.insert(30);
    s.insert(100);
    s.insert(44);
    // size of unordered_set: 
    // cout << s.size() << endl;

    // printing the elements of unordered_set:-1
    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout << (*it) << " ";
    // }

    // printing the elements of unordered_set:-2
    // for(auto it : s){
    //     cout << it << " ";
    // }

    // removing all the elements of set;
    // s.clear();

    // removing a specific element from set:-1
    // s.erase(30);

    // removing a specific element from set:-2
    // auto it = s.find(30);
    // s.erase(it);

    // searching elements in unordered_set:
    if(s.find(505) != s.end()){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}