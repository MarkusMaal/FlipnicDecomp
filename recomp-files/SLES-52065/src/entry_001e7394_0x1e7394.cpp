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

// Function: entry_001e7394
// Address: 0x1e7394 - 0x1e73bc
void entry_001e7394_0x1e7394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7394_0x1e7394");
#endif

    ctx->pc = 0x1e7394u;

    // 0x1e7394: 0x0  nop
    ctx->pc = 0x1e7394u;
    // NOP
    // 0x1e7398: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e7398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e739c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e739cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e73a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e73a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e73a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e73a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e73a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e73a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e73ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e73acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e73b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e73b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e73b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E73B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73B4u;
        // 0x1e73b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E73B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E73BCu;
}
