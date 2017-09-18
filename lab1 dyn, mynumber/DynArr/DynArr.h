#ifndef DYNARR_H
#define DYNARR_H

class DynArr
{
    private:
        int *data;
        int size;
        int s;

    public:
        DynArr();
        DynArr(int);
        ~DynArr();
        void set(int, int);
        int get(int);
        void allocate(int);

};

#endif // DYNARR_H
