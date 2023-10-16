/*22070123150 Experiment 11*/
/*functions call by ref*/
#include<iostream>
using namespace std;
void swap(int *x, int *y);
int main()
{
    int i, j;
    i = 5; 
    j = 8;
    cout<<"Before swap: "<<i<<" "<<j <<endl;
    swap(&i, &j);
    cout<<"After swap: "<<i<<" "<< j;
}
void swap(int *m, int *n)
{
    int  temp;
    temp = *m;
    *m = *n;
    *n = temp;
    return;
}
