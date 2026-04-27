#include "Livro.h"
#include "Endereco.h"
#include "Editora.h"
#include "Livro.cpp"
#include "Endereco.cpp"
#include "Editora.cpp"

using namespace std;

int main()
{
    Endereco end1("Presidente Vargas", 255, "Jardim Nova Santa Paula", "São Carlos", "SP", "13566-060");
    Endereco end2("15 de novembro", 165, "Centro", "São Carlos", "SP", "13564-560");

    Editora ed1(10, "Saraiva", end1);
    Editora ed2(20, "Cassio", end2);

    Livro l1("Senhor do aneis", "Tolkien", 1, ed1);
    Livro l2("Herry Potter", "JK Rowling", 2, ed1);
    Livro l3("Moby Dicy", "Melville", 3, ed2);

    cout << l1.getTitulo() << endl;
    cout << l2.getAutor() << endl;
    cout << endl;

    cout << "==== RELATÓRIO 1 ====" << endl;
    l1.apresentarLivro();
    cout << endl;
    cout << "==== RELATÓRIO 2 ====" << endl;
    l2.apresentarLivro();
    cout << endl;
    cout << "==== RELATÓRIO 3 ====" << endl;
    l3.apresentarLivro();
    cout << endl;

    return 0;
}