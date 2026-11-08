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

// Function: caseD_1
// Address: 0x1943e0 - 0x194408
void caseD_1_0x1943e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1943e0");
#endif

    ctx->pc = 0x1943e0u;

    // 0x1943e0: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1943e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1943e4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1943e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1943e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1943e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1943ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1943ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1943f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1943f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1943f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1943f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1943f8: 0x0  nop
    ctx->pc = 0x1943f8u;
    // NOP
    // 0x1943fc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1943FCu;
    {
        const bool branch_taken_0x1943fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1943fc) {
            ctx->pc = 0x194408u;
            return;
        }
    }
    ctx->pc = 0x194404u;
    // 0x194404: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x194408u;
}
