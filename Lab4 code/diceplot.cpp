/********************************************************
 * CS 103 PA 1: Abundant numbers
 * Name: Chris Lim
 * USC email: chrislim@usc.edu
 * Comments (you want us to know):
 *
 * Description:
 *   Displays the top 3 most "abundant" (see writeup)
 *   numbers in the input sequence.  The input sequence
 *   is assumed to be valid natural numbers separated
 *   by spaces and ending with 0.
 *
 *   ABSOLUTELY NO ARRAY or `string`/`vector`/etc. usage
 *   is allowed!
 
 *   You may only declare: bool, int, or unsigned int
 *   No library functions (beyond cin/cout) are allowed.
 *
 *   You may NOT modify any of the given template code.
 *   This ensures our automated checkers can parse your
 *   output.  Failure to follow this direction will lead
 *   to a score of 0 on this part of the assignment.
 ********************************************************/

#include <iostream>
using namespace std;
#include <cstdlib>
int roll();
void printHistogram(int counts[]);
int ArrayList [499];

int main() {
    int number;
    srand(time(0));
    cout << "Number?";
    cin >> number;
    int testCounts[21]; // 21 options of sum of 4 dice => [4,24]
    for (int b =0; b<21; b++) {
        testCounts[b]=0;
    }
    for (int a=0; a<number; a++) {
        int random1 = roll();
        int random2 = roll();
        int random3 = roll();
        int random4 = roll();
        int sum = (random1+random2+random3+random4);
        testCounts[sum-4]++;
    }
    printHistogram(testCounts); // call your method
        return 0;
            }

int roll() {
    return ((rand() %6)+1);
}

void printHistogram(int counts[]) {
    for (int i=0; i<21; i++) {
        cout << i+4 << ":";
        for (int x=0; x<counts[i];x++) {
        cout << "X";
        }
        cout << endl;
    }
}

