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

// Function: entry_001b293c
// Address: 0x1b293c - 0x1b2a10
void entry_001b293c_0x1b293c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b293c_0x1b293c");
#endif

    ctx->pc = 0x1b293cu;

    // 0x1b293c: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x1b293cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1b2940: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x1b2940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1b2944: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x1b2944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b2948: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1b2948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b294c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b294cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2950: 0x15d1021  addu        $v0, $t2, $sp
    ctx->pc = 0x1b2950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x1b2954: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x1b2954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x1b2958: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1b2958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1b295c: 0x1900ffe6  blez        $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1B295Cu;
    {
        const bool branch_taken_0x1b295c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1B2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B295Cu;
        // 0x1b2960: 0xac4303f8  sw          $v1, 0x3F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b295c) {
            ctx->pc = 0x1B28F8u;
            return;
        }
    }
    ctx->pc = 0x1B2964u;
    // 0x1b2964: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1b2964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1b2968: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b2968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b296c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b296cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2970: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b2970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2974: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b2978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b297c: 0xafa20330  sw          $v0, 0x330($sp)
    ctx->pc = 0x1b297cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 2));
    // 0x1b2980: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b2980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b2984: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1b2984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1b2988: 0x8c5100bc  lw          $s1, 0xBC($v0)
    ctx->pc = 0x1b2988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1b298c: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x1b298cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1b2990: 0x92230063  lbu         $v1, 0x63($s1)
    ctx->pc = 0x1b2990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
    // 0x1b2994: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b2994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b2998: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b2998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1b299c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b299cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b29a0: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b29a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1b29a4: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b29a8: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b29ac: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x1b29acu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b29b0: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1b29b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b29b4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1b29b4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b29b8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b29b8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b29bc: 0x0  nop
    ctx->pc = 0x1b29bcu;
    // NOP
    // 0x1b29c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b29c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b29c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b29c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b29c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b29c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b29cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b29ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b29d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b29d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b29d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b29d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b29d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b29d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b29dc: 0x441e0800  mfc1        $fp, $f1
    ctx->pc = 0x1b29dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x1b29e0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B29E0u;
    {
        const bool branch_taken_0x1b29e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29E0u;
        // 0x1b29e4: 0xafa20290  sw          $v0, 0x290($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29e0) {
            ctx->pc = 0x1B2A38u;
            return;
        }
    }
    ctx->pc = 0x1B29E8u;
    // 0x1b29e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b29ec: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b29f0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b29f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b29f4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b29f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b29f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b29f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b29fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B29FCu;
    {
        const bool branch_taken_0x1b29fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b29fc) {
            ctx->pc = 0x1B2A10u;
            return;
        }
    }
    ctx->pc = 0x1B2A04u;
    // 0x1b2a04: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b2a08: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2a0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b2a10u;
}
