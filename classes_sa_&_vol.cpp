//  program to calculate volume & surface area

#include <iostream>
using namespace std;

//function declaration
float PI = 3.142;
float volume(int radius, int height);
float surface_area(int radius, int height);

//cylinder class

class cylinder{
    public:
    float volume(int radius, int height){
        
        return PI * radius * radius * height;
    };

    float surface_area(int radius, int height){
       
        return  2 * PI * radius * radius + 2 * PI * radius * height;;
    }
};

int main(){
    
    cylinder cyl;

    int x = 20;
    int y = 20;

    int sa = cyl.volume(x, y);
    int vol = cyl.surface_area(x, y);

    cout<<"the volume is"<<sa<<"and the surface area is"<<vol<<endl;

    return 0;
}


