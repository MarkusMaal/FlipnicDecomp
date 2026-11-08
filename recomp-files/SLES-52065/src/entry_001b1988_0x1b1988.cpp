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

// Function: entry_001b1988
// Address: 0x1b1988 - 0x1b1a4c
void entry_001b1988_0x1b1988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1988_0x1b1988");
#endif

    ctx->pc = 0x1b1988u;

    // 0x1b1988: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1b1988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1b198c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x1b198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b1990: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b1990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1998: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b199c: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x1b199cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
    // 0x1b19a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b19a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b19a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b19a8: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x1b19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1b19ac: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1b19acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1b19b0: 0x8c5e003c  lw          $fp, 0x3C($v0)
    ctx->pc = 0x1b19b0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1b19b4: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b19b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b19b8: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b19b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b19bc: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b19bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b19c0: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b19c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b19c4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b19c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b19c8: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b19c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b19cc: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b19ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b19d0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b19d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b19d4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b19d8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1b19d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1b19dc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b19e0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1b19e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1b19e4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b19e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b19e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b19ec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b19f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b19f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b19f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b19f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b19f8: 0x0  nop
    ctx->pc = 0x1b19f8u;
    // NOP
    // 0x1b19fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b19fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b1a00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b1a04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b1a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b1a08: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1a08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b1a0c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b1a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1a10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1a10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b1a14: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1b1a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1b1a18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b1a18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1a1c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1A1Cu;
    {
        const bool branch_taken_0x1b1a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A1Cu;
        // 0x1b1a20: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a1c) {
            ctx->pc = 0x1B1A74u;
            return;
        }
    }
    ctx->pc = 0x1B1A24u;
    // 0x1b1a24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1a28: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1a2c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1a30: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1a34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1a38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A38u;
    {
        const bool branch_taken_0x1b1a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a38) {
            ctx->pc = 0x1B1A4Cu;
            return;
        }
    }
    ctx->pc = 0x1B1A40u;
    // 0x1b1a40: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1a44: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1a48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b1a4cu;
}
