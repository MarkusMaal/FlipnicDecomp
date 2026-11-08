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

// Function: entry_001eff70
// Address: 0x1eff70 - 0x1eff8c
void entry_001eff70_0x1eff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eff70_0x1eff70");
#endif

    switch (ctx->pc) {
        case 0x1eff88u: goto label_1eff88;
        default: break;
    }

    ctx->pc = 0x1eff70u;

    // 0x1eff70: 0x2751024  and         $v0, $s3, $s5
    ctx->pc = 0x1eff70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x1eff74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFF74u;
    {
        const bool branch_taken_0x1eff74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF74u;
        // 0x1eff78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff74) {
            ctx->pc = 0x1EFF8Cu;
            return;
        }
    }
    ctx->pc = 0x1EFF7Cu;
    // 0x1eff7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1eff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff80: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EFF80u;
    SET_GPR_U32(ctx, 31, 0x1EFF88u);
    ctx->pc = 0x1EFF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF80u;
    // 0x1eff84: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EFF80u, 0x1EFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF88u;
label_1eff88:
    // 0x1eff88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1eff8cu;
}
