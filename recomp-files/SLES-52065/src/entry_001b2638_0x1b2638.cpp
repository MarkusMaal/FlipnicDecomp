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

// Function: entry_001b2638
// Address: 0x1b2638 - 0x1b2700
void entry_001b2638_0x1b2638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2638_0x1b2638");
#endif

    switch (ctx->pc) {
        case 0x1b265cu: goto label_1b265c;
        default: break;
    }

    ctx->pc = 0x1b2638u;

    // 0x1b2638: 0x8fa80240  lw          $t0, 0x240($sp)
    ctx->pc = 0x1b2638u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1b263c: 0x26e2ff80  addiu       $v0, $s7, -0x80
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b2640: 0x8fa90230  lw          $t1, 0x230($sp)
    ctx->pc = 0x1b2640u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1b2644: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b2644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2648: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b2648u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b264c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2650: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b2650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2654: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B2654u;
    SET_GPR_U32(ctx, 31, 0x1B265Cu);
    ctx->pc = 0x1B2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2654u;
    // 0x1b2658: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B2654u, 0x1B265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B265Cu;
label_1b265c:
    // 0x1b265c: 0x8ed600f8  lw          $s6, 0xF8($s6)
    ctx->pc = 0x1b265cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 248)));
    // 0x1b2660: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b2660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2664: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b2664u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2668: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b2668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b266c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b2670: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2674: 0xafa20320  sw          $v0, 0x320($sp)
    ctx->pc = 0x1b2674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 2));
    // 0x1b2678: 0x92c30063  lbu         $v1, 0x63($s6)
    ctx->pc = 0x1b2678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 99)));
    // 0x1b267c: 0xdec20060  ld          $v0, 0x60($s6)
    ctx->pc = 0x1b267cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x1b2680: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b2680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1b2684: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b2684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1b2688: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b2688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b268c: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b268cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b2690: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b2690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b2694: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1b2694u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2698: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b2698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b269c: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b269cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b26a0: 0x2f100  sll         $fp, $v0, 4
    ctx->pc = 0x1b26a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b26a4: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x1b26a4u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b26a8: 0x0  nop
    ctx->pc = 0x1b26a8u;
    // NOP
    // 0x1b26ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b26acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b26b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b26b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b26b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b26b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b26b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b26b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b26bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b26bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b26c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b26c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b26c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b26c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b26c8: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x1b26c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
    // 0x1b26cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b26ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b26d0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B26D0u;
    {
        const bool branch_taken_0x1b26d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26D0u;
        // 0x1b26d4: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26d0) {
            ctx->pc = 0x1B2728u;
            return;
        }
    }
    ctx->pc = 0x1B26D8u;
    // 0x1b26d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b26dc: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b26e0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b26e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b26e4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b26e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b26e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b26e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b26ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B26ECu;
    {
        const bool branch_taken_0x1b26ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b26ec) {
            ctx->pc = 0x1B2700u;
            return;
        }
    }
    ctx->pc = 0x1B26F4u;
    // 0x1b26f4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b26f8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b26f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b26fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b26fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b2700u;
}
