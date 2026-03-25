#include <iostream>
using namespace std;
//conversion consts
const double celtofahmult=9.0/5.0;
const double fahtocelmult= 5.0/9.0;
const int fahoffset = 32;
int main(){
    int choice;
    double temp, converted;
    while(true){
        //menu
        cout<<"\nTemperature conversion\n";
        cout<<"1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin>>choice;
        if(choice==3){
            cout<<"Exiting temperature converter.\n";
            break;
        }
        if(choice==1){
            cout<<"Enter temperature in celsius:";
            cin>>temp;
            converted=(temp*celtofahmult)+ fahoffset;
            cout<<temp<<" C= "<<converted<< "F\n";
        }
        else if(choice==2){
            cout<<"Enter temperature in fahrenheit:";
            cin>>temp;
            converted=(temp-fahoffset)*fahtocelmult;
            cout<<temp<<" F= "<<converted<< "C\n";
        }
        else{
            cout<<"Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
