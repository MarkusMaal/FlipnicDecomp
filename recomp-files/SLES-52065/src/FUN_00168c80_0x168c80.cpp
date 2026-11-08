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

// Function: FUN_00168c80
// Address: 0x168c80 - 0x168d18
void FUN_00168c80_0x168c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168c80_0x168c80");
#endif

    switch (ctx->pc) {
        case 0x168c94u: goto label_168c94;
        case 0x168ca0u: goto label_168ca0;
        default: break;
    }

    ctx->pc = 0x168c80u;

    // 0x168c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168c8c: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x168C8Cu;
    SET_GPR_U32(ctx, 31, 0x168C94u);
    ctx->pc = 0x168C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168C8Cu;
    // 0x168c90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x168C8Cu, 0x168C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C94u;
label_168c94:
    // 0x168c94: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x168c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x168c98: 0xc046458  jal         func_119160
    ctx->pc = 0x168C98u;
    SET_GPR_U32(ctx, 31, 0x168CA0u);
    ctx->pc = 0x168C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168C98u;
    // 0x168c9c: 0x2484f3f8  addiu       $a0, $a0, -0xC08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x168C98u, 0x168CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CA0u;
label_168ca0:
    // 0x168ca0: 0xae020234  sw          $v0, 0x234($s0)
    ctx->pc = 0x168ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
    // 0x168ca4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x168ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x168ca8: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x168ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168cac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x168cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168cb0: 0x0  nop
    ctx->pc = 0x168cb0u;
    // NOP
    // 0x168cb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x168cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x168cb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168cb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x168cbc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x168cbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x168cc0: 0x0  nop
    ctx->pc = 0x168cc0u;
    // NOP
    // 0x168cc4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x168CC4u;
    {
        const bool branch_taken_0x168cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168cc4) {
            ctx->pc = 0x168CD0u;
            goto label_168cd0;
        }
    }
    ctx->pc = 0x168CCCu;
    // 0x168ccc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x168cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_168cd0:
    // 0x168cd0: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x168cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
    // 0x168cd4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x168cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168cd8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x168cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x168cdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x168cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168ce0: 0x0  nop
    ctx->pc = 0x168ce0u;
    // NOP
    // 0x168ce4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x168ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x168ce8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168ce8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x168cec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x168cecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x168cf0: 0x0  nop
    ctx->pc = 0x168cf0u;
    // NOP
    // 0x168cf4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x168CF4u;
    {
        const bool branch_taken_0x168cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168cf4) {
            ctx->pc = 0x168D00u;
            goto label_168d00;
        }
    }
    ctx->pc = 0x168CFCu;
    // 0x168cfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x168cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_168d00:
    // 0x168d00: 0xae03023c  sw          $v1, 0x23C($s0)
    ctx->pc = 0x168d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
    // 0x168d04: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x168d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x168d08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168d10: 0x3e00008  jr          $ra
    ctx->pc = 0x168D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D10u;
        // 0x168d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168D18u;
}
