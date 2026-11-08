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

// Function: entry_0013d460
// Address: 0x13d460 - 0x13d47c
void entry_0013d460_0x13d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d460_0x13d460");
#endif

    switch (ctx->pc) {
        case 0x13d46cu: goto label_13d46c;
        default: break;
    }

    ctx->pc = 0x13d460u;

    // 0x13d460: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x13d460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x13d464: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x13D464u;
    SET_GPR_U32(ctx, 31, 0x13D46Cu);
    ctx->pc = 0x13D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D464u;
    // 0x13d468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x13D464u, 0x13D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D46Cu;
label_13d46c:
    // 0x13d46c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D46Cu;
    {
        const bool branch_taken_0x13d46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D46Cu;
        // 0x13d470: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d46c) {
            ctx->pc = 0x13D47Cu;
            return;
        }
    }
    ctx->pc = 0x13D474u;
    // 0x13d474: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x13D474u;
    {
        const bool branch_taken_0x13d474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D474u;
        // 0x13d478: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d474) {
            ctx->pc = 0x13D514u;
            return;
        }
    }
    ctx->pc = 0x13D47Cu;
}
