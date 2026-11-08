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

// Function: FUN_0016f890
// Address: 0x16f890 - 0x16f8d4
void FUN_0016f890_0x16f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f890_0x16f890");
#endif

    ctx->pc = 0x16f890u;

    // 0x16f890: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16f894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f898: 0x0  nop
    ctx->pc = 0x16f898u;
    // NOP
    // 0x16f89c: 0x46006803  div.s       $f0, $f13, $f0
    ctx->pc = 0x16f89cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x16f8a0: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x16f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x16f8a4: 0x46007001  sub.s       $f0, $f14, $f0
    ctx->pc = 0x16f8a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
    // 0x16f8a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16f8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16f8ac: 0x0  nop
    ctx->pc = 0x16f8acu;
    // NOP
    // 0x16f8b0: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x16f8b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x16f8b4: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x16f8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x16f8b8: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x16f8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x16f8bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16f8bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16f8c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16f8c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16f8c4: 0x0  nop
    ctx->pc = 0x16f8c4u;
    // NOP
    // 0x16f8c8: 0x0  nop
    ctx->pc = 0x16f8c8u;
    // NOP
    // 0x16f8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x16F8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8CCu;
        // 0x16f8d0: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F8D4u;
}
