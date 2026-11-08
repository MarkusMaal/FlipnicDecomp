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

// Function: entry_0016ac08
// Address: 0x16ac08 - 0x16ac20
void entry_0016ac08_0x16ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ac08_0x16ac08");
#endif

    switch (ctx->pc) {
        case 0x16ac18u: goto label_16ac18;
        default: break;
    }

    ctx->pc = 0x16ac08u;

    // 0x16ac08: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AC08u;
    {
        const bool branch_taken_0x16ac08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x16AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC08u;
        // 0x16ac0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac08) {
            ctx->pc = 0x16AC20u;
            return;
        }
    }
    ctx->pc = 0x16AC10u;
    // 0x16ac10: 0xc055c40  jal         func_157100
    ctx->pc = 0x16AC10u;
    SET_GPR_U32(ctx, 31, 0x16AC18u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16AC10u, 0x16AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC18u;
label_16ac18:
    // 0x16ac18: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x16AC18u;
    {
        const bool branch_taken_0x16ac18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC18u;
        // 0x16ac1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac18) {
            ctx->pc = 0x16AEB8u;
            return;
        }
    }
    ctx->pc = 0x16AC20u;
}
