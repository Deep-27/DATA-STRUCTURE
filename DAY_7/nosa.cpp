#include <iostream>
using namespace std;
bool checkEvenOdd(int num);

int main(){
   int num;
   bool isEven;
   cout<<"Enter any number: ";
   //Storing the entered value in variable num
   cin>>num;
   //Calling the function that checks even odd
   isEven = checkEvenOdd(num); 
   if(isEven)   
      cout<<num<<" is an even number"; 
   else   
      cout<<num<<" is an odd number";
  
   return 0;
}
/* This function checks whether the passed number is even
 * or odd. If the number is even then this function returns
 * true else it returns false.
 */
bool checkEvenOdd(int num){
   bool b;
   /* If number is perfectly divisible by 2 then it is
    * an even number else it is an odd number
    *
    */
   if (num % 2 == 0)
      b=true;
   else 
      b=false;

   return b;
}