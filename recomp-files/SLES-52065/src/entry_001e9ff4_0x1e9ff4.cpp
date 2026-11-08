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

// Function: entry_001e9ff4
// Address: 0x1e9ff4 - 0x1ea028
void entry_001e9ff4_0x1e9ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9ff4_0x1e9ff4");
#endif

    switch (ctx->pc) {
        case 0x1ea008u: goto label_1ea008;
        case 0x1ea014u: goto label_1ea014;
        default: break;
    }

    ctx->pc = 0x1e9ff4u;

    // 0x1e9ff4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e9ff8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E9FF8u;
    {
        const bool branch_taken_0x1e9ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FF8u;
        // 0x1e9ffc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ff8) {
            ctx->pc = 0x1EA040u;
            return;
        }
    }
    ctx->pc = 0x1EA000u;
    // 0x1ea000: 0xc07abcc  jal         func_1EAF30
    ctx->pc = 0x1EA000u;
    SET_GPR_U32(ctx, 31, 0x1EA008u);
    ctx->pc = 0x1EA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA000u;
    // 0x1ea004: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAF30u, 0x1EA000u, 0x1EA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA008u;
label_1ea008:
    // 0x1ea008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea00c: 0xc07aad4  jal         func_1EAB50
    ctx->pc = 0x1EA00Cu;
    SET_GPR_U32(ctx, 31, 0x1EA014u);
    ctx->pc = 0x1EA010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA00Cu;
    // 0x1ea010: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAB50u, 0x1EA00Cu, 0x1EA014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA014u;
label_1ea014:
    // 0x1ea014: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1ea014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ea018: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA018u;
    {
        const bool branch_taken_0x1ea018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea018) {
            ctx->pc = 0x1EA028u;
            return;
        }
    }
    ctx->pc = 0x1EA020u;
    // 0x1ea020: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1EA020u;
    SET_GPR_U32(ctx, 31, 0x1EA028u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1EA020u, 0x1EA028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA028u;
}
