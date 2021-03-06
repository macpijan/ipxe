#ifndef CONFIG_DEFAULTS_EFI_H
#define CONFIG_DEFAULTS_EFI_H

/** @file
 *
 * Configuration defaults for EFI
 *
 */

FILE_LICENCE ( GPL2_OR_LATER_OR_UBDL );

#define UACCESS_EFI
#define IOAPI_X86
#define IOMAP_VIRT
#define PCIAPI_EFI
#define CONSOLE_EFI
#define TIMER_EFI
#define NAP_EFIX86
#define UMALLOC_EFI
#define SMBIOS_EFI
#define SANBOOT_NULL
#define BOFM_EFI
#define ENTROPY_EFI
#define TIME_EFI
#define REBOOT_EFI

#define DOWNLOAD_PROTO_FILE	/* Local filesystem access */

#define	IMAGE_EFI		/* EFI image support */
#define	IMAGE_SCRIPT		/* iPXE script image support */

#define	USB_HCD_XHCI		/* xHCI USB host controller */
#define	USB_HCD_EHCI		/* EHCI USB host controller */
#define	USB_HCD_UHCI		/* UHCI USB host controller */
#define	USB_EFI			/* Provide EFI_USB_IO_PROTOCOL interface */

#define	REBOOT_CMD		/* Reboot command */
#define	CPUID_CMD		/* x86 CPU feature detection command */

#endif /* CONFIG_DEFAULTS_EFI_H */
