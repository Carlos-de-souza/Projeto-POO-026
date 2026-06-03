#ifndef ALUNO_H
#define ALUNO_H

class Aluno:public Usuario
{
private:
    int RA;
public:
    Aluno(int RA);
    ~Aluno();
};

#endif // ALUNO_H