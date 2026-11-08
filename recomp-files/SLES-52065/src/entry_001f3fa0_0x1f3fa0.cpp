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

// Function: entry_001f3fa0
// Address: 0x1f3fa0 - 0x1f3fc8
void entry_001f3fa0_0x1f3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3fa0_0x1f3fa0");
#endif

    switch (ctx->pc) {
        case 0x1f3fbcu: goto label_1f3fbc;
        default: break;
    }

    ctx->pc = 0x1f3fa0u;

label_1f3fa0:
    // 0x1f3fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fa4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f3fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f3facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f3fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fb4: 0xc07cf44  jal         func_1F3D10
    ctx->pc = 0x1F3FB4u;
    SET_GPR_U32(ctx, 31, 0x1F3FBCu);
    ctx->pc = 0x1F3FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FB4u;
    // 0x1f3fb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3D10u, 0x1F3FB4u, 0x1F3FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FBCu;
label_1f3fbc:
    // 0x1f3fbc: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1f3fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1f3fc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F3FC0u;
    {
        const bool branch_taken_0x1f3fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FC0u;
        // 0x1f3fc4: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3fc0) {
            ctx->pc = 0x1F3FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3fa0;
        }
    }
    ctx->pc = 0x1F3FC8u;
}
