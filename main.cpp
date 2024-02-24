#include <iostream>
#include <deque>

int main() {
    // Declare a deque of integers
    std::deque<int> myDeque;

    // Insert elements at the back
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_back(30);

    // Insert elements at the front
    myDeque.push_front(5);
    myDeque.push_front(2);

    // Accessing elements
    std::cout << "Elements of deque: de 2";
    for (int num : myDeque) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    // Remove an element from the back
    myDeque.pop_back();

    // Remove an element from the front
    myDeque.pop_front();

    // Accessing elements after removal
    std::cout << "Elements of deque after removal:";
    for (int num : myDeque) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}
