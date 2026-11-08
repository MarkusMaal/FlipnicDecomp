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

// Function: entry_0013ff38
// Address: 0x13ff38 - 0x13ff6c
void entry_0013ff38_0x13ff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ff38_0x13ff38");
#endif

    switch (ctx->pc) {
        case 0x13ff44u: goto label_13ff44;
        case 0x13ff64u: goto label_13ff64;
        default: break;
    }

    ctx->pc = 0x13ff38u;

    // 0x13ff38: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ff3c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13FF3Cu;
    SET_GPR_U32(ctx, 31, 0x13FF44u);
    ctx->pc = 0x13FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF3Cu;
    // 0x13ff40: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13FF3Cu, 0x13FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF44u;
label_13ff44:
    // 0x13ff44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13ff44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff48: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FF48u;
    {
        const bool branch_taken_0x13ff48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF48u;
        // 0x13ff4c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff48) {
            ctx->pc = 0x13FF6Cu;
            return;
        }
    }
    ctx->pc = 0x13FF50u;
    // 0x13ff50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13ff54: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13ff58: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13ff5c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13FF5Cu;
    SET_GPR_U32(ctx, 31, 0x13FF64u);
    ctx->pc = 0x13FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF5Cu;
    // 0x13ff60: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13FF5Cu, 0x13FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF64u;
label_13ff64:
    // 0x13ff64: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13FF64u;
    SET_GPR_U32(ctx, 31, 0x13FF6Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13FF64u, 0x13FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF6Cu;
}
