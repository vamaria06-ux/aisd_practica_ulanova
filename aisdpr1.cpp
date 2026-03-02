#include <iostream>
#include <cstddef>

template <class T>
T* merge2 (const T* a, size_t sa, const T* b, size_t sb, T* c)
{
    size_t s_a =0, s_b = 0, s_c = 0;
    while (s_a < sa && s_b < sb)
    {
        if (a[s_a]< b[s_b])
        {
            c[s_c++] = a[s_a++];
        } else 
        {
            c[s_c++] = b[s_b++];
        }
    }
    while( s_a < sa)
    {
        c[s_c++] = a[s_a++];
    }
    while( s_b < sb)
    {
        c[s_c++] = b[s_b++];
    }
    return c;
}


int main()
{
    int a[] = {1,4,6};
    int b[] = {2,3,5};
    size_t sa = 3;
    size_t sb = 3;
    int c[6];
    merge2(a, sa, b, sb, c);
    for (int i = 0; i < 6; i++)
    {
        std::cout << c[i] << " ";
    }
}