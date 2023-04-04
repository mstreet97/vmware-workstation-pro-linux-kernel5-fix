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
	{ 0xc83492ef, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc7e9d43a, "put_devmap_managed_page" },
	{ 0x53b954a2, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6a460dc5, "schedule_hrtimeout" },
	{ 0x17add64b, "gdt_page" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x54a24feb, "alloc_pages" },
	{ 0xddafdd31, "vm_node_stat" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf95e0fb3, "pv_ops" },
	{ 0xab6c9cdf, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6bf2d5e5, "kernel_read" },
	{ 0x2311bd53, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdad13544, "ptrs_per_p4d" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x52673010, "current_task" },
	{ 0xa5700515, "kthread_stop" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xa6c0bfdc, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x34b4b80b, "poll_freewait" },
	{ 0x24d273d1, "add_timer" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x89aad104, "fput" },
	{ 0xb109f1cc, "poll_initwait" },
	{ 0x800473f, "__cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x4531ab62, "copy_from_kernel_nofault" },
	{ 0x27e49661, "__free_pages" },
	{ 0xa0eae826, "smp_call_function" },
	{ 0xd6b33026, "cpu_khz" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x372f3c1d, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x8bd65ff4, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x148653, "vsnprintf" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd03eaf4c, "schedule_hrtimeout_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x1016f1ae, "smp_ops" },
	{ 0x94961283, "vunmap" },
	{ 0x72d79d83, "pgdir_shift" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xcf2a6966, "up" },
	{ 0xf8f4e6f1, "fget" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x95268167, "vmalloc_to_page" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83e6ac87, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x40eeee70, "__put_page" },
	{ 0xa303bd12, "get_user_pages_fast" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DC6400967FF085EE4C52280");
