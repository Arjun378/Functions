/*22070123150 Experiment */
/*number reversal using recursion*/
#include<iostream>
using namespace std;
void reverse(int n)
{
   if (n < 10) {
      cout<<n;
      return;
   }

   else{
      cout<<n%10;
      reverse(n/10);
   }
}
int main()
{
   int n=1234;
   reverse(n); 
   return 0;
}