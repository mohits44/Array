// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[6]={2,3,2,5,6,5};
    int bul[6]={1,1,1,1,1,1};
    int count=0;
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(i==j)
            continue;
           
            if(arr[i]==arr[j])
            {
            bul[i]=0;
            bul[j]=0;
            }
        }
    }
    for(i=0;i<6;i++)
    {
        if(bul[i]==1)
        count++;
    }
  cout<<count;
    return 0;
}
