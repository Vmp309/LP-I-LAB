#ifndef ICONTA_H
#define ICONTA_H


class IConta
{
    public:
        IConta();
        virtual ~IConta();

    protected:
        virtual void sacar(double valor);
        virtual void depositar (double valor);

    private:
};

#endif // ICONTA_H
