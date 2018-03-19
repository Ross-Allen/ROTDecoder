#include <iostream>
#include <fstream>

using namespace std;

int main() {
  char character;
  ifstream inputFile;
  ofstream outputFile;
  outputFile.open("decodedMessage.txt");
  inputFile.open("secretMessage.txt");
  if (!inputFile) {
    cout << "something went wrong" << endl;
    return 0;
  }
  while (inputFile.get(character)) {
    if (character >= 'a' && character < 'n') {
      character += 13;
    } else if (character >= 'n' && character <= 'z') {
      character -= 13;
    } else if (character >= 'A' && character <= 'M') {
      character += 13;
    } else if (character >= 'N' && character <= 'Z') {
      character -= 13;
    }
    cout << character;
    outputFile << character;
  }
  return 0;
}







