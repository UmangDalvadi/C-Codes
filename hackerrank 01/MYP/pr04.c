int max_of_four(int a, int b, int c, int d)
{
    if (a < b)
    {
        if (b < c)
        {
            if (c < d)
            {
                return d;
            }
            else
            {
                return c;
            }
        }
        else
        {
            return b;
        }
    }
    else if (a < c)
    {
        if (c < d)
        {
            return d;
        }
        else
        {
            return c;
        }
    }
    else if (a < d)
    {
        return d;
    }
    else
    {
        return a;
    }
}
