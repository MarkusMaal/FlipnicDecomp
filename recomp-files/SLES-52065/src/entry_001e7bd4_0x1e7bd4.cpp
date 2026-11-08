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

// Function: entry_001e7bd4
// Address: 0x1e7bd4 - 0x1e7c0c
void entry_001e7bd4_0x1e7bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7bd4_0x1e7bd4");
#endif

    switch (ctx->pc) {
        case 0x1e7becu: goto label_1e7bec;
        case 0x1e7bfcu: goto label_1e7bfc;
        case 0x1e7c04u: goto label_1e7c04;
        default: break;
    }

    ctx->pc = 0x1e7bd4u;

    // 0x1e7bd4: 0x8fc3018c  lw          $v1, 0x18C($fp)
    ctx->pc = 0x1e7bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7bd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E7BD8u;
    {
        const bool branch_taken_0x1e7bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BD8u;
        // 0x1e7bdc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bd8) {
            ctx->pc = 0x1E7C0Cu;
            return;
        }
    }
    ctx->pc = 0x1E7BE0u;
    // 0x1e7be0: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e7be4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E7BE4u;
    SET_GPR_U32(ctx, 31, 0x1E7BECu);
    ctx->pc = 0x1E7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BE4u;
    // 0x1e7be8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E7BE4u, 0x1E7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BECu;
label_1e7bec:
    // 0x1e7bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e7becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e7bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bf4: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E7BF4u;
    SET_GPR_U32(ctx, 31, 0x1E7BFCu);
    ctx->pc = 0x1E7BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BF4u;
    // 0x1e7bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E7BF4u, 0x1E7BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BFCu;
label_1e7bfc:
    // 0x1e7bfc: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E7BFCu;
    SET_GPR_U32(ctx, 31, 0x1E7C04u);
    ctx->pc = 0x1E7C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BFCu;
    // 0x1e7c00: 0x27c40150  addiu       $a0, $fp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E7BFCu, 0x1E7C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C04u;
label_1e7c04:
    // 0x1e7c04: 0x8fdd0164  lw          $sp, 0x164($fp)
    ctx->pc = 0x1e7c04u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 356)));
    // 0x1e7c08: 0x0  nop
    ctx->pc = 0x1e7c08u;
    // NOP
    ctx->pc = 0x1e7c0cu;
}
