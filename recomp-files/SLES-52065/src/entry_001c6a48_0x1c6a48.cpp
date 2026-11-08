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

// Function: entry_001c6a48
// Address: 0x1c6a48 - 0x1c6a7c
void entry_001c6a48_0x1c6a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6a48_0x1c6a48");
#endif

    switch (ctx->pc) {
        case 0x1c6a50u: goto label_1c6a50;
        case 0x1c6a74u: goto label_1c6a74;
        default: break;
    }

    ctx->pc = 0x1c6a48u;

    // 0x1c6a48: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C6A48u;
    SET_GPR_U32(ctx, 31, 0x1C6A50u);
    ctx->pc = 0x1C6A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A48u;
    // 0x1c6a4c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C6A48u, 0x1C6A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A50u;
label_1c6a50:
    // 0x1c6a50: 0x1040034c  beqz        $v0, . + 4 + (0x34C << 2)
    ctx->pc = 0x1C6A50u;
    {
        const bool branch_taken_0x1c6a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A50u;
        // 0x1c6a54: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a50) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6A58u;
    // 0x1c6a58: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c6a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c6a5c: 0xa020f890  sb          $zero, -0x770($at)
    ctx->pc = 0x1c6a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294965392), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6a60: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c6a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c6a64: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6A64u;
    {
        const bool branch_taken_0x1c6a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A64u;
        // 0x1c6a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a64) {
            ctx->pc = 0x1C6A7Cu;
            return;
        }
    }
    ctx->pc = 0x1C6A6Cu;
    // 0x1c6a6c: 0xc071e44  jal         func_1C7910
    ctx->pc = 0x1C6A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A74u);
    ctx->pc = 0x1C6A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A6Cu;
    // 0x1c6a70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7910u, 0x1C6A6Cu, 0x1C6A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A74u;
label_1c6a74:
    // 0x1c6a74: 0x10000343  b           . + 4 + (0x343 << 2)
    ctx->pc = 0x1C6A74u;
    {
        const bool branch_taken_0x1c6a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a74) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6A7Cu;
}
