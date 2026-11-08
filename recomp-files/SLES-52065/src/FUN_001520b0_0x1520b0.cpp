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

// Function: FUN_001520b0
// Address: 0x1520b0 - 0x152114
void FUN_001520b0_0x1520b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001520b0_0x1520b0");
#endif

    ctx->pc = 0x1520b0u;

    // 0x1520b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1520b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1520b4: 0x0  nop
    ctx->pc = 0x1520b4u;
    // NOP
    // 0x1520b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1520b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1520bc: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x1520bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1520c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1520c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1520c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1520c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1520c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1520c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1520cc: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1520ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1520d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1520D0u;
    {
        const bool branch_taken_0x1520d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1520D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520D0u;
        // 0x1520d4: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520d0) {
            ctx->pc = 0x1520E8u;
            goto label_1520e8;
        }
    }
    ctx->pc = 0x1520D8u;
    // 0x1520d8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1520d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1520dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1520dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1520e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1520E0u;
    {
        const bool branch_taken_0x1520e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1520E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520E0u;
        // 0x1520e4: 0xc440fffc  lwc1        $f0, -0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520e0) {
            ctx->pc = 0x15210Cu;
            goto label_15210c;
        }
    }
    ctx->pc = 0x1520E8u;
label_1520e8:
    // 0x1520e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1520e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1520ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1520ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1520f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1520f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1520f4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1520f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1520f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1520f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1520fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1520fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152100: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x152100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x152104: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x152104u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x152108: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x152108u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_15210c:
    // 0x15210c: 0x3e00008  jr          $ra
    ctx->pc = 0x15210Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15210Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152114u;
}
