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

// Function: entry_0013c700
// Address: 0x13c700 - 0x13c73c
void entry_0013c700_0x13c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c700_0x13c700");
#endif

    switch (ctx->pc) {
        case 0x13c71cu: goto label_13c71c;
        default: break;
    }

    ctx->pc = 0x13c700u;

    // 0x13c700: 0x92630188  lbu         $v1, 0x188($s3)
    ctx->pc = 0x13c700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 392)));
    // 0x13c704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c708: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13C708u;
    {
        const bool branch_taken_0x13c708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13c708) {
            ctx->pc = 0x13C73Cu;
            return;
        }
    }
    ctx->pc = 0x13C710u;
    // 0x13c710: 0x8e74011c  lw          $s4, 0x11C($s3)
    ctx->pc = 0x13c710u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x13c714: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x13C714u;
    SET_GPR_U32(ctx, 31, 0x13C71Cu);
    ctx->pc = 0x13C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C714u;
    // 0x13c718: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x13C714u, 0x13C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C71Cu;
label_13c71c:
    // 0x13c71c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13c720: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13c720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13c728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c72c: 0x27a70178  addiu       $a3, $sp, 0x178
    ctx->pc = 0x13c72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x13c730: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13c730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13c734: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x13C734u;
    SET_GPR_U32(ctx, 31, 0x13C73Cu);
    ctx->pc = 0x13C738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C734u;
    // 0x13c738: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x13C734u, 0x13C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C73Cu;
}
