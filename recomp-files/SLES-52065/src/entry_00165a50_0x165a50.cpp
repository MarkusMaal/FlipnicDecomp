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

// Function: entry_00165a50
// Address: 0x165a50 - 0x165a70
void entry_00165a50_0x165a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a50_0x165a50");
#endif

    ctx->pc = 0x165a50u;

    // 0x165a50: 0xc4800210  lwc1        $f0, 0x210($a0)
    ctx->pc = 0x165a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165a54: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x165a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x165a58: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x165a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165a5c: 0x0  nop
    ctx->pc = 0x165a5cu;
    // NOP
    // 0x165a60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x165A60u;
    {
        const bool branch_taken_0x165a60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x165A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A60u;
        // 0x165a64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a60) {
            ctx->pc = 0x165A70u;
            return;
        }
    }
    ctx->pc = 0x165A68u;
    // 0x165a68: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x165A68u;
    {
        const bool branch_taken_0x165a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A68u;
        // 0x165a6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a68) {
            ctx->pc = 0x165A70u;
            return;
        }
    }
    ctx->pc = 0x165A70u;
}
