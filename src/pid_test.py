import matplotlib.pyplot as plt

import myactuator_rh_py as rh
import time

driver = rh.CanDriver("can0")
actuator = rh.ActuatorInterface(driver, 23)

actuator.setMotorDisabled()

# Set the actuator to position control params
actuator.setPidParameterPositionRingP(10.0)
actuator.setPidParameterPositionRingI(0.0)
actuator.setPidParameterPositionRingD(1.1)
actuator.setPidParameterPositionLoopSlope(0.0)
actuator.setPidParameterPositionLoopFilterPeriod(0.01)

actuator.setPidParameterQAxisCurrentLoopP(2.0)
actuator.setPidParameterQAxisCurrentLoopI(0.0)
actuator.setPidParameterQAxisCurrentLoopD(0.0)
actuator.setPidParameterQAxisCurrentLoopSlope(40.0)
actuator.setPidParameterQAxisCurrentLoopFilterPeriod(0.01)

actuator.setPidParameterDAxisCurrentLoopP(2.0)
actuator.setPidParameterDAxisCurrentLoopI(0.0)
actuator.setPidParameterDAxisCurrentLoopD(0.0)
actuator.setPidParameterDAxisCurrentLoopSlope(40.0)
actuator.setPidParameterDAxisCurrentLoopFilterPeriod(0.01)

actuator.setRestrictionParameterMotorSpeedLimit(25)

actuator.setPositionMode()

actuator.setCurrentPositionAsZeroPoint()

actuator.setMotorEnabled()

actuator.setSinglePointOperation(45.0)

# get the current position every 100ms for 10 seconds
timestamps = []
position = []
for i in range(100):
    timestamps.append(i * 0.02)
    position.append(actuator.getCurrentPosition())
    time.sleep(0.02)

actuator.setMotorDisabled()

plt.plot(timestamps, position)
plt.xlabel('Time (s)')
plt.ylabel('Position (deg)')
plt.title('Position vs Time')
plt.show()


