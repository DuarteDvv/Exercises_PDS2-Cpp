#ifndef _heapi
#define _heapi

class HeapInt{
    private:
        int* inteiro;

    public:
        HeapInt();
        HeapInt(int &);
        HeapInt(const HeapInt &);
        ~HeapInt();


        HeapInt& operator = (const HeapInt &a);

        int getInt() const;
        void setInt(int);


        


};






#endif
