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
    Customer(const std::string &name, std::vector<std::string> items) : customerName(name) {
      copyCart(items);

    }

    //Getters and Setters for name
    void SetName(const std::string &name) { customerName = name; }
    std::string GetName() { return customerName; }

    //Getters for personalizedMessage
    std::string GetCustomerMessage() { return customerMessage; }

    //Add cart passed from constructor to customerCart
    void copyCart(std::vector<std::string> items) {
      for (int i = 0; i < items.size(); i++) {
        customerCart.push_back(items[i]);
      }
    }
    //Add a function to compose a customers personalized
    //email message.
    void ComposeCustomerMessage() {
      customerMessage = "Thank you! " + customerName;
      customerMessage += ",\n";
      customerMessage += "for choosing Looping Luxury, as your one stop shop for everything luxury.\nYour Purchases Included:\n";
      for (size_t i = 0; i < customerCart.size(); i++) {
        customerMessage += customerCart[i];
        customerMessage += "\n";
      }
      customerMessage += "We hope you enjoyed your items, We hope to you see you again!\n\n";
    }
  private: // private variablies here
    std::string customerMessage, customerName;
    std::vector<std::string>customerCart;
};




#endif
