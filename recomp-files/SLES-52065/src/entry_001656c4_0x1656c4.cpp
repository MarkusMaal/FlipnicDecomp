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

// Function: entry_001656c4
// Address: 0x1656c4 - 0x1656e8
void entry_001656c4_0x1656c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001656c4_0x1656c4");
#endif

    ctx->pc = 0x1656c4u;

    // 0x1656c4: 0x2662821  addu        $a1, $s3, $a2
    ctx->pc = 0x1656c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1656c8: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1656c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1656cc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1656ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1656d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1656d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1656d4: 0x0  nop
    ctx->pc = 0x1656d4u;
    // NOP
    // 0x1656d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1656D8u;
    {
        const bool branch_taken_0x1656d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1656d8) {
            ctx->pc = 0x1656E8u;
            return;
        }
    }
    ctx->pc = 0x1656E0u;
    // 0x1656e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1656E0u;
    {
        const bool branch_taken_0x1656e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656E0u;
        // 0x1656e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656e0) {
            ctx->pc = 0x165704u;
            return;
        }
    }
    ctx->pc = 0x1656E8u;
}
