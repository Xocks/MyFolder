#include <iostream>


using namespace std;

int i = 0;
int maxvl = 0;
int ms[100005];
char a,b;
int lian = 0;
int main()
{
    while(cin >> a >> b >> ms[i]) 
    {
        
        if(a==b)
        {
            if(lian==0)lian=1;
            else 
            {
                if(ms[i]-ms[i-1]<=1000)
                    {
                        lian++;
                    }
                else lian=1;
            }
            if(lian>maxvl)maxvl = lian;
        }
        if(a!=b)
        {
            lian = 0;
        }
        i++;
    }
    cout << maxvl;
    return 0;
}