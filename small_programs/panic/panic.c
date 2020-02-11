#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tomasz Bucior");
MODULE_DESCRIPTION("Kernel panic module");
MODULE_VERSION("0.01");

static int __init panic_init(void) {
 printk(KERN_INFO "Hello, World!\n");
 panic("panic has been called");
 return 0;
}

static void __exit panic_exit(void) {
 printk(KERN_INFO "Goodbye, World!\n");
}

module_init(panic_init);
module_exit(panic_exit);
