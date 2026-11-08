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

// Function: entry_001c6c30
// Address: 0x1c6c30 - 0x1c6c9c
void entry_001c6c30_0x1c6c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6c30_0x1c6c30");
#endif

    switch (ctx->pc) {
        case 0x1c6c50u: goto label_1c6c50;
        case 0x1c6c6cu: goto label_1c6c6c;
        case 0x1c6c74u: goto label_1c6c74;
        case 0x1c6c84u: goto label_1c6c84;
        case 0x1c6c8cu: goto label_1c6c8c;
        case 0x1c6c98u: goto label_1c6c98;
        default: break;
    }

    ctx->pc = 0x1c6c30u;

    // 0x1c6c30: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c6c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c6c34: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c6c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c6c38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c6c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c6c40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c44: 0x260a0064  addiu       $t2, $s0, 0x64
    ctx->pc = 0x1c6c44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x1c6c48: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C6C48u;
    SET_GPR_U32(ctx, 31, 0x1C6C50u);
    ctx->pc = 0x1C6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C48u;
    // 0x1c6c4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C6C48u, 0x1C6C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C50u;
label_1c6c50:
    // 0x1c6c50: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1c6c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c6c54: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c6c58: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6C58u;
    {
        const bool branch_taken_0x1c6c58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C58u;
        // 0x1c6c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c58) {
            ctx->pc = 0x1C6C9Cu;
            return;
        }
    }
    ctx->pc = 0x1C6C60u;
    // 0x1c6c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c64: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C6C64u;
    SET_GPR_U32(ctx, 31, 0x1C6C6Cu);
    ctx->pc = 0x1C6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C64u;
    // 0x1c6c68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C6C64u, 0x1C6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C6Cu;
label_1c6c6c:
    // 0x1c6c6c: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C6C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C74u);
    ctx->pc = 0x1C6C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C6Cu;
    // 0x1c6c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C6C6Cu, 0x1C6C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C74u;
label_1c6c74:
    // 0x1c6c74: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c6c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c6c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c7c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C6C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C84u);
    ctx->pc = 0x1C6C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C7Cu;
    // 0x1c6c80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C6C7Cu, 0x1C6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C84u;
label_1c6c84:
    // 0x1c6c84: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C6C84u;
    SET_GPR_U32(ctx, 31, 0x1C6C8Cu);
    ctx->pc = 0x1C6C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C84u;
    // 0x1c6c88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C6C84u, 0x1C6C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C8Cu;
label_1c6c8c:
    // 0x1c6c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c90: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C6C90u;
    SET_GPR_U32(ctx, 31, 0x1C6C98u);
    ctx->pc = 0x1C6C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C90u;
    // 0x1c6c94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C6C90u, 0x1C6C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C98u;
label_1c6c98:
    // 0x1c6c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c6c9cu;
}
