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

// Function: entry_001c7e2c
// Address: 0x1c7e2c - 0x1c7ea0
void entry_001c7e2c_0x1c7e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7e2c_0x1c7e2c");
#endif

    switch (ctx->pc) {
        case 0x1c7e38u: goto label_1c7e38;
        case 0x1c7e48u: goto label_1c7e48;
        case 0x1c7e58u: goto label_1c7e58;
        case 0x1c7e60u: goto label_1c7e60;
        case 0x1c7e80u: goto label_1c7e80;
        case 0x1c7e88u: goto label_1c7e88;
        case 0x1c7e94u: goto label_1c7e94;
        default: break;
    }

    ctx->pc = 0x1c7e2cu;

label_1c7e2c:
    // 0x1c7e2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c7e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7e30: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7E30u;
    SET_GPR_U32(ctx, 31, 0x1C7E38u);
    ctx->pc = 0x1C7E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E30u;
    // 0x1c7e34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7E30u, 0x1C7E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E38u;
label_1c7e38:
    // 0x1c7e38: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c7e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c7e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e40: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C7E40u;
    SET_GPR_U32(ctx, 31, 0x1C7E48u);
    ctx->pc = 0x1C7E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E40u;
    // 0x1c7e44: 0x24a55a10  addiu       $a1, $a1, 0x5A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C7E40u, 0x1C7E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E48u;
label_1c7e48:
    // 0x1c7e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7e50: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7E50u;
    SET_GPR_U32(ctx, 31, 0x1C7E58u);
    ctx->pc = 0x1C7E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E50u;
    // 0x1c7e54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7E50u, 0x1C7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E58u;
label_1c7e58:
    // 0x1c7e58: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C7E58u;
    SET_GPR_U32(ctx, 31, 0x1C7E60u);
    ctx->pc = 0x1C7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E58u;
    // 0x1c7e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C7E58u, 0x1C7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E60u;
label_1c7e60:
    // 0x1c7e60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c7e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c7e64: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x1c7e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c7e68: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C7E68u;
    {
        const bool branch_taken_0x1c7e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E68u;
        // 0x1c7e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e68) {
            ctx->pc = 0x1C7E2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7e2c;
        }
    }
    ctx->pc = 0x1C7E70u;
    // 0x1c7e70: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1c7e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c7e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e78: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7E78u;
    SET_GPR_U32(ctx, 31, 0x1C7E80u);
    ctx->pc = 0x1C7E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E78u;
    // 0x1c7e7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7E78u, 0x1C7E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E80u;
label_1c7e80:
    // 0x1c7e80: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C7E80u;
    SET_GPR_U32(ctx, 31, 0x1C7E88u);
    ctx->pc = 0x1C7E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E80u;
    // 0x1c7e84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C7E80u, 0x1C7E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E88u;
label_1c7e88:
    // 0x1c7e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e8c: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C7E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C7E94u);
    ctx->pc = 0x1C7E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E8Cu;
    // 0x1c7e90: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C7E8Cu, 0x1C7E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E94u;
label_1c7e94:
    // 0x1c7e94: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x1c7e94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7e98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c7ea0u;
}
