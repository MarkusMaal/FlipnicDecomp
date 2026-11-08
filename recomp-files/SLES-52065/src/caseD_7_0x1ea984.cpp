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
// Address: 0x1ea984 - 0x1ea9a8
void caseD_7_0x1ea984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1ea984");
#endif

    switch (ctx->pc) {
        case 0x1ea990u: goto label_1ea990;
        case 0x1ea99cu: goto label_1ea99c;
        default: break;
    }

    ctx->pc = 0x1ea984u;

    // 0x1ea984: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea988: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA988u;
    SET_GPR_U32(ctx, 31, 0x1EA990u);
    ctx->pc = 0x1EA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA988u;
    // 0x1ea98c: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA988u, 0x1EA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA990u;
label_1ea990:
    // 0x1ea990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea994: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA994u;
    SET_GPR_U32(ctx, 31, 0x1EA99Cu);
    ctx->pc = 0x1EA998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA994u;
    // 0x1ea998: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA994u, 0x1EA99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA99Cu;
label_1ea99c:
    // 0x1ea99c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea9a0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1EA9A0u;
    {
        const bool branch_taken_0x1ea9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9A0u;
        // 0x1ea9a4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9a0) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EA9A8u;
}
