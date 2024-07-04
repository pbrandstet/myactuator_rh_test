import matplotlib.pyplot as plt

import myactuator_rh_py as rh
import time

driver = rh.CanDriver("can1")
actuator = rh.ActuatorInterface(driver, 23)

actuator.setMotorDisabled()

# Set the actuator to position control params
actuator.setPidParameterPositionRingP(100.0)
actuator.setPidParameterPositionRingI(0.0)
actuator.setPidParameterPositionRingD(80.0)

actuator.setRestrictionParameterMotorSpeedLimit(20)

actuator.setPositionMode()

actuator.setCurrentPositionAsZeroPoint()

actuator.setMotorEnabled()

actuator.setSinglePointOperation(45.0)

# get the current position every 100ms for 10 seconds
timestamps = []
position = []
for i in range(100):
    timestamps.append(i * 0.1)
    position.append(actuator.getCurrentPosition())
    time.sleep(0.1)

actuator.setMotorDisabled()

plt.plot(timestamps, position)
plt.xlabel('Time (s)')
plt.ylabel('Position (deg)')
plt.title('Position vs Time')
plt.show()


