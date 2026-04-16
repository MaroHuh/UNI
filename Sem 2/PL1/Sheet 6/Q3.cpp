#include <stdio.h>
// Omar Tarek 20250681
void findFuelPerMile(int mile, int fuel, int *permile);

int main()
{
    int miles, fuel, fuelPerMile;
    printf("Enter number of miles and fuel consumed:\n");
    scanf("%d %d", &miles, &fuel);
    findFuelPerMile(miles, fuel, &fuelPerMile);
    printf("Fuel consumption per mile: %d", fuelPerMile);
}

void findFuelPerMile(int mile, int fuel, int *permile)
{
    *permile = fuel / mile;
}