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

// Function: entry_0010adcc
// Address: 0x10adcc - 0x10ae00
void entry_0010adcc_0x10adcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010adcc_0x10adcc");
#endif

    ctx->pc = 0x10adccu;

    // 0x10adcc: 0xae022324  sw          $v0, 0x2324($s0)
    ctx->pc = 0x10adccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8996), GPR_U32(ctx, 2));
    // 0x10add0: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x10add0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x10add4: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x10add4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x10add8: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x10add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10addc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10addcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ade0: 0x0  nop
    ctx->pc = 0x10ade0u;
    // NOP
    // 0x10ade4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10ade4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10ade8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10ade8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10adec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10adecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10adf0: 0x0  nop
    ctx->pc = 0x10adf0u;
    // NOP
    // 0x10adf4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10ADF4u;
    {
        const bool branch_taken_0x10adf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10adf4) {
            ctx->pc = 0x10AE00u;
            return;
        }
    }
    ctx->pc = 0x10ADFCu;
    // 0x10adfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x10ae00u;
}
