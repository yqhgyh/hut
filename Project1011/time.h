void delay(unsigned int xms)
{
	unsigned int x, y;
	for (x = xms; x > 0; x--)
		for (y = 110; y > 0; y--);
}
