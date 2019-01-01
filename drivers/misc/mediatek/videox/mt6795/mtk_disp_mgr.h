#ifndef __H_MTK_DISP_MGR__
#define __H_MTK_DISP_MGR__

long mtk_disp_mgr_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static void mtk_disp_rgb_work(struct work_struct *work);
#endif
