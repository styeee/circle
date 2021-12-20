#include <iostream>
using namespace std;

int main()
{
    for(size_t y=0;y<32;y++)
    {
        for(size_t x=0;x<32;x++)
        {
            const size_t xx=x-16;
            const size_t yy=y-16;

            if((xx*xx+yy*yy)>128)
                cout<<' '<<' ';
            else
                cout<<' '<<'*';
        }
        cout<<endl;
    }

    return 0;
}
