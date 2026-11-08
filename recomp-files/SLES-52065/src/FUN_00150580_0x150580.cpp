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

// Function: FUN_00150580
// Address: 0x150580 - 0x1505bc
void FUN_00150580_0x150580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150580_0x150580");
#endif

    switch (ctx->pc) {
        case 0x150590u: goto label_150590;
        default: break;
    }

    ctx->pc = 0x150580u;

    // 0x150580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150588: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x150588u;
    SET_GPR_U32(ctx, 31, 0x150590u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x150588u, 0x150590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150590u;
label_150590:
    // 0x150590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150594: 0x0  nop
    ctx->pc = 0x150594u;
    // NOP
    // 0x150598: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x150598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15059c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x15059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1505a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1505a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1505a4: 0x0  nop
    ctx->pc = 0x1505a4u;
    // NOP
    // 0x1505a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1505a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1505ac: 0x0  nop
    ctx->pc = 0x1505acu;
    // NOP
    // 0x1505b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1505b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1505b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1505B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1505B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505B4u;
        // 0x1505b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1505B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1505BCu;
}
