// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Array{
public:  
void readArr(int *&array, int size)
{
    array=new int[size];
    cout<<"reading array:";
   for(int i=0;i<size;i++)
     {
         cin>>array[i];
     } 
}
void printArr( int *array,int size)
{
    cout<<"printing array:";
     for(int i=0;i<size;i++)
     {
         cout<<array[i]<<" ";
     }
}
void mixSortArr(int *arr, int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
}
};
int main() {
    // Write C++ code here
    Array a;
    int*b;
    a.readArr(b,5);
    a.printArr(b,5);
    a.mixSortArr(b,5);
    cout<<endl;
    a.printArr(b,5);

    return 0;
}