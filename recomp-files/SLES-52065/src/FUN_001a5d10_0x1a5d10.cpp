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

// Function: FUN_001a5d10
// Address: 0x1a5d10 - 0x1a5dc0
void FUN_001a5d10_0x1a5d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5d10_0x1a5d10");
#endif

    switch (ctx->pc) {
        case 0x1a5dacu: goto label_1a5dac;
        default: break;
    }

    ctx->pc = 0x1a5d10u;

    // 0x1a5d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5d14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a5d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5d1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a5d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a5d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5d24: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a5d28: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x1a5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x1a5d2c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a5d30: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1a5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x1a5d34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a5d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a5d38: 0xfc8500c0  sd          $a1, 0xC0($a0)
    ctx->pc = 0x1a5d38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 5));
    // 0x1a5d3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5d40: 0xfc8600c8  sd          $a2, 0xC8($a0)
    ctx->pc = 0x1a5d40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 200), GPR_U64(ctx, 6));
    // 0x1a5d44: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1a5d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a5d48: 0xfc8700d0  sd          $a3, 0xD0($a0)
    ctx->pc = 0x1a5d48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 7));
    // 0x1a5d4c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a5d50: 0xac8800e8  sw          $t0, 0xE8($a0)
    ctx->pc = 0x1a5d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 8));
    // 0x1a5d54: 0x24422bd0  addiu       $v0, $v0, 0x2BD0
    ctx->pc = 0x1a5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11216));
    // 0x1a5d58: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5d60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5d64: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a5d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a5d68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5d68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5d6c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1a5d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a5d70: 0x0  nop
    ctx->pc = 0x1a5d70u;
    // NOP
    // 0x1a5d74: 0xac8500ec  sw          $a1, 0xEC($a0)
    ctx->pc = 0x1a5d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 5));
    // 0x1a5d78: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5d7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5d80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5d84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5d84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5d88: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1a5d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a5d8c: 0x0  nop
    ctx->pc = 0x1a5d8cu;
    // NOP
    // 0x1a5d90: 0xac8500f0  sw          $a1, 0xF0($a0)
    ctx->pc = 0x1a5d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 5));
    // 0x1a5d94: 0xfc8300d8  sd          $v1, 0xD8($a0)
    ctx->pc = 0x1a5d94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 216), GPR_U64(ctx, 3));
    // 0x1a5d98: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x1a5d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1a5d9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5da4: 0xc046458  jal         func_119160
    ctx->pc = 0x1A5DA4u;
    SET_GPR_U32(ctx, 31, 0x1A5DACu);
    ctx->pc = 0x1A5DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5DA4u;
    // 0x1a5da8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A5DA4u, 0x1A5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DACu;
label_1a5dac:
    // 0x1a5dac: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1a5dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x1a5db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5db8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DB8u;
        // 0x1a5dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5DC0u;
}
