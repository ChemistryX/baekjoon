#include <iostream>

using namespace std;

int main() {
    
    // 0: prime, 1: not prime
    int numbers[1000001] = {0}, m, n;
    
    cin >> m >> n;
    
    numbers[0] = 1;
    numbers[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        // 아래 for문에서 이미 걸러진 경우 반복문 continue
        if (numbers[i]) continue;
        // 배수 삭제 algorithm
        for (int j = 2 * i; j <= n; j += i) {
            numbers[j] = 1;
        }
    }
    
    for (int i = m; i <= n; i++) {
        // cf. https://www.educative.io/answers/what-is-the-difference-between-endl-and-n-in-cpp
        // std::endl의 경우 출력 버퍼를 비우기 때문에 성능 측면에서는 \n 사용 권장
        if (!numbers[i]) cout << i << '\n';
    }
    
    return 0;
}
