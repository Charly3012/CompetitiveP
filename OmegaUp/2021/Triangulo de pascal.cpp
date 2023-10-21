// Problema: Triángulo de pascal (Niveles)
// https://omegaup.com/course/ResolviendoProblemas2021/assignment/P5#problems/Triangulo-de-Pascal-Niveles

#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        double M, N;
        cin >> M >> N;

        long long resultado = 0;
        for (int k = M; k <= N; k++)
        {
            resultado = resultado + pow(2, k);
        }

        cout << resultado << "\n";
    }

    return 0;
}