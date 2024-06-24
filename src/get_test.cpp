#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>


#include <myactuator_rh/myactuator_rh.hpp>


int main() {
    myactuator_rh::CanDriver driver {"can0"};
    myactuator_rh::ActuatorInterface actuator {driver, 1};

    std::cout << "##### PID Parameters ##### \n" << std::endl;
    std::cout << "getPidParameterPositionRingP: " << actuator.getPidParameterPositionRingP() << std::endl;
    std::cout << "getPidParameterPositionRingI: " << actuator.getPidParameterPositionRingI() << std::endl;
    std::cout << "getPidParameterPositionRingD: " << actuator.getPidParameterPositionRingD() << std::endl;
    std::cout << "getPidParameterPositionLoopSlope: " << actuator.getPidParameterPositionLoopSlope() << std::endl;
    std::cout << "getPidParameterPositionLoopFilterPeriod: " << actuator.getPidParameterPositionLoopFilterPeriod() << std::endl;
    std::cout << "getPidParameterSpeedRingP: " << actuator.getPidParameterSpeedRingP() << std::endl;
    std::cout << "getPidParameterSpeedLoopI: " << actuator.getPidParameterSpeedLoopI() << std::endl;
    std::cout << "getPidParameterSpeedRingD: " << actuator.getPidParameterSpeedRingD() << std::endl;
    std::cout << "getPidParameterSpeedLoopSlope: " << actuator.getPidParameterSpeedLoopSlope() << std::endl;
    std::cout << "getPidParameterSpeedLoopFilterPeriod: " << actuator.getPidParameterSpeedLoopFilterPeriod() << std::endl;
    std::cout << "getPidParameterQAxisCurrentLoopP: " << actuator.getPidParameterQAxisCurrentLoopP() << std::endl;
    std::cout << "getPidParameterQAxisCurrentLoopI: " << actuator.getPidParameterQAxisCurrentLoopI() << std::endl;
    std::cout << "getPidParameterQAxisCurrentLoopD: " << actuator.getPidParameterQAxisCurrentLoopD() << std::endl;
    std::cout << "getPidParameterQAxisCurrentLoopSlope: " << actuator.getPidParameterQAxisCurrentLoopSlope() << std::endl;
    std::cout << "getPidParameterQAxisCurrentLoopFilterPeriod: " << actuator.getPidParameterQAxisCurrentLoopFilterPeriod() << std::endl;
    std::cout << "getPidParameterDAxisCurrentLoopP: " << actuator.getPidParameterDAxisCurrentLoopP() << std::endl;
    std::cout << "getPidParameterDAxisCurrentLoopI: " << actuator.getPidParameterDAxisCurrentLoopI() << std::endl;
    std::cout << "getPidParameterDAxisCurrentLoopD: " << actuator.getPidParameterDAxisCurrentLoopD() << std::endl;
    std::cout << "getPidParameterDAxisCurrentLoopSlope: " << actuator.getPidParameterDAxisCurrentLoopSlope() << std::endl;
    std::cout << "getPidParameterDAxisCurrentLoopFilterPeriod: " << actuator.getPidParameterDAxisCurrentLoopFilterPeriod() << std::endl;

    std::cout << "\n\n##### RESTRICTION Parameters #####\n" << std::endl;
    std::cout << "getRestrictionParameterMotorTemperatureLimit: " << actuator.getRestrictionParameterMotorTemperatureLimit() << std::endl;
    std::cout << "getRestrictionParameterMotorVoltageLimit: " << actuator.getRestrictionParameterMotorVoltageLimit() << std::endl;
    std::cout << "getRestrictionParameterMotorCurrentLimit: " << actuator.getRestrictionParameterMotorCurrentLimit() << std::endl;
    std::cout << "getRestrictionParameterMotorSpeedLimit: " << actuator.getRestrictionParameterMotorSpeedLimit() << std::endl;
    std::cout << "getRestrictionParameterMotorPositionLimitMin: " << actuator.getRestrictionParameterMotorPositionLimitMin() << std::endl;
    std::cout << "getRestrictionParameterMotorPositionLimitMax: " << actuator.getRestrictionParameterMotorPositionLimitMax() << std::endl;
    std::cout << "getRestrictionParameterBrakeStart: " << actuator.getRestrictionParameterBrakeStart() << std::endl;
    std::cout << "getRestrictionParameterBrakeMaintenance: " << actuator.getRestrictionParameterBrakeMaintenance() << std::endl;
    std::cout << "getRestrictionParameterOvervoltageValue: " << actuator.getRestrictionParameterOvervoltageValue() << std::endl;
    std::cout << "getRestrictionParameterReductionRatio: " << actuator.getRestrictionParameterReductionRatio() << std::endl;
    std::cout << "getRestrictionParameterMotorNumber: " << actuator.getRestrictionParameterMotorNumber() << std::endl;
    std::cout << "getRestrictionParameterFactoryTime: " << actuator.getRestrictionParameterFactoryTime() << std::endl;


    std::cout << "\n\n##### GENERAL VALUES #####\n" << std::endl;
    std::cout << "getCurrentPosition: " << actuator.getCurrentPosition() << std::endl;
    std::cout << "getCurrentSpeed: " << actuator.getCurrentSpeed() << std::endl;
    std::cout << "getQaxisCurrent: " << actuator.getQaxisCurrent() << std::endl;
    std::cout << "getQaxisVoltage: " << actuator.getQaxisVoltage() << std::endl;
    std::cout << "getDaxisCurrent: " << actuator.getDaxisCurrent() << std::endl;
    std::cout << "getDaxisVoltage: " << actuator.getDaxisVoltage() << std::endl;
    std::cout << "getMotorTemperature: " << actuator.getMotorTemperature() << std::endl;
    std::cout << "getProgramVersion: " << actuator.getProgramVersion() << std::endl;
    std::cout << "getMotorName: " << actuator.getMotorName() << std::endl;


    return EXIT_SUCCESS;
}