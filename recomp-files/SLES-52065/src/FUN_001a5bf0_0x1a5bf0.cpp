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

// Function: FUN_001a5bf0
// Address: 0x1a5bf0 - 0x1a5ca8
void FUN_001a5bf0_0x1a5bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5bf0_0x1a5bf0");
#endif

    switch (ctx->pc) {
        case 0x1a5c94u: goto label_1a5c94;
        default: break;
    }

    ctx->pc = 0x1a5bf0u;

    // 0x1a5bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5bf4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a5bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5bfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a5bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a5c00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5c04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a5c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a5c08: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x1a5c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x1a5c0c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1a5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1a5c10: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1a5c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x1a5c14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5c18: 0xfc8500c0  sd          $a1, 0xC0($a0)
    ctx->pc = 0x1a5c18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 5));
    // 0x1a5c1c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1a5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a5c20: 0xfc8000c8  sd          $zero, 0xC8($a0)
    ctx->pc = 0x1a5c20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 200), GPR_U64(ctx, 0));
    // 0x1a5c24: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a5c28: 0xfc8600d0  sd          $a2, 0xD0($a0)
    ctx->pc = 0x1a5c28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 6));
    // 0x1a5c2c: 0x24422bd0  addiu       $v0, $v0, 0x2BD0
    ctx->pc = 0x1a5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11216));
    // 0x1a5c30: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x1a5c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x1a5c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c38: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5c3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5c40: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a5c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a5c44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5c44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5c48: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1a5c48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a5c4c: 0x0  nop
    ctx->pc = 0x1a5c4cu;
    // NOP
    // 0x1a5c50: 0xac8500ec  sw          $a1, 0xEC($a0)
    ctx->pc = 0x1a5c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 5));
    // 0x1a5c54: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x1a5c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x1a5c58: 0xfc8300d8  sd          $v1, 0xD8($a0)
    ctx->pc = 0x1a5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 216), GPR_U64(ctx, 3));
    // 0x1a5c5c: 0xac880100  sw          $t0, 0x100($a0)
    ctx->pc = 0x1a5c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 8));
    // 0x1a5c60: 0xac8700fc  sw          $a3, 0xFC($a0)
    ctx->pc = 0x1a5c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 7));
    // 0x1a5c64: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5c6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5c70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5c70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5c74: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a5c74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a5c78: 0x0  nop
    ctx->pc = 0x1a5c78u;
    // NOP
    // 0x1a5c7c: 0xac830104  sw          $v1, 0x104($a0)
    ctx->pc = 0x1a5c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
    // 0x1a5c80: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x1a5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1a5c84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5c8c: 0xc046458  jal         func_119160
    ctx->pc = 0x1A5C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A5C94u);
    ctx->pc = 0x1A5C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C8Cu;
    // 0x1a5c90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A5C8Cu, 0x1A5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C94u;
label_1a5c94:
    // 0x1a5c94: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1a5c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x1a5c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5c9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CA0u;
        // 0x1a5ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5CA8u;
}
