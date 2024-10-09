NKUA's Introduction to Object Oriented Programming 2nd Exercises Pack in C++

**Exercise 1**

Write a C++ program that will read a student's grade and display the following:
- "Rejected" if the grade is less than 5,
- "Good" if it is greater than or equal to 5 and less than 6.5,
- "Very Good" if it is greater than or equal to 6.5 and less than 8.5,
- "Excellent" if it is 8.5 or higher.

**Exercise 2**

Write a C++ program that reads a student's grades for all their courses and calculates and displays the following:
  i. Their average grade (30 courses).
  ii. The number of courses where the grade was 6.5 or higher.
  iii. Their highest and lowest grade.
  iv. The percentage of courses where the grade was 8.5 or higher.

**Exercise 3**

In the following table, the income tax calculation scale is provided:

| Income              | Percentage |
|---------------------|------------|
| 0-20,000            | 22%        |
| 20,001-30,000       | 29%        |
| 30,001-40,000       | 37%        |
| 40,001 and above    | 39%        |

Write a C++ program that:

a) Reads the annual income of each taxpayer from the screen and displays it.  
b) Calculates and displays the tax amount corresponding to the taxpayer using a function.  
c) Stops the input process when the value -1 is entered instead of income.  
d) After the input process is completed, the program will display the total tax for all taxpayers entered.

**Exercise 4**

A C++ function should be written with four formal parameters: a, b, perim, and area, all of type double. In the function calls, the values corresponding to the parameters a and b will be passed, while the corresponding values for perim and area will be passed by reference. The function will calculate the perimeter and the area of the rectangle with sides a and b and will assign the computed values to the parameters perim and area, respectively.

Next, a program should be written in C++ that will use the function above to calculate and display the perimeter and area of a rectangle. The program will first ask the user to input the dimensions (a, b) of the rectangle. Specifically, the program will perform the following:

(a) It will display a message asking the user to input the dimensions of the rectangle and will read the input.

(b) It will check if the dimensions entered by the user are positive numbers. If they are not, the program will display a corresponding error message and prompt the user to enter the dimensions again.

(c) If the dimensions are positive, the program will call the function to calculate the perimeter and area and display the results on the screen.

(d) The program will then ask the user if they want to continue, and depending on the answer, it will either repeat the above process or terminate its execution.

