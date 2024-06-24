### commands

``` cpp
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
    std::cout << "getMotorTemperature: " << actuator.getMotorTemperature() << std::endl;
    std::cout << "getProgramVersion: " << actuator.getProgramVersion() << std::endl;
    std::cout << "getMotorName: " << actuator.getMotorName() << std::endl;
```

### response

##### PID Parameters ##### 

getPidParameterPositionRingP: 100
getPidParameterPositionRingI: 0
getPidParameterPositionRingD: 150
getPidParameterPositionLoopSlope: 0
getPidParameterPositionLoopFilterPeriod: 0.01
getPidParameterSpeedRingP: 2
getPidParameterSpeedLoopI: 20
getPidParameterSpeedRingD: 0
getPidParameterSpeedLoopSlope: 0
getPidParameterSpeedLoopFilterPeriod: 0.01
getPidParameterQAxisCurrentLoopP: 2
getPidParameterQAxisCurrentLoopI: 0
getPidParameterQAxisCurrentLoopD: 0
getPidParameterQAxisCurrentLoopSlope: 2
getPidParameterQAxisCurrentLoopFilterPeriod: 0.001
getPidParameterDAxisCurrentLoopP: 2
getPidParameterDAxisCurrentLoopI: 0
getPidParameterDAxisCurrentLoopD: 0
getPidParameterDAxisCurrentLoopSlope: 2
getPidParameterDAxisCurrentLoopFilterPeriod: 0.001


##### RESTRICTION Parameters #####

getRestrictionParameterMotorTemperatureLimit: 85
getRestrictionParameterMotorVoltageLimit: 24
getRestrictionParameterMotorCurrentLimit: 15
getRestrictionParameterMotorSpeedLimit: 20
getRestrictionParameterMotorPositionLimitMin: 0
getRestrictionParameterMotorPositionLimitMax: 0
getRestrictionParameterBrakeStart: 80
getRestrictionParameterBrakeMaintenance: 40
getRestrictionParameterOvervoltageValue: 30
getRestrictionParameterReductionRatio: 101
getRestrictionParameterMotorNumber: 1
getRestrictionParameterFactoryTime: 20240617


##### GENERAL VALUES #####

getCurrentPosition: -2.89307
getCurrentSpeed: 1.4013e-45
getQaxisCurrent: 0
getQaxisVoltage: 0
getDaxisCurrent: 0
getDaxisVoltage: 0
getMotorTemperature: 25.1
getProgramVersion: 20240429
getMotorName: 5929044113186889760
