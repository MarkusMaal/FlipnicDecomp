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

// Function: caseD_7
// Address: 0x1c6fa0 - 0x1c6fd8
void caseD_7_0x1c6fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1c6fa0");
#endif

    switch (ctx->pc) {
        case 0x1c6facu: goto label_1c6fac;
        case 0x1c6fb8u: goto label_1c6fb8;
        case 0x1c6fc4u: goto label_1c6fc4;
        case 0x1c6fccu: goto label_1c6fcc;
        default: break;
    }

    ctx->pc = 0x1c6fa0u;

    // 0x1c6fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fa4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FA4u;
    SET_GPR_U32(ctx, 31, 0x1C6FACu);
    ctx->pc = 0x1C6FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FA4u;
    // 0x1c6fa8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FA4u, 0x1C6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FACu;
label_1c6fac:
    // 0x1c6fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fb0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FB0u;
    SET_GPR_U32(ctx, 31, 0x1C6FB8u);
    ctx->pc = 0x1C6FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FB0u;
    // 0x1c6fb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FB0u, 0x1C6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FB8u;
label_1c6fb8:
    // 0x1c6fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fbc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FBCu;
    SET_GPR_U32(ctx, 31, 0x1C6FC4u);
    ctx->pc = 0x1C6FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FBCu;
    // 0x1c6fc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FBCu, 0x1C6FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FC4u;
label_1c6fc4:
    // 0x1c6fc4: 0xc07468c  jal         func_1D1A30
    ctx->pc = 0x1C6FC4u;
    SET_GPR_U32(ctx, 31, 0x1C6FCCu);
    ctx->pc = 0x1C6FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FC4u;
    // 0x1c6fc8: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1A30u, 0x1C6FC4u, 0x1C6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FCCu;
label_1c6fcc:
    // 0x1c6fcc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c6fd0: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x1C6FD0u;
    {
        const bool branch_taken_0x1c6fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FD0u;
        // 0x1c6fd4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fd0) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6FD8u;
}
