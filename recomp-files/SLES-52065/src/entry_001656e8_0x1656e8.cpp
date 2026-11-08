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

// Function: entry_001656e8
// Address: 0x1656e8 - 0x165700
void entry_001656e8_0x1656e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001656e8_0x1656e8");
#endif

    ctx->pc = 0x1656e8u;

    // 0x1656e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1656e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1656ec: 0x0  nop
    ctx->pc = 0x1656ecu;
    // NOP
    // 0x1656f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1656F0u;
    {
        const bool branch_taken_0x1656f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1656f0) {
            ctx->pc = 0x165700u;
            return;
        }
    }
    ctx->pc = 0x1656F8u;
    // 0x1656f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1656F8u;
    {
        const bool branch_taken_0x1656f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656F8u;
        // 0x1656fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656f8) {
            ctx->pc = 0x165704u;
            return;
        }
    }
    ctx->pc = 0x165700u;
}
