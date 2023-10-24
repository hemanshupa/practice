#include <iostream>
#include <map>

//All related to view in this namespace
namespace View{
    class Bulb{
        int bulb_id = 0;
        public:
        Bulb(int id){
            bulb_id = id;
        }
        void Display(const bool& switch_state){
            std::cout << "Bulb " << bulb_id << (switch_state == true ? " glowing" : " off") << std::endl;
        }


    };

};

//All related to model in this namespace
namespace Model{
    class Switch{
        bool switch_state = false;
    public:
        Switch(){
            switch_state = (bool)(rand()%2)-1;
        }
        void setSwitchState(bool toggle){
            switch_state = toggle;
        }
        bool getSwitchState(){
            return switch_state;
        }
    };

};

//All related to controller in this namespace
namespace Controller{
    class SwitchBoardModule{
        View::Bulb* bulb;
        Model::Switch* rocker;

    public:
        SwitchBoardModule(View::Bulb* b, Model::Switch* s){
            bulb=b;
            rocker=s;
        }

        bool getSwitchState(){
            return rocker->getSwitchState();
        }

        void setSwitchState(bool toggle){
            rocker->setSwitchState(toggle);
            bulb->Display(rocker->getSwitchState());
        }
        
        void display(){
            bulb->Display(rocker->getSwitchState());
        }
        // SwitchBoardModule(const SwitchBoardModule& old_sw){
        //     bulb = new View::Bulb(old_sw.bulb.);
        // }
    };


};

int main()
{
    
    std::map<int, Controller::SwitchBoardModule*> Switchboard;

    for(int i=0; i<5; i++){
        Switchboard[i] = new Controller::SwitchBoardModule(new View::Bulb(i+1),new Model::Switch());
        Switchboard[i]->display();
    }

    for(int i=0; i<5; i++){
        Switchboard[i]->setSwitchState(Switchboard[i]->getSwitchState() == false?true:false);
    }


    return 0;
}
