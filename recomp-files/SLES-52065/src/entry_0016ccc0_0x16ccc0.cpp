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

// Function: entry_0016ccc0
// Address: 0x16ccc0 - 0x16ccec
void entry_0016ccc0_0x16ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ccc0_0x16ccc0");
#endif

    ctx->pc = 0x16ccc0u;

    // 0x16ccc0: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ccc4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16ccc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16ccc8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16ccc8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16cccc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16ccd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ccd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ccd4: 0x0  nop
    ctx->pc = 0x16ccd4u;
    // NOP
    // 0x16ccd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ccd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ccdc: 0x0  nop
    ctx->pc = 0x16ccdcu;
    // NOP
    // 0x16cce0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16CCE0u;
    {
        const bool branch_taken_0x16cce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCE0u;
        // 0x16cce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cce0) {
            ctx->pc = 0x16CCECu;
            return;
        }
    }
    ctx->pc = 0x16CCE8u;
    // 0x16cce8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16ccecu;
}
