#include <iostream>
using namespace std;

int i;
float amountf;
float sum=0;
double num;


float amount() {

if (num>0 && num<=20000) {
    amountf=(num/100)*22;
    cout << "Amount: " << amountf << " euro" << "\n" ;
    sum = sum + amountf;
    }
    else if (num>20000 && num<=30000) {
    amountf=(num/100)*29;
    cout << "Amount: " << amountf << " euro" << "\n" ;
    sum = sum + amountf;
    }
    else if (num>30000 && num<=40000) {
    amountf=(num/100)*37;
    cout << "Amount: " << amountf << " euro" << "\n" ;
    sum = sum + amountf;
    }
    else {
    amountf=(num/100)*39;
    cout << "Amount: " << amountf << " euro" << "\n" ;
    sum = sum + amountf;
    }

}

int main() {

cout << "Enter income: ";
cin >> num;
while (num != -1) {
      cout << "Income: " << num << " euro" << "\n" ;
      amount();
      cout << "Enter income: ";
      cin >> num;
   }
   cout << "Tax total: " << sum;
   }
