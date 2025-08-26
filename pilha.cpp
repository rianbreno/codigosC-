#include <iostream>
#include <stdexcept> // Para usar a exceção std::out_of_range

// Declaração da classe PilhaArray, usando um template para ser genérica
template <typename T>
class PilhaArray {
private:
    T* arr; // Ponteiro para o array que armazenará os elementos
    int tamanho; // Tamanho máximo da pilha
    int topo; // Índice do topo da pilha

public:
    // Construtor
    PilhaArray(int tamanho = 100) {
        this->tamanho = tamanho;
        this->arr = new T[tamanho]; // Aloca memória para o array
        this->topo = -1;
    }

    // Destrutor (importante para liberar a memória alocada dinamicamente)
    ~PilhaArray() {
        delete[] arr;
    }

    // Métodos da Pilha
    void push(T item) {
        if (isFull()) {
            throw std::out_of_range("Pilha está cheia");
        }
        topo++;
        arr[topo] = item;
    }

    T pop() {
        if (isEmpty()) {
            throw std::out_of_range("Pilha está vazia");
        }
        T item = arr[topo];
        topo--;
        return item;
    }

    T peek() {
        if (isEmpty()) {
            throw std::out_of_range("Pilha está vazia");
        }
        return arr[topo];
    }

    bool isEmpty() {
        return topo == -1;
    }

    int count() {
        return topo + 1;
    }

    bool isFull() {
        return topo == tamanho - 1;
    }

    void clear() {
        topo = -1;
    }

    void showItems() {
        std::cout << "Itens na pilha:" << std::endl;
        for (int i = 0; i <= topo; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

// Exemplo de uso
int main() {
    PilhaArray<int> minhaPilha(5);

    std::cout << "A pilha está vazia? " << (minhaPilha.isEmpty() ? "Sim" : "Nao") << std::endl;
    std::cout << "Elementos na pilha: " << minhaPilha.count() << std::endl;

    minhaPilha.push(10);
    minhaPilha.push(20);
    minhaPilha.push(30);

    minhaPilha.showItems();
    std::cout << "Elementos na pilha: " << minhaPilha.count() << std::endl;

    std::cout << "Elemento no topo (peek): " << minhaPilha.peek() << std::endl;

    std::cout << "Desempilhando: " << minhaPilha.pop() << std::endl;
    std::cout << "Desempilhando: " << minhaPilha.pop() << std::endl;

    minhaPilha.showItems();
    std::cout << "Elementos na pilha: " << minhaPilha.count() << std::endl;

    minhaPilha.push(40);
    minhaPilha.push(50);
    minhaPilha.push(60);

    minhaPilha.showItems();
    std::cout << "A pilha está cheia? " << (minhaPilha.isFull() ? "Sim" : "Nao") << std::endl;

    try {
        minhaPilha.push(70);
    } catch (const std::out_of_range& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}