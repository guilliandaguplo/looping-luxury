#include "customer.h"
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Will create a random vector of customers
std::vector<Customer> customerFactory();
//Will just cout personalizedMessage of each
void sendEmail(std::string message);
//Get Random Customer name from namebank
std::string randomCustomerName();
//Get Random Luxury Item from items4sale
std::vector<std::string> randomItem();

int main() {


 return 0;


std::vector<Customer> customerFactory() {
  srand(time(NULL));
  //just Create 1 for right now
  for (size_t i = 0; i < 1; i++) {
    /* code */
  }
}
