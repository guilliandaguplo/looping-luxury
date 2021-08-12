
# Topic
## In this module, students will learn how to apply loops to automate tedious and repetitive tasks.

## Theme
 **Imagine** you are working for a start up company that resells luxury brand items\. An important aspect of a successful online business is establishing communication with customers after the first interaction\.

 So your boss decides to task you with reaching out to customers, welcoming them with a **personalized email** that thanks them for their first purchase and encourages them to consider the company for future luxury brand purposes\.

 Now imagine **thousands** of orders coming in and **manually** typing each letter\! It would be very time consuming\. To avoid this, your **goal** is to create a program that will send those automated emails our for us\!

##Goal
 You will create a program that will write a templatized message given an array of customers and the item(s) that they bought.

 ```(Store class objects in arrays```

Tasks:

Create an array to represent a customer’s cart
Create a class to represent the customer and their cart.
Add functions that compose the message based on customers name and the items they bought.
Store the customer in a vector of class objects
then pass the customer to a function that will use for loops to iterate inside the vector of customers to “send” the email until there is no more.
Long Term Goal : Be able to comfortably use for loops to iterate through a given array of varying sizes and extract info based on inside the array.


## Status
This lab's solution is tested with Github continuous integration on 'push':

(Replace URL to the correct badge image location)

![C/C++ CI](https://github.com/ilxl-ppr/hex_color_swatch_generator/workflows/C/C++%20CI/badge.svg)

# Tag
Provide descirptive tags to easily locate the problem

# Unittest setup
cppaudit makes it easy to create unittests for your programming problem. Run the command below to pull the suggested version of cppaudit.

    git subtree add --prefix problem/tools/cppaudit https://github.com/ILXL/cppaudit main --squash

The command will copy cppaudit into the tools/cppaudit folder. Modify [tools/settings/config.mk](tools/settings/config.mk) and provide the file names used by your problem. Modify [tools/settings/unittest.cc](tools/settings/unittest.cc) and create your unit tests. Unit tests are mainly built using [Googletest](https://github.com/google/googletest), but additional macros are provided for grading specific functionalities.

# Graphics libraries
If you want to provide graphics capabilities to your problem, we highly suggest you use [cpputils](https://github.com/ILXL/cpputils) as the library was built to work with cppaudit. Run the command below to pull the suggested version of cpputils.

    git subtree add --prefix problem/cpputils https://github.com/ILXL/cpputils master --squash
