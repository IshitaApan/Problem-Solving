#include<iostream>
#include <stdio.h>
#include <stack>
#include <cstring>
using namespace std;

int main() {
	int testCase;
	char c;
	scanf("%d", &testCase);
	getc(stdin);

	while (testCase--) {
		stack<char> checker;
		char line[140];
		gets(line);

		int len = strlen(line);
		for (int i = 0; i < len; i++) {
			if (line[i] == '(' || line[i] == '[') {
				checker.push(line[i]);
			}
			else if (line[i] == ')') {
				if (checker.empty() || checker.top() != '('){
					checker.push('a');
					break;
				}
				checker.pop();
			}
			else if (line[i] == ']') {
				if (checker.empty() || checker.top() != '['){
					checker.push('a');
					break;
				}
				checker.pop();
			}
		}

		if(checker.empty()) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}

