#include <iostream>
using namespace std;

int main() {

float mark;
int n,i,crowd,maxi;
crowd=0;
n=40;
double mini;
float num[40], sum=0.0, average,count,perc;
count=0;

 for(i = 0; i < n; ++i)
    {
        cout << i + 1 << "Enter mark: ";
        cin >> num[i];
        sum += num[i];
    }

      maxi = num[0];
      mini = num[0];

    for (i = 0; i < n; i++)
    {

    if (num[i] > 6.5) {
       crowd++;
    }

    if (num[i] == 6.5) {
       crowd++;
    }
    }

    for (i = 0; i < n; i++)
    {

    if (num[i] > 8.5) {
       count++;
    
}

    }

    for (i = 1; i < n; i++)
    {

        if (num[i] > maxi)
            maxi = num[i];


        if (num[i] < mini)
            mini = num[i];
    }

average=sum/n;
perc=(count/n)*100;

cout << "Maek point average: " << average << "\n";
cout << "6.5 or higher courses: " << crowd << "\n";
cout << "Highest mark: " << maxi << "\n";
cout << "Lowest mark: " << mini << "\n";
cout << "Percentage of courses over 8.5: " << perc << "%";
