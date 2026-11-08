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

// Function: entry_0019dcd0
// Address: 0x19dcd0 - 0x19dcfc
void entry_0019dcd0_0x19dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dcd0_0x19dcd0");
#endif

    ctx->pc = 0x19dcd0u;

    // 0x19dcd0: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19dcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dcd4: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x19dcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dcd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19dcd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19dcdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19dcdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19dce0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19dce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19dce4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19dce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19dce8: 0x0  nop
    ctx->pc = 0x19dce8u;
    // NOP
    // 0x19dcec: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DCECu;
    {
        const bool branch_taken_0x19dcec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCECu;
        // 0x19dcf0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dcec) {
            ctx->pc = 0x19DCFCu;
            return;
        }
    }
    ctx->pc = 0x19DCF4u;
    // 0x19dcf4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19dcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19dcf8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19dcfcu;
}
