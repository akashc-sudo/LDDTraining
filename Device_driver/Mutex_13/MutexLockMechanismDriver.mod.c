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



static const char ____versions[]
__used __section("__versions") =
	"\x18\x00\x00\x00\x38\xf0\x13\x32"
	"mutex_unlock\0\0\0\0"
	"\x1c\x00\x00\x00\x6e\x64\xf7\xb3"
	"kthread_should_stop\0"
	"\x18\x00\x00\x00\x9f\x0c\xfb\xce"
	"__mutex_init\0\0\0\0"
	"\x1c\x00\x00\x00\x2b\x2f\xec\xe3"
	"alloc_chrdev_region\0"
	"\x14\x00\x00\x00\x24\x87\x65\x5c"
	"cdev_init\0\0\0"
	"\x14\x00\x00\x00\x95\x76\xdc\xa2"
	"cdev_add\0\0\0\0"
	"\x18\x00\x00\x00\x73\xe0\x38\x00"
	"class_create\0\0\0\0"
	"\x18\x00\x00\x00\xf9\x31\xa1\x23"
	"device_create\0\0\0"
	"\x20\x00\x00\x00\x2c\xe6\x42\x81"
	"kthread_create_on_node\0\0"
	"\x18\x00\x00\x00\x2c\xa2\xd5\x4d"
	"wake_up_process\0"
	"\x24\x00\x00\x00\x33\xb3\x91\x60"
	"unregister_chrdev_region\0\0\0\0"
	"\x18\x00\x00\x00\xe3\xe5\x01\x99"
	"class_destroy\0\0\0"
	"\x18\x00\x00\x00\xf2\x79\x84\x2f"
	"device_destroy\0\0"
	"\x18\x00\x00\x00\x3d\xd0\xd3\xc0"
	"kthread_stop\0\0\0\0"
	"\x14\x00\x00\x00\xb1\xd2\x8d\xd5"
	"cdev_del\0\0\0\0"
	"\x14\x00\x00\x00\xbb\x6d\xfb\xbd"
	"__fentry__\0\0"
	"\x10\x00\x00\x00\x7e\x3a\x2c\x12"
	"_printk\0"
	"\x1c\x00\x00\x00\xca\x39\x82\x5b"
	"__x86_return_thunk\0\0"
	"\x14\x00\x00\x00\x4b\x8d\xfa\x4d"
	"mutex_lock\0\0"
	"\x10\x00\x00\x00\xf9\x82\xa4\xf9"
	"msleep\0\0"
	"\x18\x00\x00\x00\x3a\x0a\xd8\xfc"
	"module_layout\0\0\0"
	"\x00\x00\x00\x00\x00\x00\x00\x00";

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "496CFCE52A3F6CA6E393EDC");
