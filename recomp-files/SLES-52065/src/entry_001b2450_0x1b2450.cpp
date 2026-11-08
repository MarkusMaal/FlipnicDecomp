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

// Function: entry_001b2450
// Address: 0x1b2450 - 0x1b2544
void entry_001b2450_0x1b2450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2450_0x1b2450");
#endif

    switch (ctx->pc) {
        case 0x1b2474u: goto label_1b2474;
        default: break;
    }

    ctx->pc = 0x1b2450u;

    // 0x1b2450: 0x8fa80200  lw          $t0, 0x200($sp)
    ctx->pc = 0x1b2450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1b2454: 0x26e2ff80  addiu       $v0, $s7, -0x80
    ctx->pc = 0x1b2454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b2458: 0x8fa901f0  lw          $t1, 0x1F0($sp)
    ctx->pc = 0x1b2458u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1b245c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2460: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b2460u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2464: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2468: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b2468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b246c: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B246Cu;
    SET_GPR_U32(ctx, 31, 0x1B2474u);
    ctx->pc = 0x1B2470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B246Cu;
    // 0x1b2470: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B246Cu, 0x1B2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2474u;
label_1b2474:
    // 0x1b2474: 0x8fa20350  lw          $v0, 0x350($sp)
    ctx->pc = 0x1b2474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1b2478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b247c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1b247cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b2480: 0x8fa203dc  lw          $v0, 0x3DC($sp)
    ctx->pc = 0x1b2480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 988)));
    // 0x1b2484: 0xafa20370  sw          $v0, 0x370($sp)
    ctx->pc = 0x1b2484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 2));
    // 0x1b2488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b248c: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1b248cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1b2490: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b2490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2494: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b2494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2498: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b2498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b249c: 0xafa20310  sw          $v0, 0x310($sp)
    ctx->pc = 0x1b249cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 2));
    // 0x1b24a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b24a4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1b24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1b24a8: 0x8c5e007c  lw          $fp, 0x7C($v0)
    ctx->pc = 0x1b24a8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1b24ac: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b24acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b24b0: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b24b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b24b4: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b24b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b24b8: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b24b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b24bc: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b24bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b24c0: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b24c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b24c4: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b24c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b24c8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b24cc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b24d0: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x1b24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x1b24d4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b24d8: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x1b24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x1b24dc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1b24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1b24e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b24e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b24e4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x1b24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1b24e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b24e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b24ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b24ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b24f0: 0x0  nop
    ctx->pc = 0x1b24f0u;
    // NOP
    // 0x1b24f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b24f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b24f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b24f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b24fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b24fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b2500: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b2504: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b2504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2508: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b250c: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x1b250cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x1b2510: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b2510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2514: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2514u;
    {
        const bool branch_taken_0x1b2514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2514u;
        // 0x1b2518: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2514) {
            ctx->pc = 0x1B256Cu;
            return;
        }
    }
    ctx->pc = 0x1B251Cu;
    // 0x1b251c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2520: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b2520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b2524: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b2524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b2528: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b252c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b252cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2530u;
    {
        const bool branch_taken_0x1b2530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2530) {
            ctx->pc = 0x1B2544u;
            return;
        }
    }
    ctx->pc = 0x1B2538u;
    // 0x1b2538: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b253c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b253cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2540: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b2544u;
}
