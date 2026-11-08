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

// Function: entry_0011b088
// Address: 0x11b088 - 0x11b0c4
void entry_0011b088_0x11b088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b088_0x11b088");
#endif

    switch (ctx->pc) {
        case 0x11b098u: goto label_11b098;
        case 0x11b0b0u: goto label_11b0b0;
        default: break;
    }

    ctx->pc = 0x11b088u;

    // 0x11b088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b08c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b090: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11B090u;
    SET_GPR_U32(ctx, 31, 0x11B098u);
    ctx->pc = 0x11B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B090u;
    // 0x11b094: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11B090u, 0x11B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B098u;
label_11b098:
    // 0x11b098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b09c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11b09cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11b0a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0a8: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11B0A8u;
    SET_GPR_U32(ctx, 31, 0x11B0B0u);
    ctx->pc = 0x11B0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0A8u;
    // 0x11b0ac: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11B0A8u, 0x11B0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0B0u;
label_11b0b0:
    // 0x11b0b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b0b4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B0B4u;
    {
        const bool branch_taken_0x11b0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0B4u;
        // 0x11b0b8: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0b4) {
            ctx->pc = 0x11B0C4u;
            return;
        }
    }
    ctx->pc = 0x11B0BCu;
    // 0x11b0bc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x11B0BCu;
    {
        const bool branch_taken_0x11b0bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b0bc) {
            ctx->pc = 0x11B100u;
            return;
        }
    }
    ctx->pc = 0x11B0C4u;
}
