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

// Function: entry_0012d0c8
// Address: 0x12d0c8 - 0x12d0f4
void entry_0012d0c8_0x12d0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d0c8_0x12d0c8");
#endif

    ctx->pc = 0x12d0c8u;

    // 0x12d0c8: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x12d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d0cc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x12d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x12d0d0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x12d0d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12d0d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d0d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d0d8: 0x0  nop
    ctx->pc = 0x12d0d8u;
    // NOP
    // 0x12d0dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12d0dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12d0e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12d0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12d0e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12d0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12d0e8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x12d0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x12d0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12D0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0ECu;
        // 0x12d0f0: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D0F4u;
}
