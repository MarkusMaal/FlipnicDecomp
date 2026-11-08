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

// Function: entry_00165cf8
// Address: 0x165cf8 - 0x165d18
void entry_00165cf8_0x165cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165cf8_0x165cf8");
#endif

    ctx->pc = 0x165cf8u;

    // 0x165cf8: 0xc4800210  lwc1        $f0, 0x210($a0)
    ctx->pc = 0x165cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165cfc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x165cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x165d00: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x165d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165d04: 0x0  nop
    ctx->pc = 0x165d04u;
    // NOP
    // 0x165d08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x165D08u;
    {
        const bool branch_taken_0x165d08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x165D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D08u;
        // 0x165d0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d08) {
            ctx->pc = 0x165D18u;
            return;
        }
    }
    ctx->pc = 0x165D10u;
    // 0x165d10: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x165D10u;
    {
        const bool branch_taken_0x165d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D10u;
        // 0x165d14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d10) {
            ctx->pc = 0x165D18u;
            return;
        }
    }
    ctx->pc = 0x165D18u;
}
