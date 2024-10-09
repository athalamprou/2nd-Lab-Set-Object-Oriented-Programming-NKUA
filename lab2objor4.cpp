#include <iostream>
using namespace std;

double calc(double, double, double, double);



int main(){

double a, b, area, perim;
char ans;

    jump:
    cout<<"Length: ";
    cin>>a;
    cout<<"Width: ";
    cin>>b;

    if (a<=0 || b<=0){
        cout << "Invalid input, enter a positive number." << "\n";
        goto jump;
    }

    if (a>0 && b>0){
    calc(a,b,perim,area);
    }

    cout << "Press 'N' to re-enter , in any other case press any key " << "\n";
    cin >> ans;

    if (ans == 'N'){
        goto jump;
    }

    cout<<endl;
    return 0;

}


double calc(double a, double b , double perim , double area){

area=a*b;
cout << "Acreage: " << area << "\n";

perim=2*(a+b);


cout << "Perimetre: " << perim << "\n";

}
