#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../cppaudit/gtest_ext.h"

// Include the header files from the student solution.
// Use ../../ prefix to locate the student solution folder
// For example:
// #include "../../math.h"

/* Sample Unit test

TEST(Factorial, Zero) {
	ASSERT_EQ(factorial(0), 1);
}

*/

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
