#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

// This is where the program will begin.
int main() {

  // 
  int pick;
  int chosen;
  int i;

// This question will ask the user what language they are fluent in and will allow the user to choose and type in the selected language.
  cout << "Which language are you fluent in?" << endl;
  cout << "(Type in the number to choose and then press enter to continue)" << endl;
  cout << "1. Arabic" << endl;
  cout << "2. Swedish" << endl;
  cout << "3. Japanese" << endl;
  cout << "4. Greek" << endl;
  cout << "5. Hindi" << endl;
  cout << "6. German" << endl;
  cout << "7. Spanish" << endl;
  cin >> pick; 
    switch (pick)
    {
  case 1:
  cout << "You have selected Arabic!" << endl;
    break;

  case 2:
  cout << "You have selected Swedish!" << endl;
      break;

  case 3:
  cout << "You have selected Japanese!" << endl;
    break;

  case 4:
  cout << "You have selected Greek!" << endl;
      break;

  case 5:
  cout << "You have selected Hindi!" << endl;
    break;

  case 6:
  cout << "You have selected German!" << endl;
      break;
      
  case 7:
  cout << "You have selected Spanish!" << endl;
      break;
      }

  
// This question will ask the user which area they are specialized in and will allow the user to choose and type in the selected specialization.
  cout << "\n\nWhich area are you specialized in?" << endl;
  cout << "(Type in the number to choose and then press enter to continue)" << endl;
  cout << "1. Radiology" << endl;
  cout << "2. Sports Medicine" << endl;
  cout << "3. Dermatology" << endl;
  cout << "4. Forensic Pathology" << endl;
  cout << "5. Plastic, Reconstructive and Aesthetic Surgery" << endl;
  cout << "6. Emergency Medicine" << endl;
  cin >> pick; 
  switch (pick)
    {
  case 1:
  cout << "You have selected Radiology!" << endl;
    break;

  case 2:
  cout << "You have selected Sports Medicine!" << endl;
      break;

  case 3:
  cout << "You have selected Dermatology!" << endl;
    break;

  case 4:
  cout << "You have selected Forensic Pathology!" << endl;
      break;

  case 5:
  cout << "You have selected Plastic, Reconstructive and Aesthetic Surgery!" << endl;
    break;

  case 6:
  cout << "You have selected Emergency Medicine!" << endl;
      break;
      }

  
// In the string, I added the counties and inside the brackets are the total of languages and specializations. 
string country[7][6] = {{"Lebanon","Jordan"}, {"Slovakia","Netherlands"}, {"South Korea","Thailand"}, {"Moldova","Romania"}, {"Sri Lanka","Qatar"}, {"Turkey","Denmark"}, {"Cuba","Ecuador"}};
  cout << "\n\n\nThe probability that you will be placed at is: " << endl;
  srand(time(0));
    int index = (rand() % 5);
     cout << country[pick-1][index]<<endl;   
return 0;
}
