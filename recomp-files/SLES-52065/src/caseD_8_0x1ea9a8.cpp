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

// Function: caseD_8
// Address: 0x1ea9a8 - 0x1ea9d8
void caseD_8_0x1ea9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1ea9a8");
#endif

    switch (ctx->pc) {
        case 0x1ea9b4u: goto label_1ea9b4;
        case 0x1ea9c0u: goto label_1ea9c0;
        case 0x1ea9ccu: goto label_1ea9cc;
        default: break;
    }

    ctx->pc = 0x1ea9a8u;

    // 0x1ea9a8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea9ac: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA9ACu;
    SET_GPR_U32(ctx, 31, 0x1EA9B4u);
    ctx->pc = 0x1EA9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9ACu;
    // 0x1ea9b0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA9ACu, 0x1EA9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9B4u;
label_1ea9b4:
    // 0x1ea9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9b8: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA9B8u;
    SET_GPR_U32(ctx, 31, 0x1EA9C0u);
    ctx->pc = 0x1EA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9B8u;
    // 0x1ea9bc: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA9B8u, 0x1EA9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9C0u;
label_1ea9c0:
    // 0x1ea9c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9c4: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA9C4u;
    SET_GPR_U32(ctx, 31, 0x1EA9CCu);
    ctx->pc = 0x1EA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9C4u;
    // 0x1ea9c8: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA9C4u, 0x1EA9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9CCu;
label_1ea9cc:
    // 0x1ea9cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea9d0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1EA9D0u;
    {
        const bool branch_taken_0x1ea9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9D0u;
        // 0x1ea9d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9d0) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EA9D8u;
}
