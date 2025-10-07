#include <iostream>

int digital_root(int n)
{
    int sum = 0;
    do
    {
        sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    } while (sum > 9);

    return sum;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << digital_root(n) << std::endl;
    return 0;
}
