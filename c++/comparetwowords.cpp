//Write a program that asks the user for two words and tells them which is longer

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;


int main()
{
    while(10>0) {
        string first_word;
        string second_word;
        cout << " \n This is a program that is designed to compare the length of two words \n";
        cout << " What is the first word ?";
        cin >> first_word;
        cout << " \n What is the second word?";
        cin >> second_word;

        int lengthfirstword = first_word.length();
        int lengthsecondword = second_word.length();


        if (lengthfirstword == lengthsecondword) {
            cout << " Both words are the same length";
        } else if (lengthfirstword <= lengthsecondword) {
            cout << "First word is shorter than second word.";
        } else {
            cout << "Second word is shorter than the first word";
        }

    }
    return 0;

}
