#include <stdio.h>
int main()
{
	// Khai bao va khoi tao so nguyen la canh cua hinh vuong
	int edge = 20; // Canh cua hinh vuong
	//Khai bao bien luu chi vi va dien tich hinh vuong
	int perimeter, acreage;
	// Tinh chu vi va dien tich hinh vuong
	perimeter = 4 * edge; // Chu vi hinh vuong 
	acreage = edge * edge; // Dien tich hinh vuong
	// In ra ket qua
	printf("Chu vi hinh vuong bang: %d\n", perimeter);
	printf("Dien tich hinh vuong bang: %d\n", acreage);
	
	return 0;
}
