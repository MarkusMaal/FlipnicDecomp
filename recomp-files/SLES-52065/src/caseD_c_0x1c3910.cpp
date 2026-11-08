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

// Function: caseD_c
// Address: 0x1c3910 - 0x1c3950
void caseD_c_0x1c3910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1c3910");
#endif

    switch (ctx->pc) {
        case 0x1c391cu: goto label_1c391c;
        case 0x1c3928u: goto label_1c3928;
        case 0x1c3934u: goto label_1c3934;
        case 0x1c3944u: goto label_1c3944;
        default: break;
    }

    ctx->pc = 0x1c3910u;

    // 0x1c3910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3914: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3914u;
    SET_GPR_U32(ctx, 31, 0x1C391Cu);
    ctx->pc = 0x1C3918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3914u;
    // 0x1c3918: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3914u, 0x1C391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C391Cu;
label_1c391c:
    // 0x1c391c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3920: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3920u;
    SET_GPR_U32(ctx, 31, 0x1C3928u);
    ctx->pc = 0x1C3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3920u;
    // 0x1c3924: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3920u, 0x1C3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3928u;
label_1c3928:
    // 0x1c3928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c392c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C392Cu;
    SET_GPR_U32(ctx, 31, 0x1C3934u);
    ctx->pc = 0x1C3930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C392Cu;
    // 0x1c3930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C392Cu, 0x1C3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3934u;
label_1c3934:
    // 0x1c3934: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c3934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c3938: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c393c: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C393Cu;
    SET_GPR_U32(ctx, 31, 0x1C3944u);
    ctx->pc = 0x1C3940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C393Cu;
    // 0x1c3940: 0x24a51c28  addiu       $a1, $a1, 0x1C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C393Cu, 0x1C3944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3944u;
label_1c3944:
    // 0x1c3944: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1c3944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c3948: 0x100002af  b           . + 4 + (0x2AF << 2)
    ctx->pc = 0x1C3948u;
    {
        const bool branch_taken_0x1c3948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3948u;
        // 0x1c394c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3948) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3950u;
}
