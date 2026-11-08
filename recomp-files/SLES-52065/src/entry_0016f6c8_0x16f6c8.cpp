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

// Function: entry_0016f6c8
// Address: 0x16f6c8 - 0x16f6ec
void entry_0016f6c8_0x16f6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f6c8_0x16f6c8");
#endif

    ctx->pc = 0x16f6c8u;

    // 0x16f6c8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x16f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16f6cc: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x16f6ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x16f6d0: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x16f6d0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x16f6d4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16f6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f6d8: 0x0  nop
    ctx->pc = 0x16f6d8u;
    // NOP
    // 0x16f6dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F6DCu;
    {
        const bool branch_taken_0x16f6dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6DCu;
        // 0x16f6e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6dc) {
            ctx->pc = 0x16F6ECu;
            return;
        }
    }
    ctx->pc = 0x16F6E4u;
    // 0x16f6e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F6E4u;
    {
        const bool branch_taken_0x16f6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f6e4) {
            ctx->pc = 0x16F6F4u;
            return;
        }
    }
    ctx->pc = 0x16F6ECu;
}
