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

// Function: caseD_30
// Address: 0x1c4130 - 0x1c4170
void caseD_30_0x1c4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_30_0x1c4130");
#endif

    switch (ctx->pc) {
        case 0x1c413cu: goto label_1c413c;
        case 0x1c4148u: goto label_1c4148;
        case 0x1c4154u: goto label_1c4154;
        case 0x1c4164u: goto label_1c4164;
        default: break;
    }

    ctx->pc = 0x1c4130u;

    // 0x1c4130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4134: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4134u;
    SET_GPR_U32(ctx, 31, 0x1C413Cu);
    ctx->pc = 0x1C4138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4134u;
    // 0x1c4138: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4134u, 0x1C413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C413Cu;
label_1c413c:
    // 0x1c413c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4140: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4140u;
    SET_GPR_U32(ctx, 31, 0x1C4148u);
    ctx->pc = 0x1C4144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4140u;
    // 0x1c4144: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4140u, 0x1C4148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4148u;
label_1c4148:
    // 0x1c4148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c414c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C414Cu;
    SET_GPR_U32(ctx, 31, 0x1C4154u);
    ctx->pc = 0x1C4150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C414Cu;
    // 0x1c4150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C414Cu, 0x1C4154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4154u;
label_1c4154:
    // 0x1c4154: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4158: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c4158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c415c: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C415Cu;
    SET_GPR_U32(ctx, 31, 0x1C4164u);
    ctx->pc = 0x1C4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C415Cu;
    // 0x1c4160: 0x24a51c28  addiu       $a1, $a1, 0x1C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C415Cu, 0x1C4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4164u;
label_1c4164:
    // 0x1c4164: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1c4164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1c4168: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1C4168u;
    {
        const bool branch_taken_0x1c4168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4168u;
        // 0x1c416c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4168) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4170u;
}
