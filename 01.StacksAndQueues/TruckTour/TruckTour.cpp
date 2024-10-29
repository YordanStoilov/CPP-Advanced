#include <iostream>
#include <queue>
#include <string>
#include <sstream>
#include <limits.h>

using namespace std;

class GasStation
{
public:
	GasStation(int fuelAmount, int distanceToNext) :
		fuelAmount(fuelAmount), distanceToNext(distanceToNext) {}

	int getFuelAmount() const {
		return fuelAmount;
	}

	int getDistanceToNext() const {
		return distanceToNext;
	}

private:
	int fuelAmount;
	int distanceToNext;
};

int main()
{
	queue<GasStation> outerQueue;

	int n;
	cin >> n;
	cin.ignore();

	for (size_t i = 0; i < n; i++)
	{
		string input;
		getline(cin, input);
		istringstream stream(input);

		int fuel, distance;
		stream >> fuel >> distance;

		outerQueue.push(GasStation(fuel, distance));
	}


	for (size_t start = 0; start < n; start++)
	{
		int fuel = 0;
		bool completed = true;

		queue<GasStation> innerQueue = outerQueue;

		for (size_t i = 0; i < n; i++)
		{
			GasStation station = innerQueue.front();
			innerQueue.pop();

			fuel += station.getFuelAmount();
			if (fuel < station.getDistanceToNext())
			{
				completed = false;
				break;
			}

			fuel -= station.getDistanceToNext();
		}
		if (completed)
		{
			std::cout << start << endl;
			return 0;
		}

		outerQueue.push(outerQueue.front());
		outerQueue.pop();
	}
}