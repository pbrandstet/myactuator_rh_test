import myactuator_rh_py as rh

driver = rh.CanDriver("can0")
actuator = rh.ActuatorInterface(driver)