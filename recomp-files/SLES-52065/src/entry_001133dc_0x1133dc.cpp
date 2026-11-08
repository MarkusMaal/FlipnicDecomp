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

// Function: entry_001133dc
// Address: 0x1133dc - 0x11340c
void entry_001133dc_0x1133dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001133dc_0x1133dc");
#endif

    ctx->pc = 0x1133dcu;

    // 0x1133dc: 0x0  nop
    ctx->pc = 0x1133dcu;
    // NOP
    // 0x1133e0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1133e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x1133e4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1133e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1133e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1133e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1133ec: 0x0  nop
    ctx->pc = 0x1133ecu;
    // NOP
    // 0x1133f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1133f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1133f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1133f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1133f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1133f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1133fc: 0x0  nop
    ctx->pc = 0x1133fcu;
    // NOP
    // 0x113400: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x113400u;
    {
        const bool branch_taken_0x113400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x113400) {
            ctx->pc = 0x11340Cu;
            return;
        }
    }
    ctx->pc = 0x113408u;
    // 0x113408: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x113408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x11340cu;
}
