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

// Function: entry_00160dd8
// Address: 0x160dd8 - 0x160e68
void entry_00160dd8_0x160dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160dd8_0x160dd8");
#endif

    ctx->pc = 0x160dd8u;

    // 0x160dd8: 0xec7021  addu        $t6, $a3, $t4
    ctx->pc = 0x160dd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x160ddc: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x160ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x160de0: 0x85c60002  lh          $a2, 0x2($t6)
    ctx->pc = 0x160de0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x160de4: 0x24780028  addiu       $t8, $v1, 0x28
    ctx->pc = 0x160de4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x160de8: 0x85c50000  lh          $a1, 0x0($t6)
    ctx->pc = 0x160de8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x160dec: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x160decu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160df0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160df0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160df4: 0x0  nop
    ctx->pc = 0x160df4u;
    // NOP
    // 0x160df8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x160df8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x160dfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x160dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x160e00: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x160e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x160e04: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x160e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x160e08: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x160e08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x160e0c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x160e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x160e10: 0x460d0841  sub.s       $f1, $f1, $f13
    ctx->pc = 0x160e10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x160e14: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x160e14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x160e18: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x160e18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x160e1c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x160e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x160e20: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x160e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x160e24: 0x85c50006  lh          $a1, 0x6($t6)
    ctx->pc = 0x160e24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x160e28: 0x85c30004  lh          $v1, 0x4($t6)
    ctx->pc = 0x160e28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x160e2c: 0x14a30015  bne         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x160E2Cu;
    {
        const bool branch_taken_0x160e2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x160E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E2Cu;
        // 0x160e30: 0x25cf0002  addiu       $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e2c) {
            ctx->pc = 0x160E84u;
            return;
        }
    }
    ctx->pc = 0x160E34u;
    // 0x160e34: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x160e34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x160e38: 0x1543000b  bne         $t2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x160E38u;
    {
        const bool branch_taken_0x160e38 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x160e38) {
            ctx->pc = 0x160E68u;
            return;
        }
    }
    ctx->pc = 0x160E40u;
    // 0x160e40: 0x85e30000  lh          $v1, 0x0($t7)
    ctx->pc = 0x160e40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x160e44: 0x15630008  bne         $t3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x160E44u;
    {
        const bool branch_taken_0x160e44 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        if (branch_taken_0x160e44) {
            ctx->pc = 0x160E68u;
            return;
        }
    }
    ctx->pc = 0x160E4Cu;
    // 0x160e4c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x160e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x160e50: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x160e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x160e54: 0x90630041  lbu         $v1, 0x41($v1)
    ctx->pc = 0x160e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
    // 0x160e58: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x160E58u;
    {
        const bool branch_taken_0x160e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160e58) {
            ctx->pc = 0x160E84u;
            return;
        }
    }
    ctx->pc = 0x160E60u;
    // 0x160e60: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x160E60u;
    {
        const bool branch_taken_0x160e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e60) {
            ctx->pc = 0x160ECCu;
            return;
        }
    }
    ctx->pc = 0x160E68u;
}
