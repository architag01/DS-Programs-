#include<stdio.h>
#include<math.h>

int js(int arr[],int size,int key)
{
    int start=0;
    int end=sqrt(size);
    while(arr[end]<key && end<size)
    {
        start=end;
        end+=sqrt(size);
        if(end>=size)
        {
            end=size;
            printf("element not found");// bez if last value is less than key it means array doesnt contain that elemnet
            return -1;
        }
    }
    while (start<=end)
    {
        if(arr[start]==key)
        {
            printf("ELEMENT FOUND %d",start);
            return start;
        }
        else
        {
            start++;
        }
    }
    printf("element not found");
    return -1;

}

int main()
{
    int arr[]={1,5,10,11,13,15,16,17,18};
    int size=9;
    int key=8;
 int l=js(arr,size,key);
    return 0;
}
