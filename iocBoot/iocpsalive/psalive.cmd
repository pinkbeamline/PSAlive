#!../../bin/linux-x86_64/psalive

## You may have to change psalive to something else
## everywhere it appears in this file

< envPaths

cd "${TOP}"

## Register all support components
dbLoadDatabase "dbd/psalive.dbd"
psalive_registerRecordDeviceDriver pdbbase

## Load record instances
#dbLoadRecords("db/psalive.db","user=epics")

cd "${TOP}/iocBoot/${IOC}"

dbLoadTemplate("psalive.substitutions")

iocInit

## Start any sequence programs
#seq sncxxx,"user=epics"
