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

// Function: caseD_5
// Address: 0x1c3690 - 0x1c36c8
void caseD_5_0x1c3690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1c3690");
#endif

    switch (ctx->pc) {
        case 0x1c369cu: goto label_1c369c;
        case 0x1c36a8u: goto label_1c36a8;
        case 0x1c36b4u: goto label_1c36b4;
        case 0x1c36bcu: goto label_1c36bc;
        default: break;
    }

    ctx->pc = 0x1c3690u;

    // 0x1c3690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3694: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3694u;
    SET_GPR_U32(ctx, 31, 0x1C369Cu);
    ctx->pc = 0x1C3698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3694u;
    // 0x1c3698: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3694u, 0x1C369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C369Cu;
label_1c369c:
    // 0x1c369c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36a0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C36A0u;
    SET_GPR_U32(ctx, 31, 0x1C36A8u);
    ctx->pc = 0x1C36A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36A0u;
    // 0x1c36a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C36A0u, 0x1C36A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36A8u;
label_1c36a8:
    // 0x1c36a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c36a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36ac: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C36ACu;
    SET_GPR_U32(ctx, 31, 0x1C36B4u);
    ctx->pc = 0x1C36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36ACu;
    // 0x1c36b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C36ACu, 0x1C36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36B4u;
label_1c36b4:
    // 0x1c36b4: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C36B4u;
    SET_GPR_U32(ctx, 31, 0x1C36BCu);
    ctx->pc = 0x1C36B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36B4u;
    // 0x1c36b8: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C36B4u, 0x1C36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36BCu;
label_1c36bc:
    // 0x1c36bc: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1c36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1c36c0: 0x10000351  b           . + 4 + (0x351 << 2)
    ctx->pc = 0x1C36C0u;
    {
        const bool branch_taken_0x1c36c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C36C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36C0u;
        // 0x1c36c4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36c0) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C36C8u;
}
