obj-$(CONFIG_AMLOGIC_STREAMING)	+= aml_hardware_dmx.o

ccflags-$(CONFIG_AMLOGIC_STREAMING) += -I$(srctree)/drivers/media/dvb-core -I$(srctree)/drivers/gpio -I$(srctree)/include

aml_hardware_dmx-objs += aml_dvb.o
aml_hardware_dmx-objs += aml_dmx.o

obj-$(CONFIG_AMLOGIC_STREAMING) += dvb_ci/
