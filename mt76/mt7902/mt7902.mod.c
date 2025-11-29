#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};


MODULE_INFO(depends, "mt7902-common");

MODULE_ALIAS("pci:v000014C3d00007902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007902sv000014C3sd00007902bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007902sv000014C3sd00001EDEbc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007902sv00001A3Bsd00005520bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007902sv00001A3Bsd00005521bc*sc*i*");
MODULE_INFO(rhelversion, "10.99");
