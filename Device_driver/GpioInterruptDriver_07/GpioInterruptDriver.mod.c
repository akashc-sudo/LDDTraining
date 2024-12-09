#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfe990052, "gpio_free" },
	{ 0xa4e5832c, "class_destroy" },
	{ 0xb86bb5ac, "device_destroy" },
	{ 0xa4afd25e, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb0d2a97, "gpio_to_desc" },
	{ 0x3524cbe9, "gpiod_set_raw_value" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe78e8907, "cdev_init" },
	{ 0x39f012c6, "cdev_add" },
	{ 0x3fa498ad, "class_create" },
	{ 0xfbe72bcf, "device_create" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xcee724e1, "gpiod_direction_input" },
	{ 0xb161b235, "gpiod_direction_output_raw" },
	{ 0x2fb63741, "gpiod_to_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x67a35d9, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4574E3E72081158DF24696A");
