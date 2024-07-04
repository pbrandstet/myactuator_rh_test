#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>


#include <myactuator_rh/myactuator_rh.hpp>

int main() {
    myactuator_rh::CanDriver driver {"can0"};
    myactuator_rh::ActuatorInterface actuator {driver, 1};

    actuator.setCanId(22);
}