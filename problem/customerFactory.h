#ifndef CUSTOMERFACTORY_H
#define CUSTOMERFACTORY_H
#include "customer.h"
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class CustomerFactory {
public:
  std::vector<Customer> createCustomer() {
    srand(time(NULL));
    //just Create 1 for right now
    for (size_t i = 0; i < 1; i++) {
      queueList.push_back(Customer(randomCustomerName()));
    }
    return queueList;
  }


  //Provides program with names with no duplicates
  std::string randomCustomerName() {
    srand(time(NULL));
    std::ifstream customerfile("namebank.txt");
    std::getline(customerfile, fullName);
    while (isNameUsed(fullName)) {
      std::getline(customerfile,fullName);
    }
    return fullName;
  }
  //Method to ensure names arent used twice
  bool isNameUsed(std::string name) {
    if (usedNames.empty()) {
      usedNames.push_back(fullName);
      return false;
    } else {
      for (size_t i = 0; i < usedNames.size(); i++) {
        if (usedNames[i] == fullName) return true;
        else continue;
      }
      usedNames.push_back(fullName);
      return false;
    }
   return false;

  //Getter for customer's name
  }
private:
  std::vector<Customer> queueList;
  std::vector<std::string> usedNames;
  std::string fullName;
};

#endif
