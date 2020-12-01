#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int polyhedrons_number;
	std::cin >> polyhedrons_number;

	int total_faces_number = 0;

	while (polyhedrons_number--)
	{
		std::string polyhedron;
		std::cin >> polyhedron;
		if (polyhedron == "Tetrahedron") total_faces_number += 4;
		else if (polyhedron == "Cube") total_faces_number += 6;
		else if (polyhedron == "Octahedron") total_faces_number += 8;
		else if (polyhedron == "Dodecahedron") total_faces_number += 12;
		else if (polyhedron == "Icosahedron") total_faces_number += 20;
	}

	std::cout << total_faces_number << '\n';

	return 0;
}
