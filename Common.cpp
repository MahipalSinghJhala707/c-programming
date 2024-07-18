#include <iostream>
using namespace std;

void common(int *,int *,int *,int ,int,int);

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,3,9,5};
    int arr3[5]={3,13,5,32,44};
    common(arr1,arr2,arr3,5,5,5);
    
    return 0;
}


void common(int *ptr1, int *ptr2, int *ptr3, int size1, int size2, int size3){

    int arr[size1];
    int c=0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (*(ptr1+i)==*(ptr2+j)){
                arr[c++]= *(ptr2+j);
            }
        }

    }
    
    int arr6[c];
    int k=0;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < size3; j++)
        {
            if(arr[i]==*(ptr3+j)){
                cout<<arr[i]<<endl;
            }
        }
        
    }  
}