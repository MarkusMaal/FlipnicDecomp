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

// Function: entry_0012d050
// Address: 0x12d050 - 0x12d074
void entry_0012d050_0x12d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d050_0x12d050");
#endif

    switch (ctx->pc) {
        case 0x12d058u: goto label_12d058;
        default: break;
    }

    ctx->pc = 0x12d050u;

    // 0x12d050: 0xc04b67c  jal         func_12D9F0
    ctx->pc = 0x12D050u;
    SET_GPR_U32(ctx, 31, 0x12D058u);
    ctx->pc = 0x12D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D050u;
    // 0x12d054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F0u, 0x12D050u, 0x12D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D058u;
label_12d058:
    // 0x12d058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12d058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d05c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12d060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12d064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12d068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d06c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D06Cu;
        // 0x12d070: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D074u;
}
