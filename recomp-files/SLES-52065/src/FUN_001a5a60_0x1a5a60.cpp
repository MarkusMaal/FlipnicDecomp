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

// Function: FUN_001a5a60
// Address: 0x1a5a60 - 0x1a5b10
void FUN_001a5a60_0x1a5a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5a60_0x1a5a60");
#endif

    switch (ctx->pc) {
        case 0x1a5afcu: goto label_1a5afc;
        default: break;
    }

    ctx->pc = 0x1a5a60u;

    // 0x1a5a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5a64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a5a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5a6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a5a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a5a70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5a74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5a78: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x1a5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x1a5a7c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a5a80: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1a5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x1a5a84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a5a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a5a88: 0xfc8500c0  sd          $a1, 0xC0($a0)
    ctx->pc = 0x1a5a88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 5));
    // 0x1a5a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5a90: 0xfc8600c8  sd          $a2, 0xC8($a0)
    ctx->pc = 0x1a5a90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 200), GPR_U64(ctx, 6));
    // 0x1a5a94: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1a5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a5a98: 0xfc8700d0  sd          $a3, 0xD0($a0)
    ctx->pc = 0x1a5a98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 7));
    // 0x1a5a9c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a5aa0: 0xac8800e8  sw          $t0, 0xE8($a0)
    ctx->pc = 0x1a5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 8));
    // 0x1a5aa4: 0x24422bd0  addiu       $v0, $v0, 0x2BD0
    ctx->pc = 0x1a5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11216));
    // 0x1a5aa8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5ab4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a5ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a5ab8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5ab8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5abc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1a5abcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a5ac0: 0x0  nop
    ctx->pc = 0x1a5ac0u;
    // NOP
    // 0x1a5ac4: 0xac8500ec  sw          $a1, 0xEC($a0)
    ctx->pc = 0x1a5ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 5));
    // 0x1a5ac8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5acc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5ad0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5ad4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5ad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5ad8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1a5ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a5adc: 0x0  nop
    ctx->pc = 0x1a5adcu;
    // NOP
    // 0x1a5ae0: 0xac8500f0  sw          $a1, 0xF0($a0)
    ctx->pc = 0x1a5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 5));
    // 0x1a5ae4: 0xfc8300d8  sd          $v1, 0xD8($a0)
    ctx->pc = 0x1a5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 216), GPR_U64(ctx, 3));
    // 0x1a5ae8: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x1a5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1a5aec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a5aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5af4: 0xc046458  jal         func_119160
    ctx->pc = 0x1A5AF4u;
    SET_GPR_U32(ctx, 31, 0x1A5AFCu);
    ctx->pc = 0x1A5AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5AF4u;
    // 0x1a5af8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A5AF4u, 0x1A5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AFCu;
label_1a5afc:
    // 0x1a5afc: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1a5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x1a5b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B08u;
        // 0x1a5b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5B10u;
}
