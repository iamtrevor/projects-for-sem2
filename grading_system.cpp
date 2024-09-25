// a program for a grading system

#include <iostream>
using namespace std;

int main(){
    float score1, score2, score3, average;
    int category; 
    
    //prompting the user for grades
    cout<<"Please three students should enter their geades"<<endl;
    cin>> score1, score2, score3;

    //get the average score
    average = (score1 + score2 + score3) / 3; 
    cout<<"the average score is "<<average<<endl;

    //if statements to determine grade
    if(average >= 70 && average <= 100){
        category = 1; //A
    }

    else if(average >= 50 && average <= 69){
        category = 2; //B
    }
    else if(average >=40 && average <= 59){
        category = 3; //C
    }

    else if(average >= 30 && average <= 39){
        category = 4;//D
    }

    else {
        cout<<"FAIL!"<<endl;
    }

    switch(category){

        case 1:
        cout<<"Grade: A"<<endl;
        break; 

        case 2:
        cout<<"Grade: B"<<endl;
        break;

        case 3:
        cout<<"Grade: C"<<endl;
        break;

        case 4:
        cout<<"Grade: D"<<endl;
        break;

        case 5:
        cout<<"FAIL!!!"<<endl;
        break;

        default:
         cout<<"Invalid score"<<endl;
    }

    return 0;
}







