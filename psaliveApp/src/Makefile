TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# Build the IOC application

PROD_IOC = psalive
# psalive.dbd will be created and installed
DBD += psalive.dbd

# psalive.dbd will be made up from these files:
psalive_DBD += base.dbd

# Include dbd files from all support applications:
psalive_DBD += psalivesup.dbd

# Add all the support libraries needed by this IOC
#psalive_LIBS += xxx

# psalive_registerRecordDeviceDriver.cpp derives from psalive.dbd
psalive_SRCS += psalive_registerRecordDeviceDriver.cpp
psalive_SRCS += psalivesup.c

# Build the main IOC entry point on workstation OSs.
psalive_SRCS_DEFAULT += psaliveMain.cpp
psalive_SRCS_vxWorks += -nil-

# Add support from base/src/vxWorks if needed
#psalive_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

# Finally link to the EPICS Base libraries
psalive_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
