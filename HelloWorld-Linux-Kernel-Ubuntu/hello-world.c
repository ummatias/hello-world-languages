#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ricardo");
MODULE_DESCRIPTION("Sample of hello world module");
MODULE_VERSION("0.01");

static int __init hello_mod_init(void)
{
        printk(KERN_ALERT "Hello world!! \n");
        return 0;
}

static void __exit hello_mod_exit(void)
{
        printk(KERN_ALERT "Exiting module from kernel...\n");
}

module_init(hello_mod_init);
module_exit(hello_mod_exit);