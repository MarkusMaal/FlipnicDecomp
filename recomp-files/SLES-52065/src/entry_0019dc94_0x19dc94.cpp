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

// Function: entry_0019dc94
// Address: 0x19dc94 - 0x19dcc4
void entry_0019dc94_0x19dc94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc94_0x19dc94");
#endif

    ctx->pc = 0x19dc94u;

    // 0x19dc94: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x19dc98: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19dc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc9c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x19dc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dca0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19dca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19dca4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19dca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19dca8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19dca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19dcac: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19dcacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19dcb0: 0x0  nop
    ctx->pc = 0x19dcb0u;
    // NOP
    // 0x19dcb4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DCB4u;
    {
        const bool branch_taken_0x19dcb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCB4u;
        // 0x19dcb8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dcb4) {
            ctx->pc = 0x19DCC4u;
            return;
        }
    }
    ctx->pc = 0x19DCBCu;
    // 0x19dcbc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19dcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19dcc0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19dcc4u;
}
