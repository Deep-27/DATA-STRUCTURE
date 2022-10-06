#include <iostream> 
using namespace std;
class sample {

static int n;

 int i;
 public:
sample() {

n++;

i =  n;

cout << "constructor number" << i<< endl;

if(i== 2)

throw 2;

}

~sample() {

cout << "Destructor number " << i << endl; }

}; 
int sample : : n= 0;

int main() {
int a;
try {

   int Test a[3];

} catch (int m) {

cout << "Caught " << m << endl;

}

}