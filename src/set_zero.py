import myactuator_rh_py as rh

driver = rh.CanDriver("can0")
actuator = rh.ActuatorInterface(driver, 22)

# actuator.setMotorDisabled()
# actuator.setCurrentPositionAsZeroPoint()
actuator.setSinglePointOperation(10)
print(actuator.getCurrentPosition())