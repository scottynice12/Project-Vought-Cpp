#include <iostream>
#include <cassert>
#include "main.cpp"

int main() {
    std::cout << "🧪 Running Vought Automated Suite...\n";

    // Test 1: Valid Balanced Profile (Should Pass)
    assert(VoughtValidator::validateSubject("Noir", 2, 3, 2) == true);
    std::cout << "✅ Test 1 Passed: Valid profile accepted.\n";

    // Test 2: Overallocated Profile (Should Fail)
    assert(VoughtValidator::validateSubject("Homelander", 4, 4, 4) == false);
    std::cout << "✅ Test 2 Passed: Overallocated profile blocked.\n";

    // Test 3: Name Too Long (Should Fail)
    assert(VoughtValidator::validateSubject("SuperLongNameHere", 2, 3, 2) == false);
    std::cout << "✅ Test 3 Passed: Invalid name lengths blocked.\n";

    std::cout << "\n🎉 ALL QA CHECKS PASSED SUCCESSFULLY!\n";
    return 0;
}
