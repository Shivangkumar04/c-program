#include <iostream>
using namespace std;
int marks[]={34,45,56,26,20};
string res[5];
string check_result(int m)
{
    if(m>=35)
    {
        return "Pass  dd";
    }
    else
    {
        return "Fail";
    }
}
int main()
{
    for(int i=0;i<5;i++)
    {
        res[i]=check_result(marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<<" "<<res[i]<<endl;
    }
    return 0;
}
