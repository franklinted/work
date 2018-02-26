/*##########################################################
# File Name: ex7.c
# Author: franklin
# mail: stranger_2000@163.com
# Created Time: Fri 23 Feb 2018 12:25:33 PM CST
#=========================================================*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int bugs = 100;
	double bug_rate = 1.2;

	printf("You hava %d bugs at the imaginary rate of %f.\n",
			bugs, bug_rate);

	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n",
			universe_of_defects);

	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n",
		expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n",
			part_of_universe);

	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n",
			care_percentage);

	return 0;
}
