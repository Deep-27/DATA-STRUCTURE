#include<bits/stdc++.h>
using namespace std;
int maxx(int a, int b, int c, int d, int e){
return max(a,max(b,max(c,max(d,e))));
}
int32_t main()
{
int w, x, y, z, q;
cin >> w >> x >> y >> z >> q;
cout << maxx(w,x,y,z,q) << endl;
return 0;
}