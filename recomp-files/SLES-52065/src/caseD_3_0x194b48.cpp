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

// Function: caseD_3
// Address: 0x194b48 - 0x194b78
void caseD_3_0x194b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x194b48");
#endif

    switch (ctx->pc) {
        case 0x194b5cu: goto label_194b5c;
        case 0x194b68u: goto label_194b68;
        default: break;
    }

    ctx->pc = 0x194b48u;

    // 0x194b48: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x194b48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194b4c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x194b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x194b50: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x194b54: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x194B54u;
    SET_GPR_U32(ctx, 31, 0x194B5Cu);
    ctx->pc = 0x194B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B54u;
    // 0x194b58: 0x7fa000d0  sq          $zero, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194B54u, 0x194B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B5Cu;
label_194b5c:
    // 0x194b5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b60: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x194B60u;
    SET_GPR_U32(ctx, 31, 0x194B68u);
    ctx->pc = 0x194B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B60u;
    // 0x194b64: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194B60u, 0x194B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B68u;
label_194b68:
    // 0x194b68: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x194B68u;
    {
        const bool branch_taken_0x194b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b68) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194B70u;
    // 0x194b70: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x194B70u;
    {
        const bool branch_taken_0x194b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B70u;
        // 0x194b74: 0xac510328  sw          $s1, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b70) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194B78u;
}
