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

// Function: entry_001a662c
// Address: 0x1a662c - 0x1a6650
void entry_001a662c_0x1a662c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a662c_0x1a662c");
#endif

    ctx->pc = 0x1a662cu;

    // 0x1a662c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a662cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a6630: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1a6630u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6634: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1a6634u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a6638: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1a6638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a663c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a663cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6640: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a6640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6644: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a6644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6648: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6648u;
        // 0x1a664c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6650u;
}
