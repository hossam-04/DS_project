#include "Admin.h"
#include "User.h"


void Admin::addUser(User new_user)
{
    users[new_user.user_name] = new_user;
}

void Admin::editUser(User edited)
{
    users[edited.user_name] = edited;
}

User Admin::getUserData(string user_name, string password)
{
    User returned_user;
    unordered_map<string, User>::iterator it;
    it = users.find(user_name);
    if (it != users.end())
    {
        if(it->second.password==password)
            returned_user = it->second;
    }

    return returned_user;
}

Admin::Admin()
{
    userName = "AdminAhmed2003";
    password = "123456789ahmed2003";
    Date date;
    date.day = 5;
    date.month = 5;
    date.year = 2004;
    //	string userName, string password, Date birthDate, string email, string phoneNumber, int pin
    User* user1 = new User("Ahmed", "123456", date, "ah@gmail.com", "01112343263", 147852);
    User* user2 = new User("Lamiaa","654321", date, "lm@gmail.com", "01112343263", 147852);
    users[user1->user_name] = *user1;
    users[user2->user_name] = *user2;

}
