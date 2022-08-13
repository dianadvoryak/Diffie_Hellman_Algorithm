#include <iostream>
using namespace std;

int main()
{
    int f = 0, n = 2, x1, x2, y1, y2, x3 = 1, y3 = 1, lambda, a, b, p, obmenX_A, obmenY_A, obmenX_B, obmenY_B, inver = 1, deli, del = 1, Klich_1, Klich_2, rezK1=0, rezK2=0, rezK3=0, rezK4=0;
    int zapas_x1, zapas_y1;
    /*
    cout << "ENTER x1" << endl;
    cin >> x1; 
    x2 = x1;
    zapas_x1 = x1
    cout << "ENTER y1" << endl;
    cin >> y1;
    y2 = y1;
    zapas_y1 = y1;
    cout << "ENTER a" << endl;
    cin >> a; 
    cout << "ENTER b" << endl;
    cin >> b; 
    cout << "ENTER Klich_1" << endl;
    cin >> Klich_1;
    cout << "ENTER Klich_2" << endl;
    cin >> Klich_2; 
    cout << "ENTER p" << endl;
    cin >> p; 
    */
    
    
    x1 = 2;
    x2 = x1;
    y1 = 2;
    y2 = y1;  
    a = 0; 
    b = -4; 
    Klich_1 = 121;
    Klich_2 = 203; 
    p = 211; 
    
    zapas_x1 = x1;
    zapas_y1 = y1;
    
    if (p <= 0)
    {
        while (p <= 0)
        {
            cout << "BBedite p>0" << endl;
            cin >> p;
        }
    }
    

    cout <<"--- ALICE COUNTS ---";
    while (del != 0)
    {
        if (x1 == x2 && y1 == y2)
        {
            deli = 3 * x1 * x1 + a;
            del = 2 * y1;
            if (del < 0)
            {
                deli = -deli;
                del = -del;
            }

            for (int i = 1; i <= p - 1; i++)
            {
                if (i * del % p == 1)
                    inver = i;
            }

            lambda = (deli * inver) % p;
            x3 = (lambda * lambda - 2 * x1) % p;
            y3 = (lambda * (x1 - x3) - y1) % p;
            if (x3 < 0)
                x3 = x3 + p;
            if (y3 < 0)
                y3 = y3 + p;
            //cout << "\n" << "P" << n << "\n" << "x= " << x3 << "\n" << "y= " << y3;
        }

        if (x1 != x2 || y1 != y2)
        {
            deli = y2 - y1;
            del = x2 - x1;

            if (del < 0)
            {
                deli = -deli;
                del = -del;
            }

            for (int i = 1; i <= p - 1; i++)
            {
                if (i * del % p == 1)
                    inver = i;
            }

            lambda = (deli * inver) % p;
            x3 = (lambda * lambda - x1 - x2) % p;
            y3 = (lambda * (x1 - x3) - y1) % p;
            if (x3 < 0)
                x3 = x3 + p;
            if (y3 < 0)
                y3 = y3 + p;
            //cout << "\n" << "P" << n << "\n" << "x= " << x3 << "\n" << "y= " << y3;
        }
        n++;
        y2 = y3;
        x2 = x3;
        if (n == Klich_1 +1)
        {
            cout << "\n" << "P" << n-1 << "\n" << "x= " << x3 << "\n" << "y= " << y3 << endl;
            break;
        }
        
    }
    obmenX_A = x3;
    obmenY_A = y3;

    
    
    x1 = zapas_x1;
    x2 = x1;
    y1 = zapas_y1; 
    y2 = y1;
    

    
    n=2;
    cout << endl << "--- COUNTS BOB ---";
    while (del != 0)
    {
        if (x1 == x2 && y1 == y2)
        {
            deli = 3 * x1 * x1 + a;
            del = 2 * y1;
            if (del < 0)
            {
                deli = -deli;
                del = -del;
            }

            for (int i = 1; i <= p - 1; i++)
            {
                if (i * del % p == 1)
                    inver = i;
            }

            lambda = (deli * inver) % p;
            x3 = (lambda * lambda - 2 * x1) % p;
            y3 = (lambda * (x1 - x3) - y1) % p;
            if (x3 < 0)
                x3 = x3 + p;
            if (y3 < 0)
                y3 = y3 + p;
            //cout << "\n" << "P" << n << "\n" << "x= " << x3 << "\n" << "y= " << y3;
        }

        if (x1 != x2 || y1 != y2)
        {
            deli = y2 - y1;
            del = x2 - x1;

            if (del < 0)
            {
                deli = -deli;
                del = -del;
            }

            for (int i = 1; i <= p - 1; i++)
            {
                if (i * del % p == 1)
                    inver = i;
            }

            lambda = (deli * inver) % p;
            x3 = (lambda * lambda - x1 - x2) % p;
            y3 = (lambda * (x1 - x3) - y1) % p;
            if (x3 < 0)
                x3 = x3 + p;
            if (y3 < 0)
                y3 = y3 + p;
            //cout << "\n" << "P" << n << "\n" << "x= " << x3 << "\n" << "y= " << y3;
        }
        n++;
        y2 = y3;
        x2 = x3;
        if (n == Klich_2 +1)
        {
            cout << "\n" << "P" << n-1 << "\n" << "x= " << x3 << "\n" << "y= " << y3;
            break;
        }
        
    }
    obmenX_B = x3;
    obmenY_B = y3;
    
    


// part 2 - key exchange



    cout <<endl<<endl<<"--- KEY EXCHANGE ---" <<endl<<endl;
    x1 = obmenX_B;
    x2 = x1;
    y1 = obmenY_B;
    y2 = y1;

    n = 2;

    cout <<"--- ALICE COUNTS ---";
    while (del != 0 )
    {
        if (x1 == x2 && y1 == y2)
        {
            deli = 3 * x1 * x1 + a;
            del = 2 * y1;
            if (del < 0)
            {
                deli = -deli;
                del = -del;
            }

            for (int i = 1; i <= p - 1; i++)
            {
                if (i * del % p == 1)
                    inver = i;
            }

            lambda = (deli * inver) % p;
            x3 = (lambda * lambda - 2 * x1) % p;
            y3 = (lambda * (x1 - x3) - y1) % p;
            if (x3 < 0)
                x3 = x3 + p;
            if (y3 < 0)
                y3 = y3 + p;
            //cout << "\n" << "P" << n << "\n" << "x= " << x3 << "\n" << "y= " << y3;
        }

        if (x1 != x2 || y1 != y2)
        {
            deli = y2 - y1;
            del = x2 - x1;

            if (del < 0)
            {
                deli = -deli;
                del = -del;
            }

            for (int i = 1; i <= p - 1; i++)
            {
                if (i * del % p == 1)
                    inver = i;
            }

            lambda = (deli * inver) % p;
            x3 = (lambda * lambda - x1 - x2) % p;
            y3 = (lambda * (x1 - x3) - y1) % p;
            if (x3 < 0)
                x3 = x3 + p;
            if (y3 < 0)
                y3 = y3 + p;
            //cout << "\n" << "P" << n << "\n" << "x= " << x3 << "\n" << "y= " << y3;
        }
         n++;
        y2 = y3;
        x2 = x3;
        if (n == Klich_1 +1)
        {
            cout << "\n" << "P" << n-1 << "\n" << "x= " << x3 << "\n" << "y= " << y3;
            break;
        }
        
    }
    rezK1 = x3;
    rezK2 = y3;
    
    
    
    
    x1 = obmenX_A;
    x2 = x1;
    y1 = obmenY_A;
    y2 = y1;

    n = 2;

    cout << endl  << endl <<"--- COUNTS BOB ---";
    while (del != 0 )
    {
        if (x1 == x2 && y1 == y2)
        {
            deli = 3 * x1 * x1 + a;
            del = 2 * y1;
            if (del < 0)
            {
                deli = -deli;
                del = -del;
            }

            for (int i = 1; i <= p - 1; i++)
            {
                if (i * del % p == 1)
                    inver = i;
            }

            lambda = (deli * inver) % p;
            x3 = (lambda * lambda - 2 * x1) % p;
            y3 = (lambda * (x1 - x3) - y1) % p;
            if (x3 < 0)
                x3 = x3 + p;
            if (y3 < 0)
                y3 = y3 + p;
            //cout << "\n" << "P" << n << "\n" << "x= " << x3 << "\n" << "y= " << y3;
        }

        if (x1 != x2 || y1 != y2)
        {
            deli = y2 - y1;
            del = x2 - x1;

            if (del < 0)
            {
                deli = -deli;
                del = -del;
            }

            for (int i = 1; i <= p - 1; i++)
            {
                if (i * del % p == 1)
                    inver = i;
            }

            lambda = (deli * inver) % p;
            x3 = (lambda * lambda - x1 - x2) % p;
            y3 = (lambda * (x1 - x3) - y1) % p;
            if (x3 < 0)
                x3 = x3 + p;
            if (y3 < 0)
                y3 = y3 + p;
            //cout << "\n" << "P" << n << "\n" << "x= " << x3 << "\n" << "y= " << y3;
        }
         n++;
        y2 = y3;
        x2 = x3;
        if (n == Klich_2 +1)
        {
            cout << "\n" << "P" << n-1 << "\n" << "x= " << x3 << "\n" << "y= " << y3<<endl<<endl;
            break;
        }
        
    }
    rezK3 = x3;
    rezK4 = y3;
    
    
    
    if (rezK1 == rezK3 && rezK2 == rezK4)
    {
    cout << "The keys are the same" <<endl<< "K1 = (" << rezK1 << ";" << rezK2 << ") u K2 = (" << rezK3 << ";" << rezK4 << ")" << endl;
    }
    else
    cout << "Keys are NOT the same";

}