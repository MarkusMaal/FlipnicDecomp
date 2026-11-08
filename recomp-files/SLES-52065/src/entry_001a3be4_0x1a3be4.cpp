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

// Function: entry_001a3be4
// Address: 0x1a3be4 - 0x1a3c1c
void entry_001a3be4_0x1a3be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3be4_0x1a3be4");
#endif

    ctx->pc = 0x1a3be4u;

    // 0x1a3be4: 0x8e23067c  lw          $v1, 0x67C($s1)
    ctx->pc = 0x1a3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
    // 0x1a3be8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3bec: 0xae23067c  sw          $v1, 0x67C($s1)
    ctx->pc = 0x1a3becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 3));
    // 0x1a3bf0: 0x8e230688  lw          $v1, 0x688($s1)
    ctx->pc = 0x1a3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
    // 0x1a3bf4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1a3bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3bf8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1a3bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3bfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a3bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a3c00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a3c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a3c04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3c04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a3c08: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a3c08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a3c0c: 0x0  nop
    ctx->pc = 0x1a3c0cu;
    // NOP
    // 0x1a3c10: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3C10u;
    {
        const bool branch_taken_0x1a3c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c10) {
            ctx->pc = 0x1A3C1Cu;
            return;
        }
    }
    ctx->pc = 0x1A3C18u;
    // 0x1a3c18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x1a3c1cu;
}
