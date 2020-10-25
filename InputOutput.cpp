#include<iostream>
#include <sstream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int n;
	int a, b;
	string s;

	vector<int> input(n, 0);
	//预先不输入数据的组数
	while (cin >> a >> b) {
		cout << a + b << endl;
	}
	//预先知道数据组数
	cin >> n;
	for (int i = 0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		
	}


//数组
	int m, n;
	//cout << "请输入行和列：";
	cin >> m >> n;
	//动态开辟空间  
	int **p = new int*[m]; //开辟行  
	for (int i = 0; i < m; i++)
		p[i] = new int[n]; //开辟列  

						   //cout << "请输入数据：";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> p[i][j];

	//cout << "输出数据：" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << p[i][j];
		cout << endl;
	}
	//释放开辟的资源  
	for (int i = 0; i < m; i++)
		delete[] p[i];
	delete[] p;

	int m, n;
	//cout << "请输入行和列：";
	cin >> m >> n;


//STL
	//注意下面这一行：vector <int后两个 "> "之间要有空格！否则会被认为是重载 "> > "。   
	vector<vector<int> > p(m, vector<int>(n));

	//cout << "请输入数据：";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> p[i][j];

	//cout << "输出数据：" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout  << p[i][j];
		cout << endl;
	}


//用回车终止输入
		vector<int> numbers;
		while (cin>>temp)
		{
			int temp;
			cin >> temp;
			// scanf("%d", &temp);
			numbers.push_back(temp);
			char s = cin.get(); //s用来接收是否是回车
								// s = getchar(); //s用来接收是否是回车
			if (s == '\n')
			{
				break;
			}
		}

		for (int i = 0; i < numbers.size(); i++)
		{
			cout << numbers[i] << " ";
		}

		
}