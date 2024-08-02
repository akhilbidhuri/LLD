#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;
class Customer {
private:
	string name;
	string email;
	string address;
	string phone;
public:
	Customer(string name, string email, string address, string phone) : name(name), email(email), address(address), phone(phone) {}
	string getName();
	string getEmail();
	string getAddress();
	string getPhone();
};
#endif // !CUSTOMER_H
