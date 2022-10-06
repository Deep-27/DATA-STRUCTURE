#include <iostream>
using namespace std;
int main()
{
    int n,e,o;
    cin >> n;
    
    int array[n];
    int arrayeven[n];
    int arrayodd[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2==0)
        {
            arrayeven[e]=array[i];
            e++;
        }
        else 
            arrayodd[o]=array[i];
            o++;
    
    }
    for (int i = 0; i < e; i++)
    {
        cout<<arrayeven[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i <o ; i++)
    {
        cout<<arrayodd[i]<<" ";
    }


    return 0;
}