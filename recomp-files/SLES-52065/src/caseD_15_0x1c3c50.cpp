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

// Function: caseD_15
// Address: 0x1c3c50 - 0x1c3c90
void caseD_15_0x1c3c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x1c3c50");
#endif

    switch (ctx->pc) {
        case 0x1c3c5cu: goto label_1c3c5c;
        case 0x1c3c68u: goto label_1c3c68;
        case 0x1c3c74u: goto label_1c3c74;
        case 0x1c3c84u: goto label_1c3c84;
        default: break;
    }

    ctx->pc = 0x1c3c50u;

    // 0x1c3c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c54: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3C54u;
    SET_GPR_U32(ctx, 31, 0x1C3C5Cu);
    ctx->pc = 0x1C3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C54u;
    // 0x1c3c58: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3C54u, 0x1C3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C5Cu;
label_1c3c5c:
    // 0x1c3c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c60: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3C60u;
    SET_GPR_U32(ctx, 31, 0x1C3C68u);
    ctx->pc = 0x1C3C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C60u;
    // 0x1c3c64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3C60u, 0x1C3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C68u;
label_1c3c68:
    // 0x1c3c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c6c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C3C74u);
    ctx->pc = 0x1C3C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C6Cu;
    // 0x1c3c70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3C6Cu, 0x1C3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C74u;
label_1c3c74:
    // 0x1c3c74: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c3c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c3c78: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3c7c: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C3C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C3C84u);
    ctx->pc = 0x1C3C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C7Cu;
    // 0x1c3c80: 0x24a51c60  addiu       $a1, $a1, 0x1C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C3C7Cu, 0x1C3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C84u;
label_1c3c84:
    // 0x1c3c84: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1c3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c3c88: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x1C3C88u;
    {
        const bool branch_taken_0x1c3c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C88u;
        // 0x1c3c8c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c88) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3C90u;
}
