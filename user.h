#include "string_function.h"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

/*
������ ��ɾ� ���
help
quit
list
reservation
cancel
deposit
information
*/

void show_guide();
void user_prompt(string s);
void help(vector<string> v);
void quit();
void list(vector<string> v);
void reservation(vector<string> v);
void cancel();
void deposit();
void information();

