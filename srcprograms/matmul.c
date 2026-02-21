#define N 32
int main() {
    float a[N][N], b[N][N], c[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < N; k++)
                c[i][j] += a[i][k] * b[k][j];
    return 0;
}
