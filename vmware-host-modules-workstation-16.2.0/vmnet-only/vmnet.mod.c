#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

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
	{ 0xcb440b5e, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xc83492ef, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5cd09b97, "sock_init_data" },
	{ 0xc7e9d43a, "put_devmap_managed_page" },
	{ 0xffb17667, "__skb_gso_segment" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x13e1519a, "proc_create_single_data" },
	{ 0x291ee747, "csum_and_copy_to_user" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc9ef0765, "skb_clone" },
	{ 0x18edf861, "skb_copy" },
	{ 0xe7a4bdfe, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa5976e4f, "dev_base_lock" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb9b2940c, "__register_chrdev" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x10a0cf37, "skb_set_owner_w" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf95e0fb3, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x27407de3, "proc_remove" },
	{ 0x727db97, "__netdev_alloc_skb" },
	{ 0xa17e177a, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xbea3371b, "netif_rx_ni" },
	{ 0xf5354c67, "proc_mkdir" },
	{ 0x9551f977, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x52673010, "current_task" },
	{ 0xb7e6521d, "skb_copy_datagram_iter" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa715db6d, "free_netdev" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x6c0888f4, "register_netdev" },
	{ 0xce053976, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf835ddde, "sk_free" },
	{ 0x5c2a1caa, "dev_remove_pack" },
	{ 0x6e06a909, "init_net" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x800473f, "__cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x46c76d87, "kfree_skb" },
	{ 0x92997ed8, "_printk" },
	{ 0x79c166a8, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0f074b8, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3d299b48, "ether_setup" },
	{ 0x937145e1, "__dev_get_by_name" },
	{ 0x8bd65ff4, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x148653, "vsnprintf" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf302cbaa, "iov_iter_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2f69722, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5c6c6cdc, "skb_dequeue" },
	{ 0x9a1f7f85, "unregister_netdev" },
	{ 0xe42fe985, "dev_add_pack" },
	{ 0xbf5edb26, "consume_skb" },
	{ 0xd8e25adf, "dev_queue_xmit" },
	{ 0x4a468d36, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe72130a7, "param_ops_uint" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x40eeee70, "__put_page" },
	{ 0xa303bd12, "get_user_pages_fast" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2F1A0B0FDD704497E992861");
