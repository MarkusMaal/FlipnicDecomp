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

// Function: entry_001fb0bc
// Address: 0x1fb0bc - 0x1fb0f4
void entry_001fb0bc_0x1fb0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb0bc_0x1fb0bc");
#endif

    ctx->pc = 0x1fb0bcu;

    // 0x1fb0bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fb0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fb0c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb0c4: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x1fb0c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1fb0c8: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x1fb0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x1fb0cc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1fb0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1fb0d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb0d4: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1fb0d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1fb0d8: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1fb0d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1fb0dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1fb0dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1fb0e0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1fb0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1fb0e4: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x1fb0e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x1fb0e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fb0e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fb0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0ECu;
        // 0x1fb0f0: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0F4u;
}
