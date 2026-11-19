#include <stdio.h>
int main() {
    float speed;
    printf("Enter vehicle speed recorded (km/h): ");
    scanf("%f", &speed);
    if (speed < 40.0) {
        printf("WARNING: Driving too slow. Traffic disruption risk.\n");
    } else if (speed <= 100.0) {
        printf("STATUS: Speed within normal permitted highway bounds.\n");
    } else if (speed <= 120.0) {
        printf("CITATION: Minor speeding infraction. Fine $100.\n");
    } else {
        printf("CITATION: Severe reckless speeding! Fine $500 & License suspension.\n");
    }
    return 0;
}
