
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector = { 1, 2, 3 };

    // Access last  element
    int lastElement = vector.back();

    // Access first element
    int firstElement = vector.front();

    // Get vector size - the amount of items the vector holds
    int size = vector.size();

    // Capacity - the amount of items the vector could hold before resizing
    int capacity = vector.capacity();

    // Adding element to the end
    vector.push_back(9);

    // Removing element from the end (not returning)
    vector.pop_back();

    // Shrink capacity (capacity only INCREASES automatically)
    vector.shrink_to_fit();

    // Insert at position (uses pointer as first argument and value as second argument)
    vector.insert(vector.begin(), 10);

    // To insert at specific index, you can use pointer arithmetic
    // Inseting at index 2:
    vector.insert(vector.begin() + 2, 15);

    // Erasing elements at index 2
    vector.erase(vector.begin() + 2);


}
