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
	//data2��data1��һ��Ԫ�صĵ�ַ����Ϊ�����������ָ���һ��Ԫ�ص�ָ�롣�� *data2�ǵ�һ��Ԫ��

	cout << "Size 1: " << size1 << " Size 2: " << size2 << " Size 3: " << size3 << endl;
	//������Ϊ24,4,4. ��Ϊÿ��Intռ4�ֽڣ� ����size1��data1��6��intԪ�أ�ռ24�ֽڣ���
	//size 2 = 4 ��Ϊ����������ָ�룬ָ���һ��Ԫ�أ�ָ��ռ4�ֽڡ�
	//size 3 = 4 ��Ϊ�����ڱ���������ʱ����ͬ��ָ�룬ͬ��Ϊ4�ֽڡ�

	return 0 ;

}