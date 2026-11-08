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

// Function: entry_0012e628
// Address: 0x12e628 - 0x12e64c
void entry_0012e628_0x12e628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e628_0x12e628");
#endif

    ctx->pc = 0x12e628u;

    // 0x12e628: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12e628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e62c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12e62cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e630: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12e630u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12e634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12e638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e63c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e63cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e644: 0x3e00008  jr          $ra
    ctx->pc = 0x12E644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E644u;
        // 0x12e648: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E64Cu;
}
