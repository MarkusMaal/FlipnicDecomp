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

// Function: entry_00107854
// Address: 0x107854 - 0x107884
void entry_00107854_0x107854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107854_0x107854");
#endif

    ctx->pc = 0x107854u;

    // 0x107854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x107854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107858: 0x0  nop
    ctx->pc = 0x107858u;
    // NOP
    // 0x10785c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x10785cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107860: 0x0  nop
    ctx->pc = 0x107860u;
    // NOP
    // 0x107864: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x107864u;
    {
        const bool branch_taken_0x107864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107864u;
        // 0x107868: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107864) {
            ctx->pc = 0x107884u;
            return;
        }
    }
    ctx->pc = 0x10786Cu;
    // 0x10786c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x10786cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x107870: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x107870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x107874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x107874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107878: 0x0  nop
    ctx->pc = 0x107878u;
    // NOP
    // 0x10787c: 0x46150540  add.s       $f21, $f0, $f21
    ctx->pc = 0x10787cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x107880: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x107880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    ctx->pc = 0x107884u;
}
