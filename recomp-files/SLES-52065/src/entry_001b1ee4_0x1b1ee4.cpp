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

// Function: entry_001b1ee4
// Address: 0x1b1ee4 - 0x1b1fbc
void entry_001b1ee4_0x1b1ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1ee4_0x1b1ee4");
#endif

    switch (ctx->pc) {
        case 0x1b1f08u: goto label_1b1f08;
        default: break;
    }

    ctx->pc = 0x1b1ee4u;

    // 0x1b1ee4: 0x8fa80140  lw          $t0, 0x140($sp)
    ctx->pc = 0x1b1ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b1ee8: 0x26e2fe80  addiu       $v0, $s7, -0x180
    ctx->pc = 0x1b1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966912));
    // 0x1b1eec: 0x8fa90130  lw          $t1, 0x130($sp)
    ctx->pc = 0x1b1eecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b1ef0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b1ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ef4: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b1ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1ef8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1efc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1efcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f00: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B1F00u;
    SET_GPR_U32(ctx, 31, 0x1B1F08u);
    ctx->pc = 0x1B1F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F00u;
    // 0x1b1f04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B1F00u, 0x1B1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F08u;
label_1b1f08:
    // 0x1b1f08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1f0c: 0x8ede00f8  lw          $fp, 0xF8($s6)
    ctx->pc = 0x1b1f0cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 248)));
    // 0x1b1f10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b1f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1f14: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b1f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1f1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b1f20: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x1b1f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
    // 0x1b1f24: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b1f24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b1f28: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b1f28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b1f2c: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b1f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b1f30: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b1f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b1f34: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b1f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b1f38: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b1f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b1f3c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b1f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b1f40: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b1f44: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b1f48: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x1b1f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x1b1f4c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1f50: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x1b1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x1b1f54: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1b1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b1f58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1f5c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1b1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b1f60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b1f60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b1f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1f68: 0x0  nop
    ctx->pc = 0x1b1f68u;
    // NOP
    // 0x1b1f6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b1f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b1f70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b1f74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b1f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b1f78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1f78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b1f7c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b1f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1f80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b1f84: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1b1f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1b1f88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b1f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1f8c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1F8Cu;
    {
        const bool branch_taken_0x1b1f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F8Cu;
        // 0x1b1f90: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f8c) {
            ctx->pc = 0x1B1FE4u;
            return;
        }
    }
    ctx->pc = 0x1B1F94u;
    // 0x1b1f94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1f98: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1f9c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1fa0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1fa4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1fa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1FA8u;
    {
        const bool branch_taken_0x1b1fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1fa8) {
            ctx->pc = 0x1B1FBCu;
            return;
        }
    }
    ctx->pc = 0x1B1FB0u;
    // 0x1b1fb0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1fb4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1fb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b1fbcu;
}
