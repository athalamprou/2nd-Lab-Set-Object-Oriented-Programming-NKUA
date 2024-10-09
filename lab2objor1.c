#include <iostream>
using namespace std;

float mark;

int main() {

 cout << "Insert mark: ";
 cin >> mark;

 if (mark < 5) {
  cout << "Rejected";
} else if (mark >= 5 && mark < 6) {
  cout << "Good";
} else if (mark >= 6.5 && mark < 8.5) {
  cout << "Very Good";
} else {
  cout << "Excellent";
}

return 0;

}
