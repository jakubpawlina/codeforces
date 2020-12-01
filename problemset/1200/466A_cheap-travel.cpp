#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int rides_number;
	std::cin >> rides_number;

	int rides_covered;
	std::cin >> rides_covered;

	int one_ride_price;
	std::cin >> one_ride_price;

	int multiple_ride_price;
	std::cin >> multiple_ride_price;

	if (rides_covered * one_ride_price <= multiple_ride_price)
	{
		std::cout << rides_number * one_ride_price << '\n';
	}
	else
	{
		std::cout << (rides_number / rides_covered) * multiple_ride_price + std::min(multiple_ride_price, (rides_number % rides_covered) * one_ride_price) << '\n';
	}

	return 0;
}
