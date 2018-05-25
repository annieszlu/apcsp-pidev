#include <stdio.h> 
#include <math.h>

float myAreaFunction(float radius)
{
	float area = M_PI * radius * radius;
	return area;
}


int main()
{
	for (float i = 3.5; i <= 12.5; i++)
	{
		float ans = myAreaFunction(i);
		printf("%f\n", ans);
	}

}
