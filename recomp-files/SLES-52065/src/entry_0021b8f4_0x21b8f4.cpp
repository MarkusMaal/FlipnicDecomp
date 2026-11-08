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

// Function: entry_0021b8f4
// Address: 0x21b8f4 - 0x21b928
void entry_0021b8f4_0x21b8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b8f4_0x21b8f4");
#endif

    ctx->pc = 0x21b8f4u;

    // 0x21b8f4: 0xf  sync
    ctx->pc = 0x21b8f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21b8f8: 0x42000038  ei
    ctx->pc = 0x21b8f8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x21b8fc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x21b8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b900: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x21b900u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b904: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x21b904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21b908: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x21b908u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21b90c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x21b90cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21b910: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x21b910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b914: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x21b914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b918: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x21b918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b91c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x21b91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b920: 0x3e00008  jr          $ra
    ctx->pc = 0x21B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B920u;
        // 0x21b924: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B928u;
}
