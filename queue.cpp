#include <iostream>
#include <queue>

using namespace std;

int main (void)
{
	queue <int> mQ;
	
	for(int i=0;i<10;i++) mQ.push(i);
	while(!mQ.empty())
	{
		cout << mQ.front() << endl;
		mQ.pop();
	}
	
	return 0;
}
