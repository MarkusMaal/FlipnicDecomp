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

// Function: entry_0011d6a0
// Address: 0x11d6a0 - 0x11d6e0
void entry_0011d6a0_0x11d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d6a0_0x11d6a0");
#endif

    switch (ctx->pc) {
        case 0x11d6b0u: goto label_11d6b0;
        case 0x11d6c8u: goto label_11d6c8;
        default: break;
    }

    ctx->pc = 0x11d6a0u;

    // 0x11d6a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6a8: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D6A8u;
    SET_GPR_U32(ctx, 31, 0x11D6B0u);
    ctx->pc = 0x11D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6A8u;
    // 0x11d6ac: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D6A8u, 0x11D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6B0u;
label_11d6b0:
    // 0x11d6b0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11d6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11d6b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11d6b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6c0: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D6C0u;
    SET_GPR_U32(ctx, 31, 0x11D6C8u);
    ctx->pc = 0x11D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6C0u;
    // 0x11d6c4: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D6C0u, 0x11D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6C8u;
label_11d6c8:
    // 0x11d6c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d6cc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D6CCu;
    {
        const bool branch_taken_0x11d6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6CCu;
        // 0x11d6d0: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6cc) {
            ctx->pc = 0x11D6E0u;
            return;
        }
    }
    ctx->pc = 0x11D6D4u;
    // 0x11d6d4: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x11d6d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d6d8: 0x1020006a  beqz        $at, . + 4 + (0x6A << 2)
    ctx->pc = 0x11D6D8u;
    {
        const bool branch_taken_0x11d6d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d6d8) {
            ctx->pc = 0x11D884u;
            return;
        }
    }
    ctx->pc = 0x11D6E0u;
}
