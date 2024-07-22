#include <iostream>
using namespace std;

int main(){
    int num1,num2,choice;
    cout<<"Enter 1 to add "<<endl;
    cout<<"Enter 2 to subtract "<<endl;
    cout<<"Enter 3 to multipy "<<endl;
    cout<<"Enter 4 to divide "<<endl;
    cin>>choice;
    cout<<"Enter the two numbers";
    cin>>num1>>num2;
    if(choice==1){
        cout<<"The sum is "<<num1+num2<<endl;
    }
    else if(choice==2){
        cout<<"The difference is "<<num1-num2<<endl;
    }
    else if(choice==3){
        cout<<"The product is "<<num1*num2<<endl;
    }
    else if(choice==4){
        cout<<"The Division is "<<num1/num2<<endl;
    }
    else 
        cout<<"invalid input";

    return 0;
}