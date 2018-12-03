#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,biti=0,m,g=0;
    cout<<"n=";cin>>n;
    m=n;
    if(n==0)
    {
        biti=1;
        return 0;
    }
    if(n>0)
    {
        while(n>0)
        {
            n=n>>1;
            biti++;
        }
    }
    else
        if(n==-1)
    {
        biti=1;
        return 0;
    }
    else
        while(n<-1)
    {
        n=n>>1;
        biti++;
    }
    if(m<0)
        m=-m;
    for(int i=1;i<=biti;i++)
    {
        n=m;
        n=n<<(32-1);
        n=n>>31;
        if(n==-1)
            n=1;
            else
                n=0;
            if(n==1)
                m+=pow(2,biti-i);
    }
    if(m==a)
        cout<<"este palindrom";
    else
        cout<<"nu este palindrom";
    }return 0;
}
