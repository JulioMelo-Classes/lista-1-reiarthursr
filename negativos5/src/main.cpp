#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*ok, não precisava de um vetor*/
int main(void)
{
    // TODO: Adicione aqui seu código.
    int nums[SIZE], neg=0;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> nums[i];
        if(nums[i] < 0) neg++;
    }

    cout << neg;

    return 0;
}
