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

// Function: entry_0019dd78
// Address: 0x19dd78 - 0x19dda8
void entry_0019dd78_0x19dd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dd78_0x19dd78");
#endif

    ctx->pc = 0x19dd78u;

    // 0x19dd78: 0xaea60990  sw          $a2, 0x990($s5)
    ctx->pc = 0x19dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2448), GPR_U32(ctx, 6));
    // 0x19dd7c: 0xaea6032c  sw          $a2, 0x32C($s5)
    ctx->pc = 0x19dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 812), GPR_U32(ctx, 6));
    // 0x19dd80: 0xc6a10328  lwc1        $f1, 0x328($s5)
    ctx->pc = 0x19dd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dd84: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dd88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19dd88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19dd8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19dd8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19dd90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19dd90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19dd94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19dd94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19dd98: 0x0  nop
    ctx->pc = 0x19dd98u;
    // NOP
    // 0x19dd9c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DD9Cu;
    {
        const bool branch_taken_0x19dd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dd9c) {
            ctx->pc = 0x19DDA8u;
            return;
        }
    }
    ctx->pc = 0x19DDA4u;
    // 0x19dda4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x19dda8u;
}
