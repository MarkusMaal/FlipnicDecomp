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

// Function: entry_00114304
// Address: 0x114304 - 0x114340
void entry_00114304_0x114304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114304_0x114304");
#endif

    ctx->pc = 0x114304u;

    // 0x114304: 0x83828254  lb          $v0, -0x7DAC($gp)
    ctx->pc = 0x114304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935124)));
    // 0x114308: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114308u;
    {
        const bool branch_taken_0x114308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114308) {
            ctx->pc = 0x114340u;
            return;
        }
    }
    ctx->pc = 0x114310u;
    // 0x114310: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x114310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114314: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x114314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x114318: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x114318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11431c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x11431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x114320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114324: 0xa3828254  sb          $v0, -0x7DAC($gp)
    ctx->pc = 0x114324u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935124), (uint8_t)GPR_U32(ctx, 2));
    // 0x114328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11432c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11432cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x114330: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x114334: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x114334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114338: 0x0  nop
    ctx->pc = 0x114338u;
    // NOP
    // 0x11433c: 0xac22e4f8  sw          $v0, -0x1B08($at)
    ctx->pc = 0x11433cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960376), GPR_U32(ctx, 2));
    ctx->pc = 0x114340u;
}
