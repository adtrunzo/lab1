
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//----------------------------------------------------------------------------

int main(int argc, char **argv)
{
  ifstream inStream;
  ofstream outStream;
  string word;
  int num_words;
//  std::vector<std::string> words;
  if (argc < 2) {
    cout << "Please specify filename on command line\n";
    exit(1);
  }

  // try to open file to echo

  inStream.open(argv[1]);

  if (inStream.fail()) {
    cout << "Failed to open file\n";
    exit(1);
  }

  // get ready to write

  outStream.open("echo.txt");

  // read input WORDS one by one

  num_words = 0;

  while (!inStream.eof()) {

    inStream >> word;

	int len;
	

	for (int i = 0, len = word.size(); i < len; i++){

		if (word[i] == '.' && word[i+1] == '.' && word[i+2] == '.' && word[i+3]){
		num_words++;
		word.replace(i+2, 1, "\n");
}
		if (ispunct(word[i]) && word[i] != '`' && word[i] != '\''){
			word.replace(i, 1, " ");
			len = word.size();
		}
	}
		
	 
    // write to file and echo to console
    
    if (!inStream.eof()) {

      outStream << word << " ";
	cout << word << endl; 
      num_words++;
    }

  }

  inStream.close();
  outStream.close();

  cout << num_words << " total words\n";

 return 0; 
}


//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

