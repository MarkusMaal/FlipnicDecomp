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

// Function: FUN_00135c70
// Address: 0x135c70 - 0x135ca8
void FUN_00135c70_0x135c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135c70_0x135c70");
#endif

    ctx->pc = 0x135c70u;

    // 0x135c70: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x135c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x135c74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x135C74u;
    {
        const bool branch_taken_0x135c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135c74) {
            ctx->pc = 0x135C88u;
            goto label_135c88;
        }
    }
    ctx->pc = 0x135C7Cu;
    // 0x135c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135c80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135C80u;
    {
        const bool branch_taken_0x135c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c80) {
            ctx->pc = 0x135CA0u;
            goto label_135ca0;
        }
    }
    ctx->pc = 0x135C88u;
label_135c88:
    // 0x135c88: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x135c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135c8c: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x135c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135c90: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x135c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135c94: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x135c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c98: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x135c98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x135c9c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x135c9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_135ca0:
    // 0x135ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x135CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135CA8u;
}
