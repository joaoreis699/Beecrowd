#include <stdio.h>

  float calculate_consumption(int X, float fuel) {
        
        return X/fuel;
  }

  int main(void) {
  
        int X;
        float fuel;

	scanf("%d %f", &X, &fuel);

        printf("%.3f km/l\n", calculate_consumption(X, fuel));
        
        return 0;
}
