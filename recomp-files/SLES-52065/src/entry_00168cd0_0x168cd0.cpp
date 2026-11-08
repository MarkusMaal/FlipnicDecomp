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

// Function: entry_00168cd0
// Address: 0x168cd0 - 0x168d00
void entry_00168cd0_0x168cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168cd0_0x168cd0");
#endif

    ctx->pc = 0x168cd0u;

    // 0x168cd0: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x168cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
    // 0x168cd4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x168cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168cd8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x168cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x168cdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x168cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168ce0: 0x0  nop
    ctx->pc = 0x168ce0u;
    // NOP
    // 0x168ce4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x168ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x168ce8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168ce8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x168cec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x168cecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x168cf0: 0x0  nop
    ctx->pc = 0x168cf0u;
    // NOP
    // 0x168cf4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x168CF4u;
    {
        const bool branch_taken_0x168cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168cf4) {
            ctx->pc = 0x168D00u;
            return;
        }
    }
    ctx->pc = 0x168CFCu;
    // 0x168cfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x168cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x168d00u;
}
