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

// Function: entry_0014d2e0
// Address: 0x14d2e0 - 0x14d308
void entry_0014d2e0_0x14d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d2e0_0x14d2e0");
#endif

    switch (ctx->pc) {
        case 0x14d2ecu: goto label_14d2ec;
        case 0x14d2f8u: goto label_14d2f8;
        default: break;
    }

    ctx->pc = 0x14d2e0u;

label_14d2e0:
    // 0x14d2e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2e4: 0xc0537c0  jal         func_14DF00
    ctx->pc = 0x14D2E4u;
    SET_GPR_U32(ctx, 31, 0x14D2ECu);
    ctx->pc = 0x14D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2E4u;
    // 0x14d2e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF00u, 0x14D2E4u, 0x14D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2ECu;
label_14d2ec:
    // 0x14d2ec: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x14d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x14d2f0: 0xc0534ec  jal         func_14D3B0
    ctx->pc = 0x14D2F0u;
    SET_GPR_U32(ctx, 31, 0x14D2F8u);
    ctx->pc = 0x14D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2F0u;
    // 0x14d2f4: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D3B0u, 0x14D2F0u, 0x14D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2F8u;
label_14d2f8:
    // 0x14d2f8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14d2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14d2fc: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x14d2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d300: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14D300u;
    {
        const bool branch_taken_0x14d300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D300u;
        // 0x14d304: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d300) {
            ctx->pc = 0x14D2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d2e0;
        }
    }
    ctx->pc = 0x14D308u;
}
