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

// Function: entry_001893a0
// Address: 0x1893a0 - 0x1893cc
void entry_001893a0_0x1893a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001893a0_0x1893a0");
#endif

    switch (ctx->pc) {
        case 0x1893a8u: goto label_1893a8;
        default: break;
    }

    ctx->pc = 0x1893a0u;

    // 0x1893a0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1893A0u;
    SET_GPR_U32(ctx, 31, 0x1893A8u);
    ctx->pc = 0x1893A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893A0u;
    // 0x1893a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1893A0u, 0x1893A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893A8u;
label_1893a8:
    // 0x1893a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1893a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1893ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1893acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1893b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1893b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1893b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1893b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1893b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1893b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1893bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1893bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1893c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1893c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1893c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1893C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1893C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893C4u;
        // 0x1893c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1893C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1893CCu;
}
