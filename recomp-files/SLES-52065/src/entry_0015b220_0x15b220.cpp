#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0015b220
// Address: 0x15b220 - 0x15b2b4
void entry_0015b220_0x15b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b220_0x15b220");
#endif

    ctx->pc = 0x15b220u;

    // 0x15b220: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x15b220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15b224: 0x0  nop
    ctx->pc = 0x15b224u;
    // NOP
    // 0x15b228: 0x46073036  c.le.s      $f6, $f7
    ctx->pc = 0x15b228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b22c: 0x0  nop
    ctx->pc = 0x15b22cu;
    // NOP
    // 0x15b230: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x15B230u;
    {
        const bool branch_taken_0x15b230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B230u;
        // 0x15b234: 0x46025181  sub.s       $f6, $f10, $f2 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b230) {
            ctx->pc = 0x15B2B8u;
            return;
        }
    }
    ctx->pc = 0x15B238u;
    // 0x15b238: 0x46035181  sub.s       $f6, $f10, $f3
    ctx->pc = 0x15b238u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x15b23c: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x15b23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b240: 0x0  nop
    ctx->pc = 0x15b240u;
    // NOP
    // 0x15b244: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x15B244u;
    {
        const bool branch_taken_0x15b244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b244) {
            ctx->pc = 0x15B2B4u;
            return;
        }
    }
    ctx->pc = 0x15B24Cu;
    // 0x15b24c: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x15b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15b250: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15b250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15b254: 0xc4a70308  lwc1        $f7, 0x308($a1)
    ctx->pc = 0x15b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b258: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x15b258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15b25c: 0x46081a01  sub.s       $f8, $f3, $f8
    ctx->pc = 0x15b25cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x15b260: 0x46074203  div.s       $f8, $f8, $f7
    ctx->pc = 0x15b260u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[8], ctx->f[7]); }
    // 0x15b264: 0x0  nop
    ctx->pc = 0x15b264u;
    // NOP
    // 0x15b268: 0x0  nop
    ctx->pc = 0x15b268u;
    // NOP
    // 0x15b26c: 0x46064034  c.lt.s      $f8, $f6
    ctx->pc = 0x15b26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b270: 0x0  nop
    ctx->pc = 0x15b270u;
    // NOP
    // 0x15b274: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x15B274u;
    {
        const bool branch_taken_0x15b274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b274) {
            ctx->pc = 0x15B2B4u;
            return;
        }
    }
    ctx->pc = 0x15B27Cu;
    // 0x15b27c: 0xc4a70300  lwc1        $f7, 0x300($a1)
    ctx->pc = 0x15b27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b280: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x15b280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15b284: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x15b284u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x15b288: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x15b288u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x15b28c: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x15b28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b290: 0x0  nop
    ctx->pc = 0x15b290u;
    // NOP
    // 0x15b294: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15B294u;
    {
        const bool branch_taken_0x15b294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b294) {
            ctx->pc = 0x15B2B4u;
            return;
        }
    }
    ctx->pc = 0x15B29Cu;
    // 0x15b29c: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x15b29cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b2a0: 0x0  nop
    ctx->pc = 0x15b2a0u;
    // NOP
    // 0x15b2a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15B2A4u;
    {
        const bool branch_taken_0x15b2a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b2a4) {
            ctx->pc = 0x15B2B4u;
            return;
        }
    }
    ctx->pc = 0x15B2ACu;
    // 0x15b2ac: 0xe4a802e8  swc1        $f8, 0x2E8($a1)
    ctx->pc = 0x15b2acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
    // 0x15b2b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x15b2b4u;
}
