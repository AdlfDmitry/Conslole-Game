#include <iostream>
#include <string>
#include <Windows.h>
#include <chrono>
using namespace std;

bool Authorisation() {
    int Attempts = 3;
    const string TRUE_LOGIN = "admin";
    const string TRUE_PASSWORD = "admin";
    string USER_LOGIN;
    string USER_PASSWORD;

    while (Attempts > 0) {
        cout << "Authorization, number of possible attempts: " << Attempts << "\n";
        cout << "Enter login: ";
        cin >> USER_LOGIN;
        Beep(600, 50);
        cout << "Enter password: ";
        cin >> USER_PASSWORD;
        Beep(600, 50);
        if (USER_LOGIN == TRUE_LOGIN && USER_PASSWORD == TRUE_PASSWORD) {
            cout << "Authorization successful\n";
            Beep(1300, 50);
            Beep(2300, 50);
            Beep(3300, 50);
            return true;
        }
        else {
            if (Attempts > 1) {
                cout << "Authorization failed, wrong login or password. Try again.\n";
                Beep(430, 100);
                Beep(230, 100);
            }
            else {
                cout << "Authorization failed, reached maximum attempts number\n";
                Beep(430, 100);
                Beep(230, 100);
            }
            Attempts--;
        }
    }
    return false;
}

void COMMAND_LIST_and_USAGE() {

    cout << "Available commands: \n";
    string USER_COMMAND;
    cin >> USER_COMMAND; 
    Beep(600, 50);
    string USER_AGREEMENT;
    int COMAD;
    while (true) {
        if (USER_COMMAND == "?help") {
            COMAD = 1;
            cout << "Help command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")"<<"\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if(USER_AGREEMENT=="?YES"){
                break;
               
            }
            else if(USER_AGREEMENT == "?NO"){
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?calculator") {
            COMAD = 2;
            cout << "Calculator command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;

                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?shop") {
            COMAD = 3;
            cout << "Shop command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?set_theme") {
            COMAD = 4;
            cout << "Set_theme command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?play_music") {
            COMAD = 5;
            cout << "Play_music command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?music_shop") {
            COMAD = 6;
            cout << "Music_shop command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?asci_shop") {
            COMAD = 7;
            cout << "Asci_shop command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?asci_show") {
            COMAD = 8;
            cout << "Asci_show command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?asci_color_theme_shop") {
            COMAD = 9;
            cout << "Asci_color_theme_shop command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?my_wallet") {
            COMAD = 10;
            cout << "My_wallet command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?guide") {
            COMAD = 11;
            cout << "Guide command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    Sleep(200);
                    exit(0);
                }
            }
        }
        else if (USER_COMMAND == "?exit") {
            COMAD = 12;
            cout << "Exit command used\n";
            cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
            cin >> USER_AGREEMENT;
            Beep(600, 50);
            if (USER_AGREEMENT == "?YES") {
                break;

            }
            else if (USER_AGREEMENT == "?NO") {
                COMMAND_LIST_and_USAGE();
                break;
            }
            else {
                cout << "Unknown comand use\n";
                cout << R"(Close command menu? Type "?YES"/"?NO")" << "\n";
                cin >> USER_AGREEMENT;
                Beep(600, 50);
                if (USER_AGREEMENT == "?YES") {
                    break;

                }
                else if (USER_AGREEMENT == "?NO") {
                    COMMAND_LIST_and_USAGE();
                    break;
                }
                else {
                    Sleep(200);
                    cout << "COMMAND MENU CLOSED DUE INVALID ACTIVITY \n";
                    exit(0);
                }
            }
        }
        else {
            COMAD = 13;
            cout << "Unknown comand use\n";
            COMMAND_LIST_and_USAGE();
            break;
           
            }
        }
    }

    


void Display_Greetings(void (*COMMAND_LIST_and_USAGE)()) {
    cout << R"(          .)/     )/,           _____   ___   ______  ___  
           /`-._,-'`._,@`-,    /  ___| / _ \ |___  / / _ \ 
    ,  _,-=\,-.__,-.-.__@/     \ `--. / /_\ \   / / / /_\ \
   (_,'    )\`    '(`           `--. \|  _  |  / /  |  _  |                     
                               /\__/ /| | | |./ /___| | | |   
                               \____/ \_| |_/\_____/\_| |_/
                 
)" << "\n";
    cout << "_______________________________________________________________________________________________________________________________________________\n";
} void MAIN_COMANDS() {
    string INPUT_COMMAND;
    while (true) {
        cout << "Enter a command (?commands for help, ?exit to quit):\n ";
        cin >> INPUT_COMMAND;
        Beep(600, 50);

        if (INPUT_COMMAND == "?commands") {
            COMMAND_LIST_and_USAGE();
            break;
        }
        else if (INPUT_COMMAND == "?exit") {
            exit(0);
        }
        else {
            cout << "Invalid command. Try again.\n";
            MAIN_COMANDS();
        }
    }
}

int main() {
    if (Authorisation()) {
        Display_Greetings(COMMAND_LIST_and_USAGE);
        MAIN_COMANDS();
    }
    return 0;
}
