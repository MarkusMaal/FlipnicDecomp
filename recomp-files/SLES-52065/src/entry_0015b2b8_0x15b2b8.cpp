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

// Function: entry_0015b2b8
// Address: 0x15b2b8 - 0x15b34c
void entry_0015b2b8_0x15b2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b2b8_0x15b2b8");
#endif

    ctx->pc = 0x15b2b8u;

    // 0x15b2b8: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x15b2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15b2bc: 0x0  nop
    ctx->pc = 0x15b2bcu;
    // NOP
    // 0x15b2c0: 0x46073034  c.lt.s      $f6, $f7
    ctx->pc = 0x15b2c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b2c4: 0x0  nop
    ctx->pc = 0x15b2c4u;
    // NOP
    // 0x15b2c8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x15B2C8u;
    {
        const bool branch_taken_0x15b2c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2C8u;
        // 0x15b2cc: 0x46012181  sub.s       $f6, $f4, $f1 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2c8) {
            ctx->pc = 0x15B350u;
            return;
        }
    }
    ctx->pc = 0x15B2D0u;
    // 0x15b2d0: 0x46024981  sub.s       $f6, $f9, $f2
    ctx->pc = 0x15b2d0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x15b2d4: 0x46063836  c.le.s      $f7, $f6
    ctx->pc = 0x15b2d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b2d8: 0x0  nop
    ctx->pc = 0x15b2d8u;
    // NOP
    // 0x15b2dc: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x15B2DCu;
    {
        const bool branch_taken_0x15b2dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b2dc) {
            ctx->pc = 0x15B34Cu;
            return;
        }
    }
    ctx->pc = 0x15B2E4u;
    // 0x15b2e4: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x15b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15b2e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15b2ec: 0xc4a70308  lwc1        $f7, 0x308($a1)
    ctx->pc = 0x15b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b2f0: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x15b2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15b2f4: 0x46081201  sub.s       $f8, $f2, $f8
    ctx->pc = 0x15b2f4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x15b2f8: 0x46074203  div.s       $f8, $f8, $f7
    ctx->pc = 0x15b2f8u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[8], ctx->f[7]); }
    // 0x15b2fc: 0x0  nop
    ctx->pc = 0x15b2fcu;
    // NOP
    // 0x15b300: 0x0  nop
    ctx->pc = 0x15b300u;
    // NOP
    // 0x15b304: 0x46064034  c.lt.s      $f8, $f6
    ctx->pc = 0x15b304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b308: 0x0  nop
    ctx->pc = 0x15b308u;
    // NOP
    // 0x15b30c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x15B30Cu;
    {
        const bool branch_taken_0x15b30c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b30c) {
            ctx->pc = 0x15B34Cu;
            return;
        }
    }
    ctx->pc = 0x15B314u;
    // 0x15b314: 0xc4a70300  lwc1        $f7, 0x300($a1)
    ctx->pc = 0x15b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b318: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x15b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15b31c: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x15b31cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x15b320: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x15b320u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x15b324: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x15b324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b328: 0x0  nop
    ctx->pc = 0x15b328u;
    // NOP
    // 0x15b32c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15B32Cu;
    {
        const bool branch_taken_0x15b32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b32c) {
            ctx->pc = 0x15B34Cu;
            return;
        }
    }
    ctx->pc = 0x15B334u;
    // 0x15b334: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x15b334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b338: 0x0  nop
    ctx->pc = 0x15b338u;
    // NOP
    // 0x15b33c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15B33Cu;
    {
        const bool branch_taken_0x15b33c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b33c) {
            ctx->pc = 0x15B34Cu;
            return;
        }
    }
    ctx->pc = 0x15B344u;
    // 0x15b344: 0xe4a802e8  swc1        $f8, 0x2E8($a1)
    ctx->pc = 0x15b344u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
    // 0x15b348: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x15b34cu;
}
