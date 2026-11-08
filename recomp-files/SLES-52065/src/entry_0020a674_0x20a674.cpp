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

// Function: entry_0020a674
// Address: 0x20a674 - 0x20a6a4
void entry_0020a674_0x20a674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a674_0x20a674");
#endif

    ctx->pc = 0x20a674u;

    // 0x20a674: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x20a674u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x20a678: 0xf  sync
    ctx->pc = 0x20a678u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x20a67c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20a67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20a680: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a684: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x20a684u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20a688: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20a688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a68c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20a68cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a690: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20a690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a694: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20a694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A69Cu;
        // 0x20a6a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A6A4u;
}
