//bubble sort
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void bubblesort (int *arr ,int length )
{
    for(int i=0;i<length-1;i++)
    {
        for(int j=0;j<length-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printarr(int *arr,int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={4,3,6,8,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,length);
    printarr(arr,length);
    system("pause");
    return 0;
}