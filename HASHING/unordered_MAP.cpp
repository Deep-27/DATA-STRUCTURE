/* 
HASHING: 

unordered_set;

unordered_map;
 */

// unordered_map;

// 1 1 2 2 1 1 2 2 3 3 3 3 4 4 4 4
/*
// keys values
    1     4
    2     4
    3     4
    4     4

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int>m;
    m["TCAC"] = 300;
    m["ARMSTRONG"] = 70;
    m["ARJUN"] = 3;
    m.insert({"Pranjal", 100});
    m.insert({"TCAC_ARMY", 30});
    // printing the values in the unordered_map:-1
    // for(auto it = m.begin(); it != m.end(); it++){
    //     cout << (it->first) << " " << (it->second) << endl;
    // }

    // printing the values in the unordered_map:-2
    // for(auto it : m){
    //     cout << it.first << " " << it.second << endl;
    // }

    // searching the values in the unordered_map:
    // if(m.find("Pranjal") == m.end()){
    //     cout << "not found" << endl;
    // }
    // else{
    //     cout << "found" << endl;
    // }

    m.erase("ARMSTRONG");

    m.erase(m.begin(), m.end());
    
    cout << m.size() << endl;
    
    
    return 0;
}