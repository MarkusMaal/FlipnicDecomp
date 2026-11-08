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

// Function: entry_00115a9c
// Address: 0x115a9c - 0x115ac8
void entry_00115a9c_0x115a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115a9c_0x115a9c");
#endif

    ctx->pc = 0x115a9cu;

    // 0x115a9c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x115a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115aa0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x115aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x115aa4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x115aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115aa8: 0x0  nop
    ctx->pc = 0x115aa8u;
    // NOP
    // 0x115aac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x115aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x115ab0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115ab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x115ab4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x115ab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x115ab8: 0x0  nop
    ctx->pc = 0x115ab8u;
    // NOP
    // 0x115abc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x115ABCu;
    {
        const bool branch_taken_0x115abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115abc) {
            ctx->pc = 0x115AC8u;
            return;
        }
    }
    ctx->pc = 0x115AC4u;
    // 0x115ac4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x115ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x115ac8u;
}
