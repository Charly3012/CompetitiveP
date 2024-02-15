#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b, c;
    double r1, r2;

    cin >> a >> b >> c;

    r1 = ((-b + sqrt(b * b - 4 * a * c)) / (a * 2));
    r2 = ((-b - sqrt(b * b - 4 * a * c)) / (a * 2));

    cout << r1 << " " << r2;
    return 0;
}