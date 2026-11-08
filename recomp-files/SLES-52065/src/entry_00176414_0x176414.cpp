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

// Function: entry_00176414
// Address: 0x176414 - 0x176434
void entry_00176414_0x176414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176414_0x176414");
#endif

    ctx->pc = 0x176414u;

    // 0x176414: 0x0  nop
    ctx->pc = 0x176414u;
    // NOP
    // 0x176418: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x176418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17641c: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x17641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176420: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x176420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176424: 0x0  nop
    ctx->pc = 0x176424u;
    // NOP
    // 0x176428: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x176428u;
    {
        const bool branch_taken_0x176428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176428u;
        // 0x17642c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176428) {
            ctx->pc = 0x176434u;
            return;
        }
    }
    ctx->pc = 0x176430u;
    // 0x176430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176434u;
}
