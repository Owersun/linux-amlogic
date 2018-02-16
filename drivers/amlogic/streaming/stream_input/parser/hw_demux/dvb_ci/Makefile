obj-$(CONFIG_AMLOGIC_STREAMING)	+=	aml_hardware_spi.o aml_hardware_pcmcia.o aml_hardware_ci.o

ccflags-$(CONFIG_AMLOGIC_STREAMING) += -I$(srctree)/drivers/media/dvb-core -I$(srctree)/drivers/gpio -I$(srctree)/include

aml_hardware_spi-objs += aml_spi.o

aml_hardware_pcmcia-objs += aml_pcmcia.o

aml_hardware_ci-objs += aml_ci.o
