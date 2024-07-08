import matplotlib.pyplot as plt

import myactuator_rh_py as rh
import time

driver = rh.CanDriver("can0")
actuator = rh.ActuatorInterface(driver, 23)

actuator.setMotorDisabled()

actuator.setRestrictionParameterMotorSpeedLimit(20)

actuator.setSpeedMode()

actuator.setMotorEnabled()

actuator.setSinglePointOperation(20.0)

time.sleep(30)

actuator.setMotorDisabled()


