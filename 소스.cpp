#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool isPalindrome(string word) {
	
	string word2 = word;
	reverse(word.begin(), word.end());
	// reverse �Լ��� �̿��ؼ� ���ڰ� �������� �װ� word�� �ٽ� �����.

	if (word2 == word) // �̷��� �Ųٷ� ������ ������ Ȯ���ϱ� ���ؼ��� ������ 
		               // �ܾ�� ������ �ܾ ���ؾ� �ϴµ� reverse ������ word�� �������� �ܾ �����.
		               // �׷��⿡ �� ������ word2�� ó�� �ۼ��� ������ word�� �����ؾ� �Ѵ�. 
		return true;
	else
		return false;
}

int main() {

	string word;
	cout << "ȸ���� Ȯ���� �ܾ �Է��Ͻÿ�: ";
	cin >> word;
	
	cout << isPalindrome(word) << endl;

	return 0;
}

