#include <vector>
#include <iostream>
#include <format>

void print_vec(const std::vector<int> &v)
{
    std::cout << "Vector: ";
    for(int i:v)
        std::cout << i << " ";
    std::cout << std::endl;
}

int v_sum(const std::vector<int> &v)
{
    int sum = 0;
    for(int i:v)
        sum+=i;
    return sum;
}

double v_average(const std::vector<int> &v)
{
    return static_cast<double>(v_sum(v))/static_cast<double>(v.size());
}

int v_min(const std::vector<int>&v)
{
    int vmin = v.front();
    for(int n:v)
    {
        if(n < vmin)
            vmin=n;
    }
    return vmin;
}

int v_max(const std::vector<int>&v)
{
    int vmax = v.front();
    for(int n:v)
    {
        if(n > vmax)
            vmax=n;
    }
    return vmax;
}

int v_pos(const std::vector<int>&v)
{
    int pos=0;
    for(int n:v)
    {
        if(n>0)
            pos++;
    }
    return pos;
}

int v_neg(const std::vector<int>&v)
{
    int neg=0;
    for(int n:v)
    {
        if(n<0)
            neg++;
    }
    return neg;
}

int main()
{
    std::vector<int> v = {5, -2, 10, 42, 0, -7, 8};
    print_vec(v);
    std::cout << std::format("Sum of numbers: {}\n",v_sum(v));
    std::cout << std::format("Average of numbers: {:.2f}\n",v_average(v));
    std::cout << std::format("Min of numbers: {}\n",v_min(v));
    std::cout << std::format("Max of numbers: {}\n",v_max(v));
    std::cout << std::format("Positive numbers: {}\n",v_pos(v));
    std::cout << std::format("Negative numbers: {}\n",v_neg(v));
    return 0;
}
