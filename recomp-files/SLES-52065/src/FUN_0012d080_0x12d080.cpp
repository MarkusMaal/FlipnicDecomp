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

// Function: FUN_0012d080
// Address: 0x12d080 - 0x12d0f4
void FUN_0012d080_0x12d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d080_0x12d080");
#endif

    ctx->pc = 0x12d080u;

    // 0x12d080: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x12d080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d084: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x12d084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x12d088: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x12d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12d08c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x12d08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x12d090: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x12d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d098: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x12d098u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x12d09c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x12d09cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x12d0a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x12d0a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x12d0a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12d0a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12d0a8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x12d0a8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x12d0ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d0acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12d0b0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x12d0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12d0b4: 0x0  nop
    ctx->pc = 0x12d0b4u;
    // NOP
    // 0x12d0b8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D0B8u;
    {
        const bool branch_taken_0x12d0b8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x12D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0B8u;
        // 0x12d0bc: 0x51883  sra         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0b8) {
            ctx->pc = 0x12D0C8u;
            goto label_12d0c8;
        }
    }
    ctx->pc = 0x12D0C0u;
    // 0x12d0c0: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x12d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x12d0c4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x12d0c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_12d0c8:
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
