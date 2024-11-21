#include <stdio.h>
int main()
{
	// Khai bao va khoi tao so nguyen la canh cua hinh chu nhat
	int lenght = 20; // Chieu dai cua hinh chu nhat
	int width = 6; // Chieu rong cua hinh chu nhat
	//Khai bao bien luu chi vi va dien tich hinh chu nhat
	int perimeter, acreage;
	// Tinh chu vi va dien tich hinh chu nhat
	perimeter = (lenght + width) * 2; // Chu vi hinh chu nhat 
	acreage = lenght * width; // Dien tich hinh chu nhat
	// In ra ket qua
	printf("Chu vi hinh chu nhat bang: %d\n", perimeter);
	printf("Dien tich hinh chu nhat bang: %d\n", acreage);
	
	return 0;
}
