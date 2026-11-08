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

// Function: entry_001c34f4
// Address: 0x1c34f4 - 0x1c3560
void entry_001c34f4_0x1c34f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c34f4_0x1c34f4");
#endif

    switch (ctx->pc) {
        case 0x1c3514u: goto label_1c3514;
        case 0x1c3530u: goto label_1c3530;
        case 0x1c3538u: goto label_1c3538;
        case 0x1c3548u: goto label_1c3548;
        case 0x1c3550u: goto label_1c3550;
        case 0x1c355cu: goto label_1c355c;
        default: break;
    }

    ctx->pc = 0x1c34f4u;

    // 0x1c34f4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c34f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c34f8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c34f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c34fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c34fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3500: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c3500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3504: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c3504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3508: 0x260a0070  addiu       $t2, $s0, 0x70
    ctx->pc = 0x1c3508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1c350c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C350Cu;
    SET_GPR_U32(ctx, 31, 0x1C3514u);
    ctx->pc = 0x1C3510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C350Cu;
    // 0x1c3510: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C350Cu, 0x1C3514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3514u;
label_1c3514:
    // 0x1c3514: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1c3514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c3518: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1c3518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1c351c: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C351Cu;
    {
        const bool branch_taken_0x1c351c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C351Cu;
        // 0x1c3520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c351c) {
            ctx->pc = 0x1C3560u;
            return;
        }
    }
    ctx->pc = 0x1C3524u;
    // 0x1c3524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3528: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3528u;
    SET_GPR_U32(ctx, 31, 0x1C3530u);
    ctx->pc = 0x1C352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3528u;
    // 0x1c352c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3528u, 0x1C3530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3530u;
label_1c3530:
    // 0x1c3530: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C3530u;
    SET_GPR_U32(ctx, 31, 0x1C3538u);
    ctx->pc = 0x1C3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3530u;
    // 0x1c3534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C3530u, 0x1C3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3538u;
label_1c3538:
    // 0x1c3538: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x1c3538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1c353c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3540: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3540u;
    SET_GPR_U32(ctx, 31, 0x1C3548u);
    ctx->pc = 0x1C3544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3540u;
    // 0x1c3544: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3540u, 0x1C3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3548u;
label_1c3548:
    // 0x1c3548: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C3548u;
    SET_GPR_U32(ctx, 31, 0x1C3550u);
    ctx->pc = 0x1C354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3548u;
    // 0x1c354c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C3548u, 0x1C3550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3550u;
label_1c3550:
    // 0x1c3550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3554: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C3554u;
    SET_GPR_U32(ctx, 31, 0x1C355Cu);
    ctx->pc = 0x1C3558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3554u;
    // 0x1c3558: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C3554u, 0x1C355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C355Cu;
label_1c355c:
    // 0x1c355c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c3560u;
}
