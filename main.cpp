#include <iostream>
using namespace std;

int main()
{
    
    int i=2,count=0,p=1;
    while(i)
    {
        if(count==5)
        {
            break;
        }
        else
        {
         for(int j=2;j<=i/2;j++)
         {
            if(i%j==0)
            {
              p=0;
              break;
            }
         }
         if(p==1)
         {
        cout<<i;
        count++;
         }
         p=1;
    }
   
      i++;

    }

    return 0;
}
