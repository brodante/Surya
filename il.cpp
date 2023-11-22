#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    const char* emojis[] = {"❤", "💕", "💓", "❣", "😘", "🥺", "💘", "💝", "💖", "💗", "💓", "💞", "💟", "💌"};
    for(int i=0;i<100;++i)
    {
        int numUs=rand()%5+2;
        int numOs=rand()%4+2;
        int numEs=rand()%2+1;
        int emojiIndex=rand()%(sizeof(emojis)/sizeof(emojis[0]));
        cout<<"I love"<<string(numEs,'e')<<" you"<<string(numUs,'u')
            <<" too"<<string(numOs,'o')<<"! "<<emojis[emojiIndex]
            <<emojis[(emojiIndex+1)%(sizeof(emojis)/sizeof(emojis[0]))]
            <<emojis[(emojiIndex+2)%(sizeof(emojis)/sizeof(emojis[0]))]<<'\n';
    }
    return 0;
}
