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

// Function: entry_0015308c
// Address: 0x15308c - 0x1530b8
void entry_0015308c_0x15308c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015308c_0x15308c");
#endif

    ctx->pc = 0x15308cu;

    // 0x15308c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15308cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153090: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x153090u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x153094: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x153094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153098: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x153098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15309c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15309cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1530a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1530a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1530a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1530a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1530a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1530a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1530ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1530acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1530b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1530B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1530B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530B0u;
        // 0x1530b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1530B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1530B8u;
}
