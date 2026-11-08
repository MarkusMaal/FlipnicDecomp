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

// Function: entry_001b2284
// Address: 0x1b2284 - 0x1b235c
void entry_001b2284_0x1b2284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2284_0x1b2284");
#endif

    switch (ctx->pc) {
        case 0x1b22a8u: goto label_1b22a8;
        default: break;
    }

    ctx->pc = 0x1b2284u;

    // 0x1b2284: 0x8fa801c0  lw          $t0, 0x1C0($sp)
    ctx->pc = 0x1b2284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1b2288: 0x26e2ff80  addiu       $v0, $s7, -0x80
    ctx->pc = 0x1b2288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b228c: 0x8fa901b0  lw          $t1, 0x1B0($sp)
    ctx->pc = 0x1b228cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1b2290: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b2290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2294: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b2294u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2298: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b229c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b229cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22a0: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B22A0u;
    SET_GPR_U32(ctx, 31, 0x1B22A8u);
    ctx->pc = 0x1B22A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22A0u;
    // 0x1b22a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B22A0u, 0x1B22A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22A8u;
label_1b22a8:
    // 0x1b22a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b22ac: 0x8ede00f8  lw          $fp, 0xF8($s6)
    ctx->pc = 0x1b22acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 248)));
    // 0x1b22b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b22b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b22b4: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b22b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b22b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b22bc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b22c0: 0xafa20300  sw          $v0, 0x300($sp)
    ctx->pc = 0x1b22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 2));
    // 0x1b22c4: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b22c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b22c8: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b22c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b22cc: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b22ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b22d0: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b22d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b22d4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b22d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b22d8: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b22d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b22dc: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b22dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b22e0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b22e4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b22e8: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x1b22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x1b22ec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b22f0: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x1b22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x1b22f4: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1b22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1b22f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b22f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b22fc: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x1b22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1b2300: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b2300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2308: 0x0  nop
    ctx->pc = 0x1b2308u;
    // NOP
    // 0x1b230c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b230cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b2310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2314: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b2314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b2318: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b231c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b231cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2320: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2320u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b2324: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x1b2324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x1b2328: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b2328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b232c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B232Cu;
    {
        const bool branch_taken_0x1b232c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B232Cu;
        // 0x1b2330: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b232c) {
            ctx->pc = 0x1B2384u;
            return;
        }
    }
    ctx->pc = 0x1B2334u;
    // 0x1b2334: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2338: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b2338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b233c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b233cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b2340: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2344: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2348: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2348u;
    {
        const bool branch_taken_0x1b2348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2348) {
            ctx->pc = 0x1B235Cu;
            return;
        }
    }
    ctx->pc = 0x1B2350u;
    // 0x1b2350: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b2354: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2358: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b235cu;
}
