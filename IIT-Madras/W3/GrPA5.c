#include <stdio.h>
int main() {
    int a,b;
	scanf("%d%d", &a,&b);
    // Write solution code below

 a = a + b;
 b = a - b;
 a = a - b;
printf("%d %d",a,b); 
    return 0;
}

// GrPA5

#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    // Write solution code below


double s = (a + b + c) / 2.0;  
    double area = sqrt(s * (s - a) * (s - b) * (s - c)); 
    printf("%.2lf", area);
    return 0;
}