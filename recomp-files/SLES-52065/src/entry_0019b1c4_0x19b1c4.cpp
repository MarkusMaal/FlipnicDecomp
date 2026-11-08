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

// Function: entry_0019b1c4
// Address: 0x19b1c4 - 0x19b1f0
void entry_0019b1c4_0x19b1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b1c4_0x19b1c4");
#endif

    ctx->pc = 0x19b1c4u;

    // 0x19b1c4: 0x8c8506c0  lw          $a1, 0x6C0($a0)
    ctx->pc = 0x19b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1728)));
    // 0x19b1c8: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19b1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b1cc: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x19b1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b1d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19b1d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19b1d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b1d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19b1dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b1dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19b1e0: 0x0  nop
    ctx->pc = 0x19b1e0u;
    // NOP
    // 0x19b1e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B1E4u;
    {
        const bool branch_taken_0x19b1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b1e4) {
            ctx->pc = 0x19B1F0u;
            return;
        }
    }
    ctx->pc = 0x19B1ECu;
    // 0x19b1ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x19b1f0u;
}
