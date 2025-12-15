#include <iostream>
#include<list>
using namespace std;

class User{
    public:
        virtual void getPermissions(){
            cout << "Users can see limited information" << endl;
        }
};

class SuperUser : public User{
    public:
        void getPermissions(){
            cout << "Super Users can see all of the information" << endl;
        }
};

int main(){

    User u;
    SuperUser s;
    list<User*>users;

    users.push_back(&u);
    users.push_back(&s);

    for(User* userPtr:users){
        userPtr->getPermissions();
    }


    cin.get();
}