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

// Function: entry_0011b91c
// Address: 0x11b91c - 0x11b94c
void entry_0011b91c_0x11b91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b91c_0x11b91c");
#endif

    switch (ctx->pc) {
        case 0x11b928u: goto label_11b928;
        case 0x11b938u: goto label_11b938;
        default: break;
    }

    ctx->pc = 0x11b91cu;

    // 0x11b91c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b920: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11B920u;
    SET_GPR_U32(ctx, 31, 0x11B928u);
    ctx->pc = 0x11B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B920u;
    // 0x11b924: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11B920u, 0x11B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B928u;
label_11b928:
    // 0x11b928: 0x16c0000d  bnez        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x11B928u;
    {
        const bool branch_taken_0x11b928 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B928u;
        // 0x11b92c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b928) {
            ctx->pc = 0x11B960u;
            return;
        }
    }
    ctx->pc = 0x11B930u;
    // 0x11b930: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11B930u;
    SET_GPR_U32(ctx, 31, 0x11B938u);
    ctx->pc = 0x11B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B930u;
    // 0x11b934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11B930u, 0x11B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B938u;
label_11b938:
    // 0x11b938: 0x262307ff  addiu       $v1, $s1, 0x7FF
    ctx->pc = 0x11b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2047));
    // 0x11b93c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B93Cu;
    {
        const bool branch_taken_0x11b93c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B93Cu;
        // 0x11b940: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b93c) {
            ctx->pc = 0x11B94Cu;
            return;
        }
    }
    ctx->pc = 0x11B944u;
    // 0x11b944: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x11b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11b948: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x11b948u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    ctx->pc = 0x11b94cu;
}
