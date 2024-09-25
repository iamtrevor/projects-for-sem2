//do while loop to find the sum of numbers from 1-100
#include <iostream>
using namespace std;

int main(){
    int num = 1, sum;
    do{
        cout<<num<<endl;
        num++;
        sum = num + sum;
        
    }while(num <= 100);

     cout<<"the sum is"<<sum<<endl;
    return 0;
}