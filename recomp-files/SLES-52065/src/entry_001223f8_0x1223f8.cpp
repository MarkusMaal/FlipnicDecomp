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

// Function: entry_001223f8
// Address: 0x1223f8 - 0x12241c
void entry_001223f8_0x1223f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001223f8_0x1223f8");
#endif

    ctx->pc = 0x1223f8u;

    // 0x1223f8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1223f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x1223fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1223fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122400: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x122400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122404: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12240c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12240cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122414: 0x3e00008  jr          $ra
    ctx->pc = 0x122414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122414u;
        // 0x122418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12241Cu;
}
