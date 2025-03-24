#include <stdio.h>

struct vulnerability{
	char os[10];
	char name[30];
	int foundYear;
	double aveDmg;
};

int main(void) {
    //! showMemory(start=65520)
    struct vulnerability aurora;
    printf("Operating system: ");
    scanf("%s", aurora.os);
    printf("Given name: ");
    scanf("%s", aurora.name);
    printf("Found year:");
    scanf("%d", &aurora.foundYear);
    printf("Average damage (in US dollars): ");
    scanf("%lf", &aurora.aveDmg);
    
    printf("Name is %s in %s\n", aurora.name, aurora.os);
    printf("Year of birth: %d\n", aurora.foundYear);
    printf("Average damage: %.2lf\n", aurora.aveDmg);
    
    return 0;
}

