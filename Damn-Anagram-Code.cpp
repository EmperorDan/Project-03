#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


	int main(int argc, const char * argv[]) {
		cout << "Enter letters" << endl;
		string word;
		cin >> word; // reading the input

	ifstream infile("words.csv");   						// acessing file
	string line;   									// creating a variable for the line
	while (getline(infile, line)) {   						// for each line in the file // code to repeat
									
	   cout << line << endl; // this outputs the current word read from the dictionary
	   cout << "=========" << endl;
											// word = tca  word[0] -> t, word[1] -> c, word[2] -> a
	    for(int i=0; i < word.length(); i++){           				// for each letter in the user's input cat
	      
	      for(int j=0; j < line.length(); j++){        				// for each letter in the line tca
	         
    	         cout << word[i] << line[j] << endl;   					// this outputs the current letters that are compared
	        
	        if(word[i] == line[j]){                   				// are the letters equals?
											//counts the number of equal letters
	          
	        }
	      }
	    }
	    cout << "=========" << endl;
  }

	return 0;
}
