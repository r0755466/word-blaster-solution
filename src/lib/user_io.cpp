#include "user_io.h"

#include <iostream>

using namespace std;

namespace WordBlasterTheGame {

  void UserIO::show_welcome_screen(void) {
    clear_terminal();
    show_heading();
    cout << "Welcome to Word Blaster" << endl;
    cout << "Your next gen typing experience" << endl << endl;
    press_enter_to_continue();
  }

  std::string UserIO::request_nickname(void) {
    clear_terminal();
    show_heading();
    cout << "Please enter a nickname to play with: ";
    return request_string_input();
  }

  std::string UserIO::request_user_attempt_at_word(unsigned int number, std::string word) {
    clear_terminal();
    show_heading();
    cout << endl << "Word #" << (number+1) << endl;
    cout << word << endl << endl;

    cout << "Type your word here [enter to pass]: ";
    return request_string_input();;
  }

  void UserIO::show_final_score(Score score) {
    clear_terminal();
    show_heading();
    cout << endl << "Your final score is " << score.total_score() << endl << endl;
    press_enter_to_continue();
  }

  void UserIO::show_heading(void) {
    string separator = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

    cout << separator << endl;
    cout << "~ Word Blaster - Next Gen Typing Motivator        ~" << endl;
    cout << separator << endl << endl;
  }

  void UserIO::press_enter_to_continue(void) {
    cout << "PRESS ENTER TO CONTINUE" << endl;
    request_string_input();
  }
  
  void UserIO::clear_terminal(void) {
    // If this doesn't work on windows, you'll need: system("cls")
    system("clear");
  }

  std::string UserIO::request_string_input(void) {
    std::string input;
    getline(cin, input);
    return input;
  }

};