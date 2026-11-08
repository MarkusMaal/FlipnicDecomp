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

// Function: entry_001a73e0
// Address: 0x1a73e0 - 0x1a73fc
void entry_001a73e0_0x1a73e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a73e0_0x1a73e0");
#endif

    ctx->pc = 0x1a73e0u;

    // 0x1a73e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a73e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a73e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a73e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a73e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a73e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a73ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a73ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a73f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a73f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a73f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A73F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73F4u;
        // 0x1a73f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A73F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A73FCu;
}
