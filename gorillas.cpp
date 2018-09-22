//============================================================================
// Name        : gorillas.cpp
// Author      : Yulia Kluev
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

#ifndef MARMOSET_TESTING

int main();

#endif

double horizontal_velocity(double launch_v, double launch_a);
double vertical_velocity(double launch_v, double launch_a);
double gravity();
double computed_range(double launch_v, double launch_a, double launch_h);

#ifndef MARMOSET_TESTING

int main() {
	//statements for 600m/s and 10m height

	std::cout << "The range the banana reaches for the launch angle of 10.0 degrees is "
					<< computed_range(600, 10, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 20.0 degrees is "
					<< computed_range(600, 20, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 25.5 degrees is "
					<< computed_range(600, 25.5, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 30.0 degrees is "
					<< computed_range(600, 30, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 40.0 degrees is "
					<< computed_range(600, 40, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 50.0 degrees is "
					<< computed_range(600, 50, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 55.5 degrees is "
					<< computed_range(600, 55.5, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 60.0 degrees is "
					<< computed_range(600, 60, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 70.0 degrees is "
					<< computed_range(600, 70, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 75.5 degrees is "
					<< computed_range(600, 75.5, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 80.0 degrees is "
					<< computed_range(600, 80, 10) << std::endl;
	std::cout << "The range the banana reaches for the launch angle of 90.0 degrees is "
					<< computed_range(600, 90, 10) << std::endl;

	return 0;
}
#endif


double horizontal_velocity(double launch_v, double launch_a) {

	return launch_v * cos(launch_a * M_PI / 180);
}

double vertical_velocity(double launch_v, double launch_a) {
	return launch_v * sin(launch_a * M_PI / 180);
}

double gravity() {
	return 9.80665;
}

double computed_range(double launch_v, double launch_a, double launch_h) {

	double vx = horizontal_velocity(launch_v, launch_a);
	double vy = vertical_velocity(launch_v, launch_a);
	double g = gravity();
	double h = launch_h;

	//splitting up the equation into two smaller components
	double comp_1 = (vx * vy) / g;
	double comp_2 = vx * (sqrt((vy * vy) + (2 * g * h)) / g);

	return comp_1 + comp_2;
}


