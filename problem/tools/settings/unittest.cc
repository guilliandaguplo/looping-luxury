
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../cppaudit/gtest_ext.h"
#include "../../customerFactory.h"
#include "../../customer.h"
#include <iostream>

// Include the header files from the student solution.
// Use ../../ prefix to locate the student solution folder
// For example:
// #include "../../math.h"
/* Sample Unit test
TEST(Factorial, Zero) {
	ASSERT_EQ(factorial(0), 1);
}
*/
class CustomerTest : public::testing::Test {
protected:
  void SetUp() override {
    //Index 0 One Item
    controlledList.push_back(Customer("Chris Jensen",{"SUPREME/KAWA/ROLEX COLLAB WATCH"}));
    //Index 1 Two Items
    controlledList.push_back(Customer("Hugo Reid",{"Pokemon/Seiko Watch", "Playstation/Balenciaga Hoodie"}));
    //Index 2 Three Items
    controlledList.push_back(Customer("Alyssa Hess", {"Super Mario/Tag Heuer","Animal Crossing/Marc Jacob and Valentino", "Nike Jordan/Off-White"}));
    //Create customer messages
    for(int i = 0; i < controlledList.size(); i++) {
      controlledList[i].ComposeCustomerMessage();
    }
  }
  std::vector<Customer> controlledList;
};

TEST_F(CustomerTest,CustomerOneItem) {
  std::string correctFormat = "Thank you! Chris Jensen,\nfor choosing Looping Luxury, as your one stop shop for everything luxury.\nYour Purchases Included:\nSUPREME/KAWA/ROLEX COLLAB WATCH\nWe hope you enjoyed your items, We hope to you see you again!\n\n";
  EXPECT_EQ(controlledList[0].GetCustomerMessage(),correctFormat);
}
TEST_F(CustomerTest,CustomerTwoItem) {
  std::string correctFormat = "Thank you! Hugo Reid,\nfor choosing Looping Luxury, as your one stop shop for everything luxury.\nYour Purchases Included:\nPokemon/Seiko Watch\nPlaystation/Balenciaga Hoodie\nWe hope you enjoyed your items, We hope to you see you again!\n\n";
  EXPECT_EQ(controlledList[1].GetCustomerMessage(),correctFormat);
}
TEST_F(CustomerTest,CustomerThreeItem) {
  std::string correctFormat = "Thank you! Alyssa Hess,\nfor choosing Looping Luxury, as your one stop shop for everything luxury.\nYour Purchases Included:\nSuper Mario/Tag Heuer\nAnimal Crossing/Marc Jacob and Valentino\nNike Jordan/Off-White\nWe hope you enjoyed your items, We hope to you see you again!\n\n";
  EXPECT_EQ(controlledList[2].GetCustomerMessage(),correctFormat);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  bool skip = true;
  for (int i = 0; i < argc; i++) {
    if (std::string(argv[i]) == "--noskip") {
      skip = false;
    }
  }
  if (skip) {
    ::testing::UnitTest::GetInstance()->listeners().Append(new SkipListener());
  }
  return RUN_ALL_TESTS();
}
