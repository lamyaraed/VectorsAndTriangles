/**
 *  @file    main.cpp
 *  @author  Mahmoud Ahmed Tawfik (20160227) - Sara Zakareia Adam (20170384) - Lamya Raed Aly (20170339)
 *  @date    31/03/2019
 *  @version 1.0
 *
 *  @Problem non-degenerateTriangle(P4)
 *
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector <int> v; 
	int c;
    cout << "Enter the size of the array : "; cin >> c;
    while (c--)
    {
		int t;
        cout << "Enter the number : "; cin >> t;
        v.push_back(t);
    }
    system( "CLS" );

	sort(v.begin(), v.end()); 

    if (v.size() >= 3)
    {
		for (int i = 0; i < v.size() - 2; i++) 
			if (v[i] + v[i + 1] > v[i + 2])
			{
                cout << v[i] << ", " << v[i + 1] << ", " << v[i + 2] << "\n";
                return 0;
			}
    }

    cout << "We can't construct non-degenerate triangle.\n";

    return 0;
}
