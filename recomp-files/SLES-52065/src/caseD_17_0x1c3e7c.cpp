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

// Function: caseD_17
// Address: 0x1c3e7c - 0x1c3ebc
void caseD_17_0x1c3e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x1c3e7c");
#endif

    switch (ctx->pc) {
        case 0x1c3e88u: goto label_1c3e88;
        case 0x1c3e94u: goto label_1c3e94;
        case 0x1c3ea0u: goto label_1c3ea0;
        default: break;
    }

    ctx->pc = 0x1c3e7cu;

    // 0x1c3e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e80: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E80u;
    SET_GPR_U32(ctx, 31, 0x1C3E88u);
    ctx->pc = 0x1C3E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E80u;
    // 0x1c3e84: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E80u, 0x1C3E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E88u;
label_1c3e88:
    // 0x1c3e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e8c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E94u);
    ctx->pc = 0x1C3E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E8Cu;
    // 0x1c3e90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E8Cu, 0x1C3E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E94u;
label_1c3e94:
    // 0x1c3e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e98: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3E98u;
    SET_GPR_U32(ctx, 31, 0x1C3EA0u);
    ctx->pc = 0x1C3E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E98u;
    // 0x1c3e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3E98u, 0x1C3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EA0u;
label_1c3ea0:
    // 0x1c3ea0: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1c3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1c3ea4: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x1c3ea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1c3ea8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3EA8u;
    {
        const bool branch_taken_0x1c3ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EA8u;
        // 0x1c3eac: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ea8) {
            ctx->pc = 0x1C3EBCu;
            return;
        }
    }
    ctx->pc = 0x1C3EB0u;
    // 0x1c3eb0: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3eb4: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x1C3EB4u;
    {
        const bool branch_taken_0x1c3eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EB4u;
        // 0x1c3eb8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3eb4) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3EBCu;
}
