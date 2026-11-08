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

// Function: entry_0013e770
// Address: 0x13e770 - 0x13e7a4
void entry_0013e770_0x13e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e770_0x13e770");
#endif

    ctx->pc = 0x13e770u;

    // 0x13e770: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x13e770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x13e774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e778: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e77c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x13e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e780: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x13e780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13e784: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13e784u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e788: 0x0  nop
    ctx->pc = 0x13e788u;
    // NOP
    // 0x13e78c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13e790: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13e790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e794: 0x0  nop
    ctx->pc = 0x13e794u;
    // NOP
    // 0x13e798: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13E798u;
    {
        const bool branch_taken_0x13e798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E798u;
        // 0x13e79c: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e798) {
            ctx->pc = 0x13E7A4u;
            return;
        }
    }
    ctx->pc = 0x13E7A0u;
    // 0x13e7a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13e7a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13e7a4u;
}
