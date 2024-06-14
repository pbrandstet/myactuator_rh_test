#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>


#include <myactuator_rh/myactuator_rh.hpp>


int main() {
    myactuator_rh::CanDriver driver {"can0"};
    myactuator_rh::ActuatorInterface actuator {driver, 1};

    actuator.setMotorDisabled();

    actuator.setPidParameterPositionRingP(100.0f);
    std::cout << "getPidParameterPositionRingP: " << actuator.getPidParameterPositionRingP() << std::endl;

    actuator.setPidParameterPositionRingI(0.0f);
    std::cout << "getPidParameterPositionRingI: " << actuator.getPidParameterPositionRingI() << std::endl;
    
    actuator.setPidParameterPositionRingD(140.0f);
    std::cout << "getPidParameterPositionRingD: " << actuator.getPidParameterPositionRingD() << std::endl;

    actuator.setPidParameterPositionLoopSlope(0.0f);
    std::cout << "getPidParameterPositionLoopSlope: " << actuator.getPidParameterPositionLoopSlope() << std::endl;

    actuator.setPidParameterPositionLoopFilterPeriod(0.01f);
    std::cout << "getPidParameterPositionLoopFilterPeriod: " << actuator.getPidParameterPositionLoopFilterPeriod() << std::endl;

    actuator.setRestrictionParameterMotorSpeedLimit(5.0f);
    
    actuator.setPositionMode();
    std::cout << "getMotorMode: " << myactuator_rh::MOTOR_MODE_MAP[actuator.getMotorMode()] << std::endl;

    actuator.setCurrentPositionAsZeroPoint();
    std::cout << "current motor position: " << actuator.getCurrentPosition() << std::endl;

    actuator.setMotorEnabled();
    
    actuator.setSinglePointOperation(90.0f);

    while(true)
    {
        auto position = actuator.getCurrentPosition();
        std::cout << "get motor position: " << position << std::endl;
        auto delta_position = fabsf(fabsf(position) - 90.0);
        std::cout << "delta position: " << delta_position << std::endl;
        if( delta_position < 0.5)
        {
            break;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

}