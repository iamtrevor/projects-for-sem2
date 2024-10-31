#include <iostream>
using namespace std;

class Movie{
public: 
    string title;
    string director;
    float duration;
    float rating;

    void display(){ 
        cout<<"the title is = "<<title<<endl;
        cout<<"the director is = "<<director<<endl;
        cout<<"the duration is = "<<duration<<endl;
        cout<<"the rating is = "<<rating<<endl;
    }

    void rateMovie(float rating){
        if(rating >=1 && rating <= 5){
            cout<<"the rating is valid"<<endl;
        } else {
            cout<<"Invalid rating"<<endl;
        }
    }
};

int main(){
    Movie Movie1;
    Movie1.title = "Inception";
    Movie1.director = "Christopher Nolan";
    Movie1.duration = 148.0;
    Movie1.rating = 4.8;

    Movie1.display();
    Movie1.rateMovie(4.8);

    return 0;
}