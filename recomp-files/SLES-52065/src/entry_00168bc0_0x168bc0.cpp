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

// Function: entry_00168bc0
// Address: 0x168bc0 - 0x168bec
void entry_00168bc0_0x168bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168bc0_0x168bc0");
#endif

    ctx->pc = 0x168bc0u;

    // 0x168bc0: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x168bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x168bc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x168bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168bc8: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x168BC8u;
    {
        const bool branch_taken_0x168bc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x168bc8) {
            ctx->pc = 0x168BECu;
            return;
        }
    }
    ctx->pc = 0x168BD0u;
    // 0x168bd0: 0xc4810230  lwc1        $f1, 0x230($a0)
    ctx->pc = 0x168bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168bd4: 0xc4800234  lwc1        $f0, 0x234($a0)
    ctx->pc = 0x168bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168bdc: 0x0  nop
    ctx->pc = 0x168bdcu;
    // NOP
    // 0x168be0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x168BE0u;
    {
        const bool branch_taken_0x168be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x168BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BE0u;
        // 0x168be4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168be0) {
            ctx->pc = 0x168BECu;
            return;
        }
    }
    ctx->pc = 0x168BE8u;
    // 0x168be8: 0xac8301d4  sw          $v1, 0x1D4($a0)
    ctx->pc = 0x168be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 3));
    ctx->pc = 0x168becu;
}
