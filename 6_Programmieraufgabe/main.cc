#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <utility>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>

#include "exercise.h"

int main()
{
	// Aufgabe 1
	Friends friends;

	friends["Jan"] = std::pair<int, int>(23, 68);
	friends["Dennis"] = std::pair<int, int>(27, 75);
	friends["Peter"] = std::pair<int, int>(54, 70);
	friends["Kathrin"] = std::pair<int, int>(30, 60);
	friends["Lisa"] = std::pair<int, int>(26, 65);

	// Aufgabe 2
	std::string oldest_friend = get_oldest_friend(friends);
	std::string heaviest_friend = get_heaviest_friend(friends);

	std::cout << "My oldest friend: " << oldest_friend << std::endl;
	std::cout << "My heaviest friend: " << heaviest_friend << std::endl;

	return 0;
}