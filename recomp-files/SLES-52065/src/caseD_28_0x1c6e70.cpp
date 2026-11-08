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

// Function: caseD_28
// Address: 0x1c6e70 - 0x1c6eb0
void caseD_28_0x1c6e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_28_0x1c6e70");
#endif

    switch (ctx->pc) {
        case 0x1c6e7cu: goto label_1c6e7c;
        case 0x1c6e88u: goto label_1c6e88;
        case 0x1c6e94u: goto label_1c6e94;
        default: break;
    }

    ctx->pc = 0x1c6e70u;

    // 0x1c6e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e74: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E74u;
    SET_GPR_U32(ctx, 31, 0x1C6E7Cu);
    ctx->pc = 0x1C6E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E74u;
    // 0x1c6e78: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E74u, 0x1C6E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E7Cu;
label_1c6e7c:
    // 0x1c6e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e80: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E80u;
    SET_GPR_U32(ctx, 31, 0x1C6E88u);
    ctx->pc = 0x1C6E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E80u;
    // 0x1c6e84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E80u, 0x1C6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E88u;
label_1c6e88:
    // 0x1c6e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e8c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E94u);
    ctx->pc = 0x1C6E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E8Cu;
    // 0x1c6e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E8Cu, 0x1C6E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E94u;
label_1c6e94:
    // 0x1c6e94: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1c6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1c6e98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6e9c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6E9Cu;
    {
        const bool branch_taken_0x1c6e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E9Cu;
        // 0x1c6ea0: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e9c) {
            ctx->pc = 0x1C6EB0u;
            return;
        }
    }
    ctx->pc = 0x1C6EA4u;
    // 0x1c6ea4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c6ea8: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x1C6EA8u;
    {
        const bool branch_taken_0x1c6ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EA8u;
        // 0x1c6eac: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ea8) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6EB0u;
}
