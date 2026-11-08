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

// Function: entry_00176590
// Address: 0x176590 - 0x1765b0
void entry_00176590_0x176590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176590_0x176590");
#endif

    ctx->pc = 0x176590u;

    // 0x176590: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x176590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176594: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x176594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17659c: 0x0  nop
    ctx->pc = 0x17659cu;
    // NOP
    // 0x1765a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1765A0u;
    {
        const bool branch_taken_0x1765a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1765A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765A0u;
        // 0x1765a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765a0) {
            ctx->pc = 0x1765B0u;
            return;
        }
    }
    ctx->pc = 0x1765A8u;
    // 0x1765a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1765A8u;
    {
        const bool branch_taken_0x1765a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765a8) {
            ctx->pc = 0x176618u;
            return;
        }
    }
    ctx->pc = 0x1765B0u;
}
