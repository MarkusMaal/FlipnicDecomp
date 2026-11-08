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

// Function: entry_001b5b30
// Address: 0x1b5b30 - 0x1b5b8c
void entry_001b5b30_0x1b5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5b30_0x1b5b30");
#endif

    switch (ctx->pc) {
        case 0x1b5b38u: goto label_1b5b38;
        case 0x1b5b60u: goto label_1b5b60;
        case 0x1b5b6cu: goto label_1b5b6c;
        case 0x1b5b78u: goto label_1b5b78;
        case 0x1b5b84u: goto label_1b5b84;
        default: break;
    }

    ctx->pc = 0x1b5b30u;

label_1b5b30:
    // 0x1b5b30: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5B30u;
    SET_GPR_U32(ctx, 31, 0x1B5B38u);
    ctx->pc = 0x1B5B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B30u;
    // 0x1b5b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5B30u, 0x1B5B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B38u;
label_1b5b38:
    // 0x1b5b38: 0x0  nop
    ctx->pc = 0x1b5b38u;
    // NOP
    // 0x1b5b3c: 0x0  nop
    ctx->pc = 0x1b5b3cu;
    // NOP
    // 0x1b5b40: 0x0  nop
    ctx->pc = 0x1b5b40u;
    // NOP
    // 0x1b5b44: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5B44u;
    {
        const bool branch_taken_0x1b5b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b44) {
            ctx->pc = 0x1B5B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5b30;
        }
    }
    ctx->pc = 0x1B5B4Cu;
    // 0x1b5b4c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5b50: 0x27a400f4  addiu       $a0, $sp, 0xF4
    ctx->pc = 0x1b5b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1b5b54: 0x24a50e38  addiu       $a1, $a1, 0xE38
    ctx->pc = 0x1b5b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3640));
    // 0x1b5b58: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5B58u;
    SET_GPR_U32(ctx, 31, 0x1B5B60u);
    ctx->pc = 0x1B5B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B58u;
    // 0x1b5b5c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5B58u, 0x1B5B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B60u;
label_1b5b60:
    // 0x1b5b60: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5b64: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5B64u;
    SET_GPR_U32(ctx, 31, 0x1B5B6Cu);
    ctx->pc = 0x1B5B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B64u;
    // 0x1b5b68: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5B64u, 0x1B5B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B6Cu;
label_1b5b6c:
    // 0x1b5b6c: 0x27a400f4  addiu       $a0, $sp, 0xF4
    ctx->pc = 0x1b5b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1b5b70: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5B70u;
    SET_GPR_U32(ctx, 31, 0x1B5B78u);
    ctx->pc = 0x1B5B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B70u;
    // 0x1b5b74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5B70u, 0x1B5B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B78u;
label_1b5b78:
    // 0x1b5b78: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1b5b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1b5b7c: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1B5B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B5B84u);
    ctx->pc = 0x1B5B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B7Cu;
    // 0x1b5b80: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1B5B7Cu, 0x1B5B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B84u;
label_1b5b84:
    // 0x1b5b84: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1B5B84u;
    {
        const bool branch_taken_0x1b5b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b84) {
            ctx->pc = 0x1B5D40u;
            return;
        }
    }
    ctx->pc = 0x1B5B8Cu;
}
