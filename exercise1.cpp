// a program to determine bonus for employees
#include <iostream>
using namespace std;


int main() { 
    float years, salary, bonus, net_sal;

    cout<< "enter you years of experience" <<endl;
    cin>>years;

    cout<<"Enter your salary"<<endl;
    cin>> salary; 

    if (years > 10 ) {
        bonus = 0.1 * salary;
        net_sal = salary + bonus;
    } 

    else if (years >= 6 && years <= 10){
        bonus = 0.08 * salary;
        net_sal = salary + bonus; 
    }

    else {
        bonus = 0.05 * salary;
        net_sal = salary + bonus;
    }
    
    cout<<"bonus is "<<bonus <<"and the net salary is"<< net_sal;
    return 0;
}