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

// Function: caseD_13
// Address: 0x1c3b74 - 0x1c3bb4
void caseD_13_0x1c3b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1c3b74");
#endif

    switch (ctx->pc) {
        case 0x1c3b80u: goto label_1c3b80;
        case 0x1c3b8cu: goto label_1c3b8c;
        case 0x1c3b98u: goto label_1c3b98;
        case 0x1c3ba8u: goto label_1c3ba8;
        default: break;
    }

    ctx->pc = 0x1c3b74u;

    // 0x1c3b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b78: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3B78u;
    SET_GPR_U32(ctx, 31, 0x1C3B80u);
    ctx->pc = 0x1C3B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B78u;
    // 0x1c3b7c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3B78u, 0x1C3B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B80u;
label_1c3b80:
    // 0x1c3b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b84: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3B84u;
    SET_GPR_U32(ctx, 31, 0x1C3B8Cu);
    ctx->pc = 0x1C3B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B84u;
    // 0x1c3b88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3B84u, 0x1C3B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B8Cu;
label_1c3b8c:
    // 0x1c3b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b90: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3B90u;
    SET_GPR_U32(ctx, 31, 0x1C3B98u);
    ctx->pc = 0x1C3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B90u;
    // 0x1c3b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3B90u, 0x1C3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B98u;
label_1c3b98:
    // 0x1c3b98: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c3b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c3b9c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3ba0: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C3BA0u;
    SET_GPR_U32(ctx, 31, 0x1C3BA8u);
    ctx->pc = 0x1C3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BA0u;
    // 0x1c3ba4: 0x24a51c60  addiu       $a1, $a1, 0x1C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C3BA0u, 0x1C3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BA8u;
label_1c3ba8:
    // 0x1c3ba8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c3bac: 0x10000216  b           . + 4 + (0x216 << 2)
    ctx->pc = 0x1C3BACu;
    {
        const bool branch_taken_0x1c3bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BACu;
        // 0x1c3bb0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bac) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3BB4u;
}
