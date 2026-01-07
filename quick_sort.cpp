#include<iostream>
using namespace std;
int partition(int arr[],int st,int end)
{
    int pos=st;
    for(int i=st;i<=end;i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
     return pos-1;
}
void quick_sort(int arr[],int st,int end)
{
    if(st>=end)
    {
        return;
    }
    int pivot=partition(arr,st,end);
    quick_sort(arr,st,pivot-1);
    quick_sort(arr,pivot,end);
    return;
}
int main()
{
    int arr[]={6,4,2,8,13,7,11,9,3,6};
    quick_sort(arr,0,9);
    for(int i=0;i<10;i++)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}