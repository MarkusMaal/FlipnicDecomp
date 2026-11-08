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

// Function: entry_001dfe94
// Address: 0x1dfe94 - 0x1dfec0
void entry_001dfe94_0x1dfe94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfe94_0x1dfe94");
#endif

    ctx->pc = 0x1dfe94u;

    // 0x1dfe94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dfe94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfe98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dfe98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfe9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1dfe9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dfea0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1dfea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfea4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1dfea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dfea8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1dfea8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dfeac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1dfeacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dfeb0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1dfeb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dfeb4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1dfeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dfeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEB8u;
        // 0x1dfebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFEC0u;
}
