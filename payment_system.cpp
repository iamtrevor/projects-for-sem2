//a program for a payment system
#include <iostream>
using namespace std;


int main() {
    int gross_pay, taxes, net_pay, hours, rate, aft_gross;
    
    cout<<"Enter your income"<<endl;
    cin>>gross_pay;

    cout<<"Enter the number of hours"<<endl;
    cin>>hours;

    
    if(hours > 40 && gross_pay<600){
        
        float taxe = 0.15 * gross_pay;
        cout<<"The total income(gross_pay) is:"<<gross_pay<<"and the tax charged was"<<taxe;
    }
    else if(hours> 40 && gross_pay > 600){
        
        float taxe = 0.20 * gross_pay;
        cout<<"The total income is(gross pay) is"<<gross_pay<<"and the taxe charged was"<<taxe;
    }
     
     

    return 0;
}


