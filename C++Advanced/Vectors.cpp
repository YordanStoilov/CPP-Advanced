
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


}
