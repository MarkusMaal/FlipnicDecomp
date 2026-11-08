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

// Function: entry_001d3b84
// Address: 0x1d3b84 - 0x1d3bb4
void entry_001d3b84_0x1d3b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3b84_0x1d3b84");
#endif

    ctx->pc = 0x1d3b84u;

    // 0x1d3b84: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1d3b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3b88: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1d3b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3b8c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1d3b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3b90: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1d3b90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d3b94: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1d3b94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3b98: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1d3b98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d3b9c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1d3b9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3ba0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1d3ba0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d3ba4: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1d3ba4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d3ba8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1d3ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d3bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BACu;
        // 0x1d3bb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3BB4u;
}
