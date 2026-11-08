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

// Function: FUN_001bacc0
// Address: 0x1bacc0 - 0x1bad58
void FUN_001bacc0_0x1bacc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bacc0_0x1bacc0");
#endif

    ctx->pc = 0x1bacc0u;

    // 0x1bacc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bacc4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BACC4u;
    {
        const bool branch_taken_0x1bacc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bacc4) {
            ctx->pc = 0x1BAD50u;
            goto label_1bad50;
        }
    }
    ctx->pc = 0x1BACCCu;
    // 0x1baccc: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1bacccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bacd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bacd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bacd4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1bacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1bacd8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bacd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bacdc: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1bacdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1bace0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bace4: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1bace4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bace8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bace8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bacec: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1bacecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1bacf0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bacf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bacf4: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1bacf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bacf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bacf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bacfc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bacfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bad00: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1bad00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1bad04: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bad08: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1bad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bad0c: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1bad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bad10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bad10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bad14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bad14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bad18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bad18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bad1c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x1bad1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1bad20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bad24: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1bad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bad28: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1bad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bad2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bad2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bad30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bad30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bad34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bad34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bad38: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1bad38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1bad3c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bad40: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1bad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bad44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bad44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bad48: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bad48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bad4c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x1bad4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_1bad50:
    // 0x1bad50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAD58u;
}
