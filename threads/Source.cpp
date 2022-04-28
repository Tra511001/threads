#include <iostream>
#include <thread>

using namespace std;


void Work(int x) {
	cout << "Thread, " << x << endl;
}

int main() {
	
	thread thread1 = thread(Work, 1);
	
	thread1.join();
		
	return 0;
}