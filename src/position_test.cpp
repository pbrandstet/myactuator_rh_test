#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>


#include <myactuator_rh/myactuator_rh.hpp>


int main() {
    myactuator_rh::CanDriver driver {"can1"};
    myactuator_rh::ActuatorInterface actuator {driver, 23};

    actuator.setMotorDisabled();

    actuator.setPidParameterPositionRingP(100.0f);
    std::cout << "getPidParameterPositionRingP: " << actuator.getPidParameterPositionRingP() << std::endl;

    actuator.setPidParameterPositionRingI(0.0f);
    std::cout << "getPidParameterPositionRingI: " << actuator.getPidParameterPositionRingI() << std::endl;

    actuator.setPidParameterPositionRingD(150.0f);
    std::cout << "getPidParameterPositionRingD: " << actuator.getPidParameterPositionRingD() << std::endl;

    actuator.setPidParameterPositionLoopSlope(0.0f);
    std::cout << "getPidParameterPositionLoopSlope: " << actuator.getPidParameterPositionLoopSlope() << std::endl;

    actuator.setPidParameterPositionLoopFilterPeriod(0.01f);
    std::cout << "getPidParameterPositionLoopFilterPeriod: " << actuator.getPidParameterPositionLoopFilterPeriod() << std::endl;

    actuator.setRestrictionParameterMotorSpeedLimit(20.0f);

    actuator.setPositionMode();
    std::cout << "getMotorMode: " << myactuator_rh::MOTOR_MODE_MAP[actuator.getMotorMode()] << std::endl;

    actuator.setCurrentPositionAsZeroPoint();
    std::cout << "current motor position: " << actuator.getCurrentPosition() << std::endl;

    actuator.setMotorEnabled();

    actuator.setSinglePointOperation(0.0f);

    // while(true)
    // {
    //     if(abs(abs(actuator.getCurrentPosition()) - 180.0) < 0.1)
    //     {
    //         std::cout << "position reached" << std::endl;
    //         break;
    //     }
    // }

}