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
	//Ԥ�Ȳ��������ݵ�����
	while (cin >> a >> b) {
		cout << a + b << endl;
	}
	//Ԥ��֪����������
	cin >> n;
	for (int i = 0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		
	}


//����
	int m, n;
	//cout << "�������к��У�";
	cin >> m >> n;
	//��̬���ٿռ�  
	int **p = new int*[m]; //������  
	for (int i = 0; i < m; i++)
		p[i] = new int[n]; //������  

						   //cout << "���������ݣ�";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> p[i][j];

	//cout << "������ݣ�" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << p[i][j];
		cout << endl;
	}
	//�ͷſ��ٵ���Դ  
	for (int i = 0; i < m; i++)
		delete[] p[i];
	delete[] p;

	int m, n;
	//cout << "�������к��У�";
	cin >> m >> n;


//STL
	//ע��������һ�У�vector <int������ "> "֮��Ҫ�пո񣡷���ᱻ��Ϊ������ "> > "��   
	vector<vector<int> > p(m, vector<int>(n));

	//cout << "���������ݣ�";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> p[i][j];

	//cout << "������ݣ�" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout  << p[i][j];
		cout << endl;
	}


//�ûس���ֹ����
		vector<int> numbers;
		while (cin>>temp)
		{
			int temp;
			cin >> temp;
			// scanf("%d", &temp);
			numbers.push_back(temp);
			char s = cin.get(); //s���������Ƿ��ǻس�
								// s = getchar(); //s���������Ƿ��ǻس�
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