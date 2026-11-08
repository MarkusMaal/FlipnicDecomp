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

// Function: entry_001fa668
// Address: 0x1fa668 - 0x1fa6a0
void entry_001fa668_0x1fa668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa668_0x1fa668");
#endif

    ctx->pc = 0x1fa668u;

    // 0x1fa668: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fa668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fa66c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa670: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x1fa670u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1fa674: 0x460d60c2  mul.s       $f3, $f12, $f13
    ctx->pc = 0x1fa674u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1fa678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fa678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa67c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa680: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fa680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa684: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1fa684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fa688: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1fa688u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1fa68c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1fa68cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1fa690: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1fa690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1fa694: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1fa694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1fa698: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA698u;
        // 0x1fa69c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA6A0u;
}
