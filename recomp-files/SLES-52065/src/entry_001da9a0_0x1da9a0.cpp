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

// Function: entry_001da9a0
// Address: 0x1da9a0 - 0x1da9c8
void entry_001da9a0_0x1da9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da9a0_0x1da9a0");
#endif

    switch (ctx->pc) {
        case 0x1da9a8u: goto label_1da9a8;
        default: break;
    }

    ctx->pc = 0x1da9a0u;

    // 0x1da9a0: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DA9A0u;
    SET_GPR_U32(ctx, 31, 0x1DA9A8u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DA9A0u, 0x1DA9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9A8u;
label_1da9a8:
    // 0x1da9a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1da9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9ac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1da9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1da9b0: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1da9b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1da9b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DA9B4u;
    {
        const bool branch_taken_0x1da9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9B4u;
        // 0x1da9b8: 0x200c82d  daddu       $t9, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9b4) {
            ctx->pc = 0x1DAA04u;
            return;
        }
    }
    ctx->pc = 0x1DA9BCu;
    // 0x1da9bc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1da9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1da9c0: 0x24487330  addiu       $t0, $v0, 0x7330
    ctx->pc = 0x1da9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1da9c4: 0x25180004  addiu       $t8, $t0, 0x4
    ctx->pc = 0x1da9c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    ctx->pc = 0x1da9c8u;
}
