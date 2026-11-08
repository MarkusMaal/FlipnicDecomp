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

// Function: entry_001b1d18
// Address: 0x1b1d18 - 0x1b1df0
void entry_001b1d18_0x1b1d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1d18_0x1b1d18");
#endif

    ctx->pc = 0x1b1d18u;

    // 0x1b1d18: 0x8fa2038c  lw          $v0, 0x38C($sp)
    ctx->pc = 0x1b1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
    // 0x1b1d1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b1d20: 0x8fa203d4  lw          $v0, 0x3D4($sp)
    ctx->pc = 0x1b1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
    // 0x1b1d24: 0xafa20340  sw          $v0, 0x340($sp)
    ctx->pc = 0x1b1d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 2));
    // 0x1b1d28: 0x8fa2038c  lw          $v0, 0x38C($sp)
    ctx->pc = 0x1b1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
    // 0x1b1d2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1d30: 0xafa20350  sw          $v0, 0x350($sp)
    ctx->pc = 0x1b1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
    // 0x1b1d34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1d38: 0x8fa20350  lw          $v0, 0x350($sp)
    ctx->pc = 0x1b1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1b1d3c: 0x8ede00b8  lw          $fp, 0xB8($s6)
    ctx->pc = 0x1b1d3cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
    // 0x1b1d40: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b1d40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1d44: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1b1d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b1d48: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b1d4c: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x1b1d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
    // 0x1b1d50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1d54: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b1d54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b1d58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b1d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1d5c: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b1d5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b1d60: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b1d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b1d64: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b1d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b1d68: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b1d6c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b1d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b1d70: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b1d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b1d74: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b1d78: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b1d7c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1b1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1b1d80: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1d84: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1b1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1b1d88: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b1d8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1d90: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b1d94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b1d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b1d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1d9c: 0x0  nop
    ctx->pc = 0x1b1d9cu;
    // NOP
    // 0x1b1da0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b1da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b1da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b1da8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b1da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b1dac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b1db0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b1db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1db4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1db4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b1db8: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1b1db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1b1dbc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b1dbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1dc0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1DC0u;
    {
        const bool branch_taken_0x1b1dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DC0u;
        // 0x1b1dc4: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dc0) {
            ctx->pc = 0x1B1E18u;
            return;
        }
    }
    ctx->pc = 0x1B1DC8u;
    // 0x1b1dc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1dcc: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1dd0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1dd4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1dd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1ddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1DDCu;
    {
        const bool branch_taken_0x1b1ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ddc) {
            ctx->pc = 0x1B1DF0u;
            return;
        }
    }
    ctx->pc = 0x1B1DE4u;
    // 0x1b1de4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1de8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1dec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b1df0u;
}
