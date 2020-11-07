#include<iostream>
#include <memory>

template <typename T> 
struct Node{
    T value;
    std::shared_ptr<Node<T> > left;
    std::shared_ptr<Node<T> > right;

    Node(){
        value = 0;
        left = nullptr;
        right = nullptr;
    }
    Node(T inValue){
        value = inValue;
        left = nullptr;
        right = nullptr;
    }
};

template <typename T>
class bin_tree{
public:
    bin_tree(){seed = nullptr; };
    bin_tree(T value);
    ~bin_tree(){};
    // void insert(Node<T>* newNode);
    void insert(T value, std::shared_ptr<Node<T> > currNode = nullptr);
    void print(std::shared_ptr<Node<T> > currNode = nullptr);
    // void remove(Node<T> node);
    // T sumTree(Node<T>* currNode = nullptr);
    // Node* smallestNode();
    // Node* largestNode();
    // int numNodes();

private:
    std::shared_ptr<Node<T> > seed = nullptr;
    
};

template <typename T>
bin_tree<T>::bin_tree(T value){
    seed = std::make_shared<Node<T> >(Node<T>(value));
}

template<typename T>
void bin_tree<T>::insert(T value, std::shared_ptr<Node<T> > currNode){
    if(currNode == nullptr){
        currNode = seed;  
    }
    if (seed == nullptr){
            seed = std::make_shared<Node<T> >(Node<T>(value));
    }
    else{
        std::shared_ptr<Node<T> > l_left = currNode->left;
        std::shared_ptr<Node<T> > l_right = currNode->left;
        if(currNode->value < value){
            if(currNode->right == nullptr){
                
                currNode->right = std::make_shared<Node<T> >(Node<T>(value)); 
            }
            else{
                insert(value, l_right);
            }
        }
        else{
            if (currNode->left == nullptr){
                
                currNode->left = std::make_shared<Node<T> >(Node<T>(value));
            }
            else{
                insert(value, l_left);
            }
        }
    }
}

template<typename T>
void bin_tree<T>::print(std::shared_ptr<Node<T> > currNode){
    if(currNode == nullptr){
        currNode = seed;
        // std::cout << currNode << "  print first if" << std::endl;
    }
    // std::cout << currNode << "  print before second if" << std::endl;
    if(currNode != nullptr){
        std::cout << currNode->value << std::endl;
        if(currNode->right != nullptr){
            print(currNode->right);
        }
        if(currNode->left != nullptr){
            print(currNode->left);
        }
    }
}

// template <typename T>
// void bin_tree<T>::remove(Node<T> node){

// }

// template <typename T>
// T bin_tree<T>::sumTree(Node<T>* currNode){
//     static T sum;
//     if(currNode == nullptr){
//         currNode = seed;
//         sum = static_cast<T>(0);
//     }
//     if(currNode != nullptr){
//         sum = sum + currNode->value;
//         if(currNode->right != nullptr){
//             sum = sumTree(currNode->right);
//         }
//         if(currNode->left != nullptr){
//             sum = sumTree(currNode->left);
//         }
//     }
//     return sum;
// }