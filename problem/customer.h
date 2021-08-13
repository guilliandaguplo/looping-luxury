#ifndef CUSTOMER_H
#define CUSTOMER_H
// Include Headers
#include <vector>

// Customer Class Here

class Customer {
  public:
    //Add constructor(s)
    Customer() : Customer("Michael Jackson"){}
    Customer(std::string name) : name_(name) {}
    Customer(std::string name, std::vector<std::string> items) : name_(name) {}

    //Getters and Setters for name
    void SetName(std::string name) { customerName = name; }
    std::string GetName() { return customerName; }

    //Getters and Setters for personalizedMessage
    void SetCustomerMessage (std::string name) { customerMessage = name; }
    std::string GetCustomerMessage() { return customerMessage; }

    //Add cart passed to constructor to customerCart
    void copyCart(std::vector<string> items) {
      for (int i = 0; i < items.size(); i++) {
        customerCart.push_back(items[i]);
        std::cout << customerCart[i] << " Copied!\n";
      }

    }
  private:
    std::string customerMessage, customerName;
    std::vector<string>customerCart;
}




#endif
