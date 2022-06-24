#pragma once
#include <vector>
using namespace std;


template<typename T>
class storage
{
    vector<T> content;
    storage()   {};
    storage(storage const &);
    storage & operator=(storage const &);
public:
    void addTo(T value)
    {
        this->content.push_back(value);
    }

    void Show()
    {

        for (typename vector<T>::iterator i =this->content.begin(); i!=this->content.end(); i++)
        {
        cout << i- this->content.begin()+1 << " element is " << *i << endl;

        }
        cout << "-------------" << endl ;
    }

    void deleteFrom(T value){
        for (typename vector<T>::iterator i =this->content.begin(); i!=this->content.end(); i++)
        {
            if (*i==value)
            {
                if (*(i+1) == *(this->content.end()))
                {
                    this->content.pop_back();
                    break;
                }
                else
                    this->content.erase(i);
            }
        }

    }

    static storage & Instance()
    {
        static storage OnlyOneObj;
        return OnlyOneObj;
    }
};

bool isPowTwo(uint64_t value);
