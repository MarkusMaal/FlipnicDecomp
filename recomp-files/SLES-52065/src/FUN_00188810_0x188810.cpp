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

// Function: FUN_00188810
// Address: 0x188810 - 0x18884c
void FUN_00188810_0x188810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00188810_0x188810");
#endif

    ctx->pc = 0x188810u;

    // 0x188810: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x188810u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x188814: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x188814u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x188818: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x188818u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x18881c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x18881cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x188820: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x188820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x188824: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x188824u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x188828: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x188828u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x18882c: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x18882cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x188830: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x188830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188834: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x188834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188838: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x188838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x18883c: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x18883cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x188840: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x188840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x188844: 0x3e00008  jr          $ra
    ctx->pc = 0x188844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188844u;
        // 0x188848: 0xac830048  sw          $v1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18884Cu;
}
