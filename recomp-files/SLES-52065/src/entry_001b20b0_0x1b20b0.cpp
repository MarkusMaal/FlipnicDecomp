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

// Function: entry_001b20b0
// Address: 0x1b20b0 - 0x1b2190
void entry_001b20b0_0x1b20b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b20b0_0x1b20b0");
#endif

    switch (ctx->pc) {
        case 0x1b20d4u: goto label_1b20d4;
        default: break;
    }

    ctx->pc = 0x1b20b0u;

    // 0x1b20b0: 0x8fa80180  lw          $t0, 0x180($sp)
    ctx->pc = 0x1b20b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b20b4: 0x26e2ff80  addiu       $v0, $s7, -0x80
    ctx->pc = 0x1b20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b20b8: 0x8fa90170  lw          $t1, 0x170($sp)
    ctx->pc = 0x1b20b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b20bc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b20bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20c0: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b20c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b20c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b20c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b20c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20cc: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B20CCu;
    SET_GPR_U32(ctx, 31, 0x1B20D4u);
    ctx->pc = 0x1B20D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20CCu;
    // 0x1b20d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B20CCu, 0x1B20D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20D4u;
label_1b20d4:
    // 0x1b20d4: 0x8fa20350  lw          $v0, 0x350($sp)
    ctx->pc = 0x1b20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1b20d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b20dc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1b20dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b20e0: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x1b20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
    // 0x1b20e4: 0xafa20360  sw          $v0, 0x360($sp)
    ctx->pc = 0x1b20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 2));
    // 0x1b20e8: 0x8ede0034  lw          $fp, 0x34($s6)
    ctx->pc = 0x1b20e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x1b20ec: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b20ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b20f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b20f4: 0xafa202f0  sw          $v0, 0x2F0($sp)
    ctx->pc = 0x1b20f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
    // 0x1b20f8: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b20f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b20fc: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b20fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b2100: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b2100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b2104: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b2104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b2108: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b2108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b210c: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b210cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b2110: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b2110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b2114: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b2118: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b2118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b211c: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1b211cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1b2120: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b2120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2124: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1b2124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x1b2128: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1b2128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1b212c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b212cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2130: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1b2130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1b2134: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b2134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b213c: 0x0  nop
    ctx->pc = 0x1b213cu;
    // NOP
    // 0x1b2140: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1b2140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1b2144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2148: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b2148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b214c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b214cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b2150: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b2150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2154: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b2158: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x1b2158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
    // 0x1b215c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b215cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2160: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2160u;
    {
        const bool branch_taken_0x1b2160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2160u;
        // 0x1b2164: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2160) {
            ctx->pc = 0x1B21B8u;
            return;
        }
    }
    ctx->pc = 0x1B2168u;
    // 0x1b2168: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b216c: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b216cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b2170: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b2170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b2174: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2178: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b217c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B217Cu;
    {
        const bool branch_taken_0x1b217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b217c) {
            ctx->pc = 0x1B2190u;
            return;
        }
    }
    ctx->pc = 0x1B2184u;
    // 0x1b2184: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b2188: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b218c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b218cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b2190u;
}
