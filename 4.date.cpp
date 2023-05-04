/*************************************************************************
	> File Name: 4.date.cpp
	> Author: yangchao
	> Mail: 
	> Created Time: Thu 04 May 2023 11:02:46 AM CST
 ************************************************************************/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now = time(0);
    char *dt = ctime(&now);

    cout << "located time: " << dt << endl;

    tm *gt = gmtime(&now);
    dt = asctime(gt);
    cout << "UTC time : " << dt << endl;


    return 0;
}
