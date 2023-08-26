// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Array{
public: 
void swapAlternate(int *arr, int size)
{
    int temp,i,j;
    if(size%2==0)
    {
      for (i = 0; i < size; i = i + 2) {

        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    else
    {
        for (i = 0; i < size-1; i = i + 2) {

        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
}
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
     cout<<"\n";
}
void SortArr(int *arr, int size)
{
    int i,j,temp;
    cout<<"sorted the array.\n";
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                swapArr(arr+i,arr+j);
            }
        }
    }
    printArr(arr,size);
    
}
void reverseSortArr(int *arr, int size)
{
    int i=0,j;
    SortArr(arr,size);
    cout<<"reversed the sorted array.";
    j=size-1;
     
          while(i<=j)
          {
             
             swapArr(arr+i,arr+j);
              j--,i++;
          }
          
      
   cout<<"\n";
   printArr(arr,size);
    
}
void reverseArr(int *arr, int size)
{
     cout<<"reversing the array:";
     for(int i=0;i<size;i++)
     {
         cout<<arr[i]<<" ";
     }
}
void swapArr(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
};
int main() {
    // Write C++ code here
    Array *a;
    Array k;
    int*b;
    a->readArr(b,5);
    a->printArr(b,5);
    a->reverseSortArr(b,5);
 
    int y=3 , z=4;
   
    cout<<"\n"<<y<<" "<<z;

    return 0;
}
