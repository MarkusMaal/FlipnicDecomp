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

// Function: entry_001f7140
// Address: 0x1f7140 - 0x1f7194
void entry_001f7140_0x1f7140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7140_0x1f7140");
#endif

    switch (ctx->pc) {
        case 0x1f7148u: goto label_1f7148;
        case 0x1f7154u: goto label_1f7154;
        case 0x1f7160u: goto label_1f7160;
        case 0x1f7168u: goto label_1f7168;
        case 0x1f7170u: goto label_1f7170;
        case 0x1f7180u: goto label_1f7180;
        default: break;
    }

    ctx->pc = 0x1f7140u;

    // 0x1f7140: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F7140u;
    SET_GPR_U32(ctx, 31, 0x1F7148u);
    ctx->pc = 0x1F7144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7140u;
    // 0x1f7144: 0x8c44bb28  lw          $a0, -0x44D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F7140u, 0x1F7148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7148u;
label_1f7148:
    // 0x1f7148: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f7148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f714c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F714Cu;
    SET_GPR_U32(ctx, 31, 0x1F7154u);
    ctx->pc = 0x1F7150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F714Cu;
    // 0x1f7150: 0x8c64bb2c  lw          $a0, -0x44D4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F714Cu, 0x1F7154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7154u;
label_1f7154:
    // 0x1f7154: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f7154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f7158: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F7158u;
    SET_GPR_U32(ctx, 31, 0x1F7160u);
    ctx->pc = 0x1F715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7158u;
    // 0x1f715c: 0x8c64bb30  lw          $a0, -0x44D0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F7158u, 0x1F7160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7160u;
label_1f7160:
    // 0x1f7160: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F7160u;
    SET_GPR_U32(ctx, 31, 0x1F7168u);
    ctx->pc = 0x1F7164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7160u;
    // 0x1f7164: 0x8e04bb20  lw          $a0, -0x44E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F7160u, 0x1F7168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7168u;
label_1f7168:
    // 0x1f7168: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1F7168u;
    SET_GPR_U32(ctx, 31, 0x1F7170u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1F7168u, 0x1F7170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7170u;
label_1f7170:
    // 0x1f7170: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1f7170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7178: 0xc07b6ac  jal         func_1EDAB0
    ctx->pc = 0x1F7178u;
    SET_GPR_U32(ctx, 31, 0x1F7180u);
    ctx->pc = 0x1F717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7178u;
    // 0x1f717c: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDAB0u, 0x1F7178u, 0x1F7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7180u;
label_1f7180:
    // 0x1f7180: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7180u;
    {
        const bool branch_taken_0x1f7180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7180u;
        // 0x1f7184: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7180) {
            ctx->pc = 0x1F7194u;
            return;
        }
    }
    ctx->pc = 0x1F7188u;
    // 0x1f7188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f718c: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1F718Cu;
    ctx->pc = 0x1F7190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F718Cu;
    // 0x1f7190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1F7194u;
}
