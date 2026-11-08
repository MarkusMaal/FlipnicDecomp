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

// Function: entry_001a4474
// Address: 0x1a4474 - 0x1a44a4
void entry_001a4474_0x1a4474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4474_0x1a4474");
#endif

    ctx->pc = 0x1a4474u;

    // 0x1a4474: 0x184000fd  blez        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x1A4474u;
    {
        const bool branch_taken_0x1a4474 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a4474) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A447Cu;
    // 0x1a447c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a447cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4480: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1a4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4484: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a4484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a4488: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a448c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a448cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a4490: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a4490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a4494: 0x0  nop
    ctx->pc = 0x1a4494u;
    // NOP
    // 0x1a4498: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4498u;
    {
        const bool branch_taken_0x1a4498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4498) {
            ctx->pc = 0x1A44A4u;
            return;
        }
    }
    ctx->pc = 0x1A44A0u;
    // 0x1a44a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1a44a4u;
}
