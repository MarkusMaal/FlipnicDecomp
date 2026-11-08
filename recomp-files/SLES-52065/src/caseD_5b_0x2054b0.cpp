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

// Function: caseD_5b
// Address: 0x2054b0 - 0x2054cc
void caseD_5b_0x2054b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5b_0x2054b0");
#endif

    switch (ctx->pc) {
        case 0x2054bcu: goto label_2054bc;
        default: break;
    }

    ctx->pc = 0x2054b0u;

    // 0x2054b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2054b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2054b4: 0xc081756  jal         func_205D58
    ctx->pc = 0x2054B4u;
    SET_GPR_U32(ctx, 31, 0x2054BCu);
    ctx->pc = 0x2054B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2054B4u;
    // 0x2054b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205D58u, 0x2054B4u, 0x2054BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054BCu;
label_2054bc:
    // 0x2054bc: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x2054bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
    // 0x2054c0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2054c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2054c4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2054C4u;
    {
        const bool branch_taken_0x2054c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054C4u;
        // 0x2054c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054c4) {
            ctx->pc = 0x205584u;
            return;
        }
    }
    ctx->pc = 0x2054CCu;
}
