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

// Function: entry_00189ec0
// Address: 0x189ec0 - 0x189eec
void entry_00189ec0_0x189ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ec0_0x189ec0");
#endif

    switch (ctx->pc) {
        case 0x189ec8u: goto label_189ec8;
        default: break;
    }

    ctx->pc = 0x189ec0u;

    // 0x189ec0: 0xc04018c  jal         func_100630
    ctx->pc = 0x189EC0u;
    SET_GPR_U32(ctx, 31, 0x189EC8u);
    ctx->pc = 0x189EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EC0u;
    // 0x189ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x189EC0u, 0x189EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EC8u;
label_189ec8:
    // 0x189ec8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x189ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189ecc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x189eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x189ed0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x189ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189ed4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x189ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189ed8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x189ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189edc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x189edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189ee0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x189EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EE4u;
        // 0x189ee8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189EECu;
}
