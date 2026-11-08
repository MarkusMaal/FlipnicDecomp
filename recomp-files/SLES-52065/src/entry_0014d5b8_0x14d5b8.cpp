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

// Function: entry_0014d5b8
// Address: 0x14d5b8 - 0x14d5e4
void entry_0014d5b8_0x14d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d5b8_0x14d5b8");
#endif

    switch (ctx->pc) {
        case 0x14d5ccu: goto label_14d5cc;
        case 0x14d5d8u: goto label_14d5d8;
        default: break;
    }

    ctx->pc = 0x14d5b8u;

label_14d5b8:
    // 0x14d5b8: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x14d5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x14d5bc: 0x26d6fff4  addiu       $s6, $s6, -0xC
    ctx->pc = 0x14d5bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967284));
    // 0x14d5c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14d5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5c4: 0xc0537c0  jal         func_14DF00
    ctx->pc = 0x14D5C4u;
    SET_GPR_U32(ctx, 31, 0x14D5CCu);
    ctx->pc = 0x14D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5C4u;
    // 0x14d5c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF00u, 0x14D5C4u, 0x14D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5CCu;
label_14d5cc:
    // 0x14d5cc: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x14d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x14d5d0: 0xc0534ec  jal         func_14D3B0
    ctx->pc = 0x14D5D0u;
    SET_GPR_U32(ctx, 31, 0x14D5D8u);
    ctx->pc = 0x14D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5D0u;
    // 0x14d5d4: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D3B0u, 0x14D5D0u, 0x14D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5D8u;
label_14d5d8:
    // 0x14d5d8: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x14d5d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14d5dc: 0x1420fff6  bnez        $at, . + 4 + (-0xA << 2)
    ctx->pc = 0x14D5DCu;
    {
        const bool branch_taken_0x14d5dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d5dc) {
            ctx->pc = 0x14D5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d5b8;
        }
    }
    ctx->pc = 0x14D5E4u;
}
