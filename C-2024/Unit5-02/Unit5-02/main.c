 #include <stdio.h>

double calculuateDensity(double m, double v) {
    double density = m / v;
    
    return density;
}

double calculateFtoC(double F) {
    double C = (F - 32) * 5/9;
    
    return C;
}

int main(int argc, const char * argv[]) {
    double mass, volume, F;
    double Density, C;
    printf("This program will get both the density and F -> C with scientific functions.\n\n");
    
    printf("First the density\nWhat is the mass: ");
    scanf("%lf", &mass);
    
    printf("What is the volume: ");
    scanf("%lf", &volume);
    
    Density = calculuateDensity(mass, volume);
    
    printf("The density of %.2f/%.2f = %.2f\n\n", mass, volume, Density);
    
    printf("Now converting F -> C\n\nWhat is F: ");
    scanf("%lf", &F);
    
    C = calculateFtoC(F);
    
    printf("%.2f -> %.2f\n", F, C);
    return 0;
}
