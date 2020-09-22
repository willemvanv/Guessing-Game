#include <iostream>

//Willem van Veldhuisen
//9/21/20

using namespace std;
//main
int main() {
  bool running = true;
  while (running == true) {
  //variables
  int turn = 0;
  int input = 101;
  srand (time(NULL));
  int num = rand() % 100 + 1;
  bool Correct = false;
  //Begin
  cout << "Guess a number between 1 and 100" << endl;
  //One game:
  while (Correct == false) {
    cin >> input;
    int no = 101;
    //Locate input
    for (int a = 1; a < 101; a++) {
      if (a == input) {
	no = a;
      }
    }
    //Determine input in comparisin to the answer
    if (no == 101) {
      cout << "Invalid Input, Try Again." << endl;
    } else {
      if (no == num) {
	turn++;
	Correct = true;
      } else if (no > num) {
	cout << "Lower" << endl;
	turn++;
      } else if (no < num) {
	cout << "Higher" << endl;
	turn++;
      }
    }
  }
  //Ending statement
      cout << "Correct! It took you " << turn << " tries." << endl;
      //Ask to play again
      cout << "Play Again?(y/n)" << endl;
      char yn;
      cin >> yn;
      if (yn == 'Y' || yn == 'y') {
	running = true;
	Correct = false;
      } else if (yn == 'N' || yn == 'n') {
	cout << "Thank you for playing" << endl;
	running = false;
      }
  }
  return 0;
}
