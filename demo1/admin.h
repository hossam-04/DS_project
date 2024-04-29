#ifndef Admin_H
#define Admin_H
#include <iostream>
#include <string>
#include "User.h"
#include <unordered_map>
using namespace std;
class Admin
{
public:
    string userName,password;

    //datastructure related to the system
    unordered_map<string, User>users;
    unordered_map<string, string>phones;
    unordered_map<string, string>cards;


    void addUser(User new_user);
    void editUser(User edited);
    User getUserData(string user_name, string password);
    Admin();

};

#endif // Admin_H
