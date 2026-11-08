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

// Function: entry_00148630
// Address: 0x148630 - 0x148654
void entry_00148630_0x148630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148630_0x148630");
#endif

    ctx->pc = 0x148630u;

    // 0x148630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148634: 0x0  nop
    ctx->pc = 0x148634u;
    // NOP
    // 0x148638: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x148638u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14863c: 0x0  nop
    ctx->pc = 0x14863cu;
    // NOP
    // 0x148640: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x148640u;
    {
        const bool branch_taken_0x148640 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148640u;
        // 0x148644: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148640) {
            ctx->pc = 0x148654u;
            return;
        }
    }
    ctx->pc = 0x148648u;
    // 0x148648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x148648u;
    {
        const bool branch_taken_0x148648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148648u;
        // 0x14864c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148648) {
            ctx->pc = 0x148654u;
            return;
        }
    }
    ctx->pc = 0x148650u;
    // 0x148650: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x148650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x148654u;
}
