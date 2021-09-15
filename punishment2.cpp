#include <iostream>
#include <string>
using namespace std;

int main()
{
    int reps;
    string punishment = "I will always use object oriented programming. ";
    cout << "Enter the number of lines for the punishment: ";
    cin >> reps;
    //incorrect values error
    if (reps == 0)
        cout << " ";
    else if (reps < 0)
        cout << "You entered an incorrect value for the number of lines! \n";
   //could I have initiated my variables before? yes but easier to understand this way
   int typo;
   string typoPlacement = "I will always use object oriented programing. ";
   cout << "Enter the line for which we want to make a typo: ";
   cin >> typo;

    if (typo == 0)
        cout << punishment;
        /*"\n"*/
    else if (typo < 0)
        cout << "You entered an incorrect value for the line typo: ";
    //something not right here
    //tried int i = typo and that didnt work
    for(int i = 0; i < typo; i+=typo) {
        cout << typoPlacement;
    }
    /* do i need an arr and then mess with the indices to place the typo in the correct line?
    i++ would just create the typo a certain amount of times before the punishments
    you gotta set the for loop to 1 and not 0 because it will add an extra line because indices start at 0 so basically would 
    add the typo to the reps so say input 6 reps would output 7 lines total
    */
   for(int i = 1; i < reps; i++) {
       cout << punishment;
   }

    return 0;
}