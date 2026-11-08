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

// Function: entry_00153374
// Address: 0x153374 - 0x15338c
void entry_00153374_0x153374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153374_0x153374");
#endif

    ctx->pc = 0x153374u;

    // 0x153374: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x153374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153378: 0x0  nop
    ctx->pc = 0x153378u;
    // NOP
    // 0x15337c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15337Cu;
    {
        const bool branch_taken_0x15337c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15337c) {
            ctx->pc = 0x15338Cu;
            return;
        }
    }
    ctx->pc = 0x153384u;
    // 0x153384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x153384u;
    {
        const bool branch_taken_0x153384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153384u;
        // 0x153388: 0x460d6000  add.s       $f0, $f12, $f13 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153384) {
            ctx->pc = 0x153394u;
            return;
        }
    }
    ctx->pc = 0x15338Cu;
}
