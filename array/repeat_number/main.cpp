#include <iostream>

using namespace std;


int Getsizeof(int data[]) {
	return sizeof(data);
}

int main() {
	int data1[] = { 1,2,3,4,5,6 };
	int size1= sizeof(data1);

	int *data2 = data1;
	int size2 = sizeof(data2);

	int size3 = Getsizeof(data1);

	cout <<"address of the first element in data1: " <<data2 << endl; 
	cout << "value of the first element in data1: " << *data2 << endl;
	//data2是data1第一个元素的地址（因为数组的名字是指向第一个元素的指针。） *data2是第一个元素

	cout << "Size 1: " << size1 << " Size 2: " << size2 << " Size 3: " << size3 << endl;
	//输出结果为24,4,4. 因为每个Int占4字节， 所以size1（data1，6个int元素，占24字节）。
	//size 2 = 4 因为数组名字是指针，指向第一个元素，指针占4字节。
	//size 3 = 4 因为数组在被函数传递时，等同于指针，同样为4字节。

	return 0 ;

}