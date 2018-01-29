#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct client
{
	string name;
	int priority;
};

class ComparisonClass
{
	bool reverse;
	
	public:
	
	ComparisonClass(const bool& reverseParameter = false)
	{
		reverse = reverseParameter;
	}
	
	bool operator() (const client& left, const client& right) const
	{
		if(reverse) return (left.priority > right.priority);
		else return (left.priority <= right.priority);
	}
};

int main (void)
{
	typedef priority_queue<client, vector <client>, ComparisonClass> BCQ;
	
	BCQ q(ComparisonClass(false));
	
	client c;
	
	c.name = "Mridha";
	c.priority = 1;
	q.push(c);
	
	c.name = "Chowdhury";
	c.priority = 3;
	q.push(c);
	
	c.name = "Ibtasham";
	c.priority = 1;
	q.push(c);
	
	c.name = "Noshin";
	c.priority = 4;
	q.push(c);
	
	c.name = "Anika";
	c.priority = 4;
	q.push(c);
	
	while(!q.empty())
	{
		client c1= q.top(); 
		cout << c1.name << " " << c1.priority << endl;
		q.pop();
	}
	
	/*
	priority_queue <int> pQ;
	pQ.push(4);
	pQ.push(11);
	pQ.push(3);
	pQ.push(15);
	pQ.push(1);
	
	cout << pQ.size() << endl;
	
	while(!pQ.empty())
	{
		cout << pQ.top() << endl;
		pQ.pop();
	}
	*/
	
	return 0;
}
