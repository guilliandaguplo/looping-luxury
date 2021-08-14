#ifndef CUSTOMER_H
#define CUSTOMER_H
// Include Headers
#include <vector>
#include <iostream>

// Customer Class Here

class Customer {
  public:
    //Add constructor(s)
    Customer() : Customer("Michael Jackson"){}
    Customer(const std::string &name) : customerName(name) {}
    Customer(const std::string &name, std::vector<std::string> items) : customerName(name) { copyCart(items); }

    //Getters and Setters for name
    void SetName(const std::string &name) { customerName = name; }
    std::string GetName() { return customerName; }

    //Getters and Setters for personalizedMessage
    void SetCustomerMessage (const std::string &name) {
      customerMessage = name;
    }
    std::string GetCustomerMessage() { return customerMessage; }
    //Add cart passed to constructor to customerCart
    void copyCart(std::vector<std::string> items) {
      for (int i = 0; i < items.size(); i++) {
        customerCart.push_back(items[i]);
        std::cout << customerCart[i] << " Copied!\n";
      }
    }
    void ComposeCustomerMessage() {
      
    }
  private:
    std::string customerMessage, customerName;
    std::vector<std::string>customerCart;
};




#endif
