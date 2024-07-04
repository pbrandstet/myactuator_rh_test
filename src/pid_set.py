import matplotlib.pyplot as plt

import myactuator_rh_py as rh
import time

driver = rh.CanDriver("can0")
actuator = rh.ActuatorInterface(driver, 22)

actuator.setPidParameterPositionRingP(102.0)
actuator.setPidParameterPositionRingI(0.0)
actuator.setPidParameterPositionRingD(100.0)

print(actuator.getPidParameterPositionRingP())
print(actuator.getPidParameterPositionRingI())
print(actuator.getPidParameterPositionRingD())