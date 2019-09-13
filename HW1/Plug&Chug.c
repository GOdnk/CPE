#include <stdio.h> // C header
#include <math.h> // Math header

int main() // Must be included in every C file
{
	double A = 1; //What does this mean
	double out = 0;
	const double Ts = 0.01;

	FILE* f = fopen("motor.csv", "wt"); // file discovery
	if (!f)
	{
		printf("Unable to open file.\n"); // file error prompt
		return 1;
	}
	for (double time = 0; time < 5; time += Ts) 
	{
		out = A * (1.0 - exp(-1.8 * time)); // math formula
		fprintf(f, "%.2f,%.2f,%.2f\n", time, A, out);
	}

	fclose(f);
	return 0;
}
