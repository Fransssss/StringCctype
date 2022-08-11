// Author: Fransiskus Agapa

#include <iostream>
#include "string"
#include "cctype"

// ==================
// simple program to check if a character that user input is alphabetic, numeric, digit, upper, lower, and/or punctuation
// practice function in cctype library
// ==================

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::isalnum;
using std::getline;
using std::isalpha;
using std::isupper;
using std::islower;
using std::isdigit;
using std::isspace;
using std::ispunct;

int main()
{

    cout << "\n== Character Checking ==" << endl;
    cout << "1. Input a character " << endl;
    cout << "x. Exit" << endl;
    cout << "choice: ";
    char userChar;
    bool thereIsInput = false;                              // check if char has been put before go to checking part
    string tempO;
    string tempT;
    string choice;                                  // only expect a char, not string
    cin >> choice;

    while(choice != "x" and choice != "X")
    {
        if(choice == "1")
        {
            cout << "\n= Character Input =\n" << endl;
            cout << "Input a character: ";
            string userInput;
            cin >> userInput;
            if(userInput.size() > 1)                    // if user input is not a char
            {
                userChar = userInput.at(0);
                cout << "\n[ " << userChar << " ] added" << endl;
                cout << "> note: only first character is taken" << endl;
            }
            else if(userInput.size() == 1)             // since userChar is char then it has to be assigned/ given value with char value
            {
                userChar = userInput.at(0);
                cout << "\n[ " << userChar << " ] added" << endl;
            }

            thereIsInput = true;                  // indicate user has inputted something
        }
        else if(choice == "a" or choice == "A")
        {
            if(!thereIsInput)                     // indicate user input has not put a character yet
            {
                cout << "\n[ Invalid choice ]" << endl;
            }
            else
            {
                cout << "\n= Alphabetic =\n" << endl;
                if (isalpha(userChar))
                {
                    cout << "[ " << userChar << " ] is alphabetical" << endl;
                } else
                {
                    cout << "[ " << userChar << " ] is not alphabetical" << endl;
                }
            }
        }
        else if(choice == "b" or choice == "B")
        {
            if(!thereIsInput)
            {
                cout << "\n[ Invalid choice ]" << endl;
            }
            else
            {
                cout << "\n= Upper Case =\n" << endl;
                if (isupper(userChar))
                {
                    cout << "[ " << userChar << " ] is upper case" << endl;
                } else
                {
                    cout << "[ " << userChar << " ] is not upper case" << endl;
                }
            }
        }
        else if(choice == "c" or choice == "C")
        {
            if(!thereIsInput)
            {
               cout << "\n[ Invalid choice ]" << endl;
            }
            else
            {
                cout << "\n= Lower Case =\n" << endl;
                if (islower(userChar))
                {
                    cout << "[ " << userChar << " ] is lower case" << endl;
                } else
                {
                    cout << "[ " << userChar << " ] is not lower case" << endl;
                }
            }
        }
        else if(choice == "d" or choice == "D")
        {
            if(!thereIsInput)
            {
                cout << "\n[ Invalid choice ]" << endl;
            }
            else
            {
                cout << "\n= Digit =\n" << endl;
                if (isdigit(userChar))
                {
                    cout << "[ " << userChar << " ] is digit" << endl;
                } else
                {
                    cout << "[ " << userChar << " ] is not digit" << endl;
                }
            }
        }
        else if(choice == "e" or choice == "E")
        {
            if(!thereIsInput)
            {
                cout << "\n[ Invalid choice ]" << endl;
            }
            else
            {
                cout << "\n= Space =\n" << endl;
                if (isspace(userChar))
                {
                    cout << "[ " << userChar << " ] is space" << endl;
                } else
                {
                    cout << "[ " << userChar << " ] is not space" << endl;
                }
            }
        }
        else if(choice == "f" or choice == "F")
        {
            if(!thereIsInput)
            {
                cout << "\n[ Invalid choice ]" << endl;
            }
            else
            {
                cout << "\n= Punctuation =\n" << endl;
                if (ispunct(userChar))
                {
                    cout << "[ " << userChar << " ] is punctuation" << endl;
                } else
                {
                    cout << "[ " << userChar << " ] is not punctuation" << endl;
                }
            }
        }
        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        if(!thereIsInput)                                // only if user has chosen first option
        {
            cout << "\n== Character Checking ==" << endl;
            cout << "1. Input a character " << endl;
            cout << "x. Exit" << endl;
            cout << "choice: ";
            cin >> choice;
        }
        else
        {
            cout << "\n== Character Checking ==" << endl;
            cout << "1. Input a character\n-- Check if --" << endl;
            cout << "a. Alphabetic" << endl;
            cout << "b. Upper case" << endl;
            cout << "c. Lower case" << endl;
            cout << "d. Digit" << endl;
            cout << "e.Space" << endl;
            cout << "f. Punctuation" << endl;
            cout << "---------------" << endl;
            cout << "x. Exit" << endl;
            cout << "choice: ";
            cin >> choice;
        }
    }

    if(choice == "x" or choice == "X")
    {
        cout << "\n== Exit Program ==" << endl;
    }
    return 0;
}
