/*2. Write a program called RepeatAdditionQuiz.cpp that uses a loop to randomly
generate two integers. Store these integers as number1 and number2. Prompt a
user to provide the correct answer when the two integers are added by printing
out "What is number1 + number2 ?:". If the user provides the wrong answer, print
out "Wrong answer, try again, what is number1 + number2 ?". If the user finally
provides the correct answer, print out "That answer is correct" and end the
program.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number1, number2, guess, sum;
    int n = 0;

    cout << "enter the range of numbers to be generated" << endl;
    cin >> n;

    srand(time(0));

    number1 = rand() % n;
    number2 = rand() % n;
    sum = number1 + number2;

    for ( ; ;)
    {

        cout << "guess the sum of numbers to be generated" << endl;
        cin >> guess;

        if (guess == sum)
        {
            cout << "that answer is coorect" << endl;
            break;
        }
        else
        {
            cout << "wrong answer,  try again " << endl;
        }
    }
    return 0;
}