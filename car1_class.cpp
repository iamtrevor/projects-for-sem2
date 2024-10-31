#include <iostream>
using namespace std;

class car{
public:
    string brand;
    string model;
    float price;
    int mileage;

    car(string brand, string model): brand(brand), model(model){
        price = 0;
        mileage = 0;
    }
    
    public:
    void printdetails(){
        cout<<"the model is"<<model<<endl;
        cout<<"the brand is"<<brand<<endl;
        cout<<"the price is"<<price<<endl;
        cout<<"the mileage is"<<mileage<<endl;
    }

    void drive(int distance){
        if(mileage > 0){
        cout<<"miliage is"<<mileage<<endl;
        }
    }
};
int main(){
    car cartype("toyota", "corolla");
    cartype.price = 20000;
    
    cartype.mileage = 5000;

    cartype.printdetails();
    cartype.drive(100);


   return 0;
}
