double sum(double a, double b)
{
	return a + b;
}
double sub(double a, double b)
{
	return a - b;
}

double pow1(double a, double b)
{
	return a*b;
}
double * dev(double a, double b)
{	
	if (b!=0)
	{
	        double *p = new double;
		*p = a / b;
		return p;
	}
	else return nullptr;
}
double involution(double a, int c)
{	
        double a1 = 1;	
        if (c>0)		
                for (int i = 0; i < c; i++)		
                        a1 = a1*a;	
        if (c<0)	
                for (int i = 0; i < (-c); i++)			
                        a1 = a1 / a;
        return a1;
}

double *sqrt1(double a)
{ 
	double c = 0, res = a;
        if (a > 0)
	{
	       double *r = new double;
	       if (a != 1 && a != 0)
	       {
	            while (c - res > 0.00001 || c - res < -0.00001)
		    {
		         c = res;
		         res = (c + a / res) / 2;
		    }
	            *r = res;
	       }
	       else if (a == 1) *r = 1;
     	       else if (a == 0) *r = 0;
	return r;	
	}
	else return nullptr;
}	
double absolut(double a)
{	
        return ((a >= 0) ? a : -a);
}
double roundp(double a)
{	
        if (a < 0)
                a = -absolut(a);
        return a;
}
