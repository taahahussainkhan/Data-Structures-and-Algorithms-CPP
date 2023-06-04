template <typename T>
class vector
{
    // Data Members
    private:
    T* arr;
    int cs; // Current Size
    int ms; // Max Size

    // Methods
    public:
    vector() // This is how a vector looks like initially.
    {
        cs = 0;
        ms = 1;
        arr = new T[ms];
    }
       vector(int maxSize) {
        cs = 0;
        ms = maxSize;
        arr = new T[ms];
    }
    void push_back(T d)
    {
        // Two cases
        if (cs == ms)
        {
            // Create a new array and delete the old one, double the capacity
            T* oldArr = arr;
            ms = 2*ms;
            arr = new T[ms];
            // Copy the elements
            for(int i=0;i<cs;i++)
            {
                arr[i] = oldArr[i];
            }
            // Delete the old array
            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back()
    {
        if(cs >= 0)
        {
            cs--;
        }
    }
    bool isEmpty()const // const is used so that the function cannot change the value of cs
    {
        return cs == 0;
    }
    //Front, Back, At(i), []

    T front()const
    {
        return arr[0];
    }
    T back() const
    {
        return arr[cs-1];
    }
    T at(int i) const
    {
        return arr[i];
    }
    T size() const
    {
        return cs;
    }
    T capacity()const
    {
        return ms;
    }
    T operator[](const int i)
    {
        return arr[i];
    }

};