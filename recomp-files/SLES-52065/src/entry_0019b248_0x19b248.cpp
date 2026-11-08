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

// Function: entry_0019b248
// Address: 0x19b248 - 0x19b274
void entry_0019b248_0x19b248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b248_0x19b248");
#endif

    ctx->pc = 0x19b248u;

    // 0x19b248: 0x8c850744  lw          $a1, 0x744($a0)
    ctx->pc = 0x19b248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1860)));
    // 0x19b24c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b250: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x19b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b254: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19b258: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19b25c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b25cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19b260: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19b264: 0x0  nop
    ctx->pc = 0x19b264u;
    // NOP
    // 0x19b268: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B268u;
    {
        const bool branch_taken_0x19b268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b268) {
            ctx->pc = 0x19B274u;
            return;
        }
    }
    ctx->pc = 0x19B270u;
    // 0x19b270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x19b274u;
}
