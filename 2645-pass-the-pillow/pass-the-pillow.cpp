class Solution {
public:
    int passThePillow(int n, int time)
    {
        int p;
        int ch_size=n-1;
        int num_ch=time/ch_size;
        if(num_ch%2 == 0)
        {
            p=(time%ch_size)+1;
        }
        else if(num_ch%2 == 1)
        {
            p=n-(time%ch_size);
        }
        return p;
    }
};