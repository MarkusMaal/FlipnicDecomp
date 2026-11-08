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

// Function: FUN_001a5b10
// Address: 0x1a5b10 - 0x1a5bec
void FUN_001a5b10_0x1a5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5b10_0x1a5b10");
#endif

    switch (ctx->pc) {
        case 0x1a5bd8u: goto label_1a5bd8;
        default: break;
    }

    ctx->pc = 0x1a5b10u;

    // 0x1a5b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5b14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a5b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a5b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5b1c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a5b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a5b20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5b24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5b28: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x1a5b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x1a5b2c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a5b30: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1a5b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x1a5b34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a5b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a5b38: 0xfc8500c0  sd          $a1, 0xC0($a0)
    ctx->pc = 0x1a5b38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 5));
    // 0x1a5b3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a5b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a5b40: 0xfc8600c8  sd          $a2, 0xC8($a0)
    ctx->pc = 0x1a5b40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 200), GPR_U64(ctx, 6));
    // 0x1a5b44: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1a5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a5b48: 0xfc8700d0  sd          $a3, 0xD0($a0)
    ctx->pc = 0x1a5b48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 7));
    // 0x1a5b4c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1a5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1a5b50: 0xac8800e8  sw          $t0, 0xE8($a0)
    ctx->pc = 0x1a5b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 8));
    // 0x1a5b54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5b58: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b60: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a5b64: 0x24422bd0  addiu       $v0, $v0, 0x2BD0
    ctx->pc = 0x1a5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11216));
    // 0x1a5b68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5b6c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1a5b6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1a5b70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5b70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5b74: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1a5b74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a5b78: 0x0  nop
    ctx->pc = 0x1a5b78u;
    // NOP
    // 0x1a5b7c: 0xac8500ec  sw          $a1, 0xEC($a0)
    ctx->pc = 0x1a5b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 5));
    // 0x1a5b80: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5b84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5b88: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a5b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a5b8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5b90: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1a5b90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a5b94: 0x0  nop
    ctx->pc = 0x1a5b94u;
    // NOP
    // 0x1a5b98: 0xac8500f0  sw          $a1, 0xF0($a0)
    ctx->pc = 0x1a5b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 5));
    // 0x1a5b9c: 0xfc8300d8  sd          $v1, 0xD8($a0)
    ctx->pc = 0x1a5b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 216), GPR_U64(ctx, 3));
    // 0x1a5ba0: 0xac8a0100  sw          $t2, 0x100($a0)
    ctx->pc = 0x1a5ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 10));
    // 0x1a5ba4: 0xac8900fc  sw          $t1, 0xFC($a0)
    ctx->pc = 0x1a5ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 9));
    // 0x1a5ba8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5bac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5bb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5bb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5bb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5bb8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a5bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a5bbc: 0x0  nop
    ctx->pc = 0x1a5bbcu;
    // NOP
    // 0x1a5bc0: 0xac830104  sw          $v1, 0x104($a0)
    ctx->pc = 0x1a5bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
    // 0x1a5bc4: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x1a5bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1a5bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a5bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5bcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5bd0: 0xc046458  jal         func_119160
    ctx->pc = 0x1A5BD0u;
    SET_GPR_U32(ctx, 31, 0x1A5BD8u);
    ctx->pc = 0x1A5BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BD0u;
    // 0x1a5bd4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A5BD0u, 0x1A5BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BD8u;
label_1a5bd8:
    // 0x1a5bd8: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1a5bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x1a5bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5be4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BE4u;
        // 0x1a5be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5BECu;
}
