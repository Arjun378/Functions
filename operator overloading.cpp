/*22070123150 Experiment operator overloading*/
#include<iostream>
using namespace std;
class date
{
    int d, m, y;
    public:
    date(int dd, int mm, int yy)
    {
        d = dd;
        m = mm; 
        y = yy;
    }
    date(){}
    date operator- (date d1)
    {
        date tmp;
        tmp.d = d-d1.d;
        tmp.m = m-d1.m;
        tmp.y = y-d1.y;
        return tmp;
    }
    date operator+ (int days)
    {
    }
    public:
    print_date()
    {
        cout<<d<<"/"<<m<<"/"<<y<<endl;
    }
    void print_age()
    {
        cout<<y<<" years "<<m<<" months "<<d<<" days "<<endl;
    }
};
main()
{
    date today(29, 8, 2023), dob(12, 04, 2000);
    today.print_date();
    dob.print_date();
    date age = today-dob;
    age.print_age();
}