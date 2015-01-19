#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <math.h>
using namespace std;
bool isrequired(int i, int N);
int main(void)
{
    int N;
    cin>>N;
    if(N<3 && N >7)
    return 0;
    int i;
    int max=10^(N);
    i=10^(N-1);
    cout<<"initial i: "<<i<<endl;
    for(;i<max;i++)
    {
        if(isrequired(i,N))
        cout<<i<<endl;
    }
    return 0;
}
    bool isrequired(int i, int N)
    {
        int result=0;
        while(N!=0)
        {
            if(N==1)
            result=result+(i%10)^(N);
            else
            result=result+(i/(10^(N-1)))^(N);
            N--;
        }
        if(result==i)
        return true;
        return false;
    }
