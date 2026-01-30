#pragma once
#include<string>
class UserProfile{
    const int userId;
    std::string username;
    std::string email;
    bool isVerified;
    public:
        UserProfile(int id, const std::string& user, const std::string& email, bool verified):userId(id),username(user),email(email),isVerified(verified){}
        void display(){
            std::cout<<userId<<username<<email<<isVerified<<std::endl;
        }
};