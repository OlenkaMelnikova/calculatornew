float sum(float a, float b)
{
	return a + b;
}
float sub(float a, float b)
{
	return a - b;
}

float pow1(float a, float b)
{
	return a*b;
}
float dev(float a, float b)
{
	if (b != 0) return a / b;
	else return 0;
}
float involution(float a, float b)
{
	float result = 1;
	for (int i = 0; i <b; i++)
	{
		result *= a;
	}

	return result;
}
float sqrt1(float a)
{
	if (a <= 0)
		return 0;
	else
	{
		double c;
		c = 1;
		while (c*c != a)
		{
			c = 1. / 2 * (c + a / c);
		}
		return c;
	}

}
