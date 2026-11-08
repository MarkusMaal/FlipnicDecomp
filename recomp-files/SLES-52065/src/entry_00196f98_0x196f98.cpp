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

// Function: entry_00196f98
// Address: 0x196f98 - 0x196fd4
void entry_00196f98_0x196f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196f98_0x196f98");
#endif

    ctx->pc = 0x196f98u;

    // 0x196f98: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x196f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x196f9c: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x196fa0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x196fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x196fa4: 0xaea206d4  sw          $v0, 0x6D4($s5)
    ctx->pc = 0x196fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1748), GPR_U32(ctx, 2));
    // 0x196fa8: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x196fac: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x196facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196fb0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x196fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196fb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x196fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x196fb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196fbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196fbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196fc0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x196fc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x196fc4: 0x0  nop
    ctx->pc = 0x196fc4u;
    // NOP
    // 0x196fc8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x196FC8u;
    {
        const bool branch_taken_0x196fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196fc8) {
            ctx->pc = 0x196FD4u;
            return;
        }
    }
    ctx->pc = 0x196FD0u;
    // 0x196fd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x196fd4u;
}
