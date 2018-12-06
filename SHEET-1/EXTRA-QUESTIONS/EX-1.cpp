#include <iostream>

#include <cstring>

using namespace std;
class Number {
    int num;
    char isEven[100] , isPrime[100];
    public:
        void setValue() {
            cout << "Enter the number: ";
            cin >> num;
        }
    void is_even() {
        if (num % 2 == 0) {
            strcpy(isEven, "The number is even");
        } else {
            strcpy(isEven, "The number is odd");
        }
    }
    char * get_even() {
        is_even();
        return isEven;
    }
    void is_prime() {
        for(int i = 2; i < num; i++)
        {
            
            if (num%i==0) {
                strcpy(isPrime,"The number is not prime");
                break;
            }   
        }
        strcpy(isPrime,"The number is prime");
    }
    char * get_prime() {
        is_prime();
        return isPrime;
    }
    int get_factorial() {
		int i=1;
		int fact = num;
		while(i < num){
			fact = fact * i;
			i++;
			}
			return fact;
    }
    int sum_of_digits() {
		int dig;
		int sum = 0;
		while(num){
			dig = num%10;
			num = num/10;
			sum = sum*10 + dig;
			}
			return sum;
    }

};
int main() {
    Number number;
    number.setValue();
    cout << number.get_even() << endl;
    cout << number.get_prime()<< endl;
    cout << "The factorial is: "<<number.get_factorial()<< endl;
    cout << "The sum of digits is: "<<number.sum_of_digits()<<endl;
    return 0;
}
