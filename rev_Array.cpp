#include <iostream>
using namespace std;


void rev(int *, int); 

int main(){
    int arr[5]={1,2,3,4,5};
    rev(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}


void rev(int *ptr, int size){
    int arr2[size];
    for (int i = 0 ; i < size; i++)
    {
        arr2[i]= *(ptr+i);
    }
    for (int i = 0, j= size-1; i < size; i++,j--)
    {
        *(ptr+i)=arr2[j];
    }
    
    
}