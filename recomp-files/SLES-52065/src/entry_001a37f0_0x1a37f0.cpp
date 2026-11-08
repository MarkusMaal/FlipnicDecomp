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

// Function: entry_001a37f0
// Address: 0x1a37f0 - 0x1a3828
void entry_001a37f0_0x1a37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a37f0_0x1a37f0");
#endif

    ctx->pc = 0x1a37f0u;

    // 0x1a37f0: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x1a37f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
    // 0x1a37f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a37f8: 0xae230674  sw          $v1, 0x674($s1)
    ctx->pc = 0x1a37f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 3));
    // 0x1a37fc: 0x8e230684  lw          $v1, 0x684($s1)
    ctx->pc = 0x1a37fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
    // 0x1a3800: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1a3800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3804: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1a3804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3808: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a3808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a380c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a380cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a3810: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a3814: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1a3814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1a3818: 0x0  nop
    ctx->pc = 0x1a3818u;
    // NOP
    // 0x1a381c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A381Cu;
    {
        const bool branch_taken_0x1a381c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a381c) {
            ctx->pc = 0x1A3828u;
            return;
        }
    }
    ctx->pc = 0x1A3824u;
    // 0x1a3824: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a3824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1a3828u;
}
