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

// Function: entry_0017c610
// Address: 0x17c610 - 0x17c628
void entry_0017c610_0x17c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c610_0x17c610");
#endif

    ctx->pc = 0x17c610u;

    // 0x17c610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c614: 0x0  nop
    ctx->pc = 0x17c614u;
    // NOP
    // 0x17c618: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C618u;
    {
        const bool branch_taken_0x17c618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C618u;
        // 0x17c61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c618) {
            ctx->pc = 0x17C628u;
            return;
        }
    }
    ctx->pc = 0x17C620u;
    // 0x17c620: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x17C620u;
    {
        const bool branch_taken_0x17c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C620u;
        // 0x17c624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c620) {
            ctx->pc = 0x17C83Cu;
            return;
        }
    }
    ctx->pc = 0x17C628u;
}
