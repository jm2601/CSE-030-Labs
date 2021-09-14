#include <iostream>
#include <string>
using namespace std;

//can ommitt namespace if you use "std" keyword 
//followed by "::" operator for string (and cout) objects

int main()
{
    int reps;
    string punishment = "I will always use object oriented programming.";
    cout << "Enter the number of lines for the punishment: ";
    cin >> reps;
    //incorrect answers (letters/negative#s/punctuations) response if-else statement
    /*
    if (reps == 0)
        cout << " ";
    else if (reps < 0)
        cout << "You entered an incorrect value for the number of lines!";
    else if (reps > 0)
        cout << punishment;
    */

   // definitely gonna need this
   //for(int i = 0; i < reps; ++i)

   /*
   while (reps > 0) {
    cout << punishment << ", ";
    break;
   }
    */
   if (reps == 0)
        cout << " ";
    else if (reps < 0)
        cout << "You entered an incorrect value for the number of lines!";
   /*for loop to reiterate string 
    for (statement 1; statement 2; statement 3) {
        code block to be executed
    }
    Statement 1 is executed (one time) before the execution of the code block.

    Statement 2 defines the condition for executing the code block.

    Statement 3 is executed (every time) after the code block has been executed.
    */
   for(int i = 0; i < reps; i++) {
       //cout << reps << ", ";
       //cout << punishment <<endl;
       cout << punishment;
        
   }
   /* if (reps == 0)
        cout << " ";
    else if (reps < 0)
        cout << "You entered an incorrect value for the number of lines!";
   */

    return 0;
}
