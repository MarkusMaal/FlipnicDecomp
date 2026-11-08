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

// Function: caseD_f
// Address: 0x1c39bc - 0x1c39fc
void caseD_f_0x1c39bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1c39bc");
#endif

    switch (ctx->pc) {
        case 0x1c39c8u: goto label_1c39c8;
        case 0x1c39d4u: goto label_1c39d4;
        case 0x1c39e0u: goto label_1c39e0;
        case 0x1c39f0u: goto label_1c39f0;
        default: break;
    }

    ctx->pc = 0x1c39bcu;

    // 0x1c39bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c39bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39c0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C39C0u;
    SET_GPR_U32(ctx, 31, 0x1C39C8u);
    ctx->pc = 0x1C39C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39C0u;
    // 0x1c39c4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C39C0u, 0x1C39C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39C8u;
label_1c39c8:
    // 0x1c39c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c39c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39cc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C39CCu;
    SET_GPR_U32(ctx, 31, 0x1C39D4u);
    ctx->pc = 0x1C39D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39CCu;
    // 0x1c39d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C39CCu, 0x1C39D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39D4u;
label_1c39d4:
    // 0x1c39d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c39d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39d8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C39D8u;
    SET_GPR_U32(ctx, 31, 0x1C39E0u);
    ctx->pc = 0x1C39DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39D8u;
    // 0x1c39dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C39D8u, 0x1C39E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39E0u;
label_1c39e0:
    // 0x1c39e0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c39e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c39e4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c39e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c39e8: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C39E8u;
    SET_GPR_U32(ctx, 31, 0x1C39F0u);
    ctx->pc = 0x1C39ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39E8u;
    // 0x1c39ec: 0x24a51c40  addiu       $a1, $a1, 0x1C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C39E8u, 0x1C39F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39F0u;
label_1c39f0:
    // 0x1c39f0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c39f4: 0x10000284  b           . + 4 + (0x284 << 2)
    ctx->pc = 0x1C39F4u;
    {
        const bool branch_taken_0x1c39f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39F4u;
        // 0x1c39f8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39f4) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C39FCu;
}
