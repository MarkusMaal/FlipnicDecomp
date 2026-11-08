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

// Function: entry_0011ae98
// Address: 0x11ae98 - 0x11aed8
void entry_0011ae98_0x11ae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ae98_0x11ae98");
#endif

    switch (ctx->pc) {
        case 0x11aea8u: goto label_11aea8;
        case 0x11aec0u: goto label_11aec0;
        default: break;
    }

    ctx->pc = 0x11ae98u;

    // 0x11ae98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11ae9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aea0: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11AEA0u;
    SET_GPR_U32(ctx, 31, 0x11AEA8u);
    ctx->pc = 0x11AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AEA0u;
    // 0x11aea4: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11AEA0u, 0x11AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEA8u;
label_11aea8:
    // 0x11aea8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11aea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11aeac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11aeacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aeb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11aeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aeb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11aeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aeb8: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11AEB8u;
    SET_GPR_U32(ctx, 31, 0x11AEC0u);
    ctx->pc = 0x11AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AEB8u;
    // 0x11aebc: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11AEB8u, 0x11AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEC0u;
label_11aec0:
    // 0x11aec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aec4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AEC4u;
    {
        const bool branch_taken_0x11aec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEC4u;
        // 0x11aec8: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aec4) {
            ctx->pc = 0x11AED8u;
            return;
        }
    }
    ctx->pc = 0x11AECCu;
    // 0x11aecc: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x11aeccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11aed0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x11AED0u;
    {
        const bool branch_taken_0x11aed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11aed0) {
            ctx->pc = 0x11AF40u;
            return;
        }
    }
    ctx->pc = 0x11AED8u;
}
