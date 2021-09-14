#include <iostream>
#include <string>
using namespace std;

int main()
{
    int reps;
    string punishment = "I will always use object oriented programming.";
    cout << "Enter the number of lines for the punishment: ";
    cin >> reps;
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