/*
 Tyler Evans
 This is a random project for rolling dice
*/
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;
/**
 @function getRandomNumber
 @brief This function generates a random number based on system time
 @param max Maximum value to be used for generation
 */
int getRandomNumber(int max);

/**
 @function addWhiteSpace
 @brief adds white space to the terminal
 */
void addWhiteSpace();

int main(){
    cout << "welcome to a random number generator! \n";
    bool state = true;
    string value;
    while(state == true){
        try{
            time_t Time = time(0);
            char* val = ctime(&Time);
            cout << val << std::endl;
            cout << "enter a 1 for a nomral dice roll\n enter 2 for a 20 dice roll\n enter 3 for a random number and e to exit\n";
            cout << "option?: ";
            cin >> value;
            cin.clear();
            cin.ignore();
            char compare = value[0];
            switch(compare){
                case '1':
                    addWhiteSpace();
                    cout << getRandomNumber(6) << std::endl;
                    break;
                case '2':
                    addWhiteSpace();
                    cout << getRandomNumber(20) << std::endl;
                    break;
                case '3':
                    addWhiteSpace();
                    cout << getRandomNumber(1000) << std::endl;
                    break;
                case 'e':
                    addWhiteSpace();
                    cout << "goodbye have a good day!\n";
                    state = false;
                    break;
                default:
                    addWhiteSpace();
                    cout << "try again please!\n";
                    break;
            }
        }
        catch(...){
            cout << "an error was detected;>\n";
        }
    }
    return 0;
}

int getRandomNumber(int max){
    int getRe = clock() % rand();
    getRe = (getRe % max) + 1;
    return getRe;
}

void addWhiteSpace(){
    for(int i = 0; i < 80; i++){
        cout << "\n";
    }
}
