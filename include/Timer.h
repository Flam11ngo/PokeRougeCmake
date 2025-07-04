#include"common.h"

class Timer{
private:
    int passedTime = 0;
    int waitTime = 0;
    bool oneShot = false;
    bool paused = false;
    bool shotted = false;
    std::function<void()> callback = nullptr;
public:
    void on_update(const int& delta){
        if(paused)
            return;
        passedTime += delta;
        if(passedTime >= waitTime){
            bool Canshot = (!oneShot || (oneShot && !shotted));
            shotted = true;
            if(Canshot  && callback)
                callback();
            passedTime -= waitTime;
        }
    }
    void resume(){
        paused = false;
    }
    void pause(){
        paused = true;
    }
    void restart(){
        passedTime = 0;
        shotted = false;
    }
    void set_wait_time(int time){
        waitTime = time;
    }
    void set_one_shot(bool one_shot){
        oneShot = one_shot;
    }
    void set_on_timeout(std::function<void()> cb){
        callback = cb;
    }

};