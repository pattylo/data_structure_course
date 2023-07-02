#include <iostream>
#include <string>
#include <memory>

class Entity
{
private:
    /* data */
public:
    Entity(/* args */);
    ~Entity();
    void Print(){};
};

Entity::Entity(/* args */)
{
    std::cout<<"Created Entity!"<<std::endl;
}

Entity::~Entity()
{
    std::cout<<"Destroyed Entity!"<<std::endl;
}


int main(int argv, char** argc)
{
    // smart pointer => replace new and delete

    // unique_ptr
        // scope pointer -> get delete outta the scope
        // two cannot be pointing at the same memory

    std::cout<<std::endl;
    std::cout<<"ENTER UNIQUE_PTR BLOCK"<<std::endl;
    {
        
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        // cannot do this -> 
        // std::unique_ptr<Entity> elala = entity;
        entity->Print();
    }
    std::cout<<"LEAVE UNIQUE_PTR BLOCK"<<std::endl;
    std::cout<<std::endl;

    // shared_ptr
        // create a memory block for reference count
        // to count how many pointer is pointing 
        // at a specific memory.
        // when a new pointer is created/copy to point 
        // at the specific memory,
        // reference ++;
        // after the reference returns to zero, 
        // the specific memory is freed.

    std::cout<<std::endl;
    std::cout<<"ENTER SHARED_PTR BLOCK"<<std::endl;
    std::shared_ptr<Entity> elala;
    { 
        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
        elala = sharedEntity;
    }
    std::cout<<"LEAVE SHARED_PTR BLOCK"<<std::endl;
    std::cout<<std::endl;

    // weak_ptr
        // similar to shared_ptr, 
        // but does not increase ref count

    std::cout<<std::endl;
    std::cout<<"ENTER WEAK_PTR BLOCK"<<std::endl;
    std::weak_ptr<Entity> elalaa;
    {
        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
        elalaa = sharedEntity;
    }
    std::cout<<"LEAVE WEAK_PTR BLOCK"<<std::endl;
    std::cout<<std::endl;





}