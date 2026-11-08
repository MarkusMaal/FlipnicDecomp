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

// Function: entry_00132e28
// Address: 0x132e28 - 0x132e58
void entry_00132e28_0x132e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132e28_0x132e28");
#endif

    ctx->pc = 0x132e28u;

    // 0x132e28: 0xca3821  addu        $a3, $a2, $t2
    ctx->pc = 0x132e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x132e2c: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x132e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x132e30: 0x15d3021  addu        $a2, $t2, $sp
    ctx->pc = 0x132e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x132e34: 0x24cc0120  addiu       $t4, $a2, 0x120
    ctx->pc = 0x132e34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x132e38: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x132e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e3c: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x132e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132e40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x132e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132e44: 0x0  nop
    ctx->pc = 0x132e44u;
    // NOP
    // 0x132e48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x132E48u;
    {
        const bool branch_taken_0x132e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x132e48) {
            ctx->pc = 0x132E58u;
            return;
        }
    }
    ctx->pc = 0x132E50u;
    // 0x132e50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x132E50u;
    {
        const bool branch_taken_0x132e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e50) {
            ctx->pc = 0x132E5Cu;
            return;
        }
    }
    ctx->pc = 0x132E58u;
}
