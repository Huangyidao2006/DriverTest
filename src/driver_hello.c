//
// Created by hj on 2022/1/19.
//

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/version.h>

static int hello_init(void) {
    printk(KERN_INFO "Namaskar: hello registered");

    return 0;
}

static void hello_exit(void) {
    printk(KERN_INFO "Alvida: hello unregistered");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("hj");
MODULE_DESCRIPTION("hello test");
