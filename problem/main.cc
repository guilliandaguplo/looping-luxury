#include "customer.h"
#include "customerFactory.h"
#include <vector>
#include <iostream>


//Will create a random vector of customers

//Will just cout personalizedMessage of each
void sendEmail(std::string message);
//Get Random Luxury Item from items4sale
std::vector<std::string> randomItem();

int main() {
CustomerFactory session;
std::vector<Customer> test = session.createCustomer();
for (size_t i = 0; i < test.size(); i++) {
  test[i].ComposeCustomerMessage();
  std::cout << test[i].GetCustomerMessage();
}

 return 0;
}
