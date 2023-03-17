#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool isPalindrome(string word) {
	
	string word2 = word;
	reverse(word.begin(), word.end());
	// reverse 함수를 이용해서 문자가 뒤집혔고 그게 word에 다시 저장됨.

	if (word2 == word) // 이렇게 거꾸로 돌려도 같은지 확인하기 위해서는 원래의 
		               // 단어와 뒤집힌 단어를 비교해야 하는데 reverse 때문에 word는 뒤집혀진 단어가 저장됨.
		               // 그렇기에 맨 위에서 word2에 처음 작성한 상태인 word를 저장해야 한다. 
		return true;
	else
		return false;
}

int main() {

	string word;
	cout << "회문을 확인할 단어를 입력하시오: ";
	cin >> word;
	
	cout << "해당 단어의 회문은"<<isPalindrome(word) <<"입니다."<< endl;
	touched by llAANNAAa

	return 0;
}

