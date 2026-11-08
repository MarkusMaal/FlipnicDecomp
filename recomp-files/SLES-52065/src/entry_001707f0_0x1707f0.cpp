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

// Function: entry_001707f0
// Address: 0x1707f0 - 0x170824
void entry_001707f0_0x1707f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001707f0_0x1707f0");
#endif

    ctx->pc = 0x1707f0u;

    // 0x1707f0: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1707f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1707f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1707f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1707f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1707f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1707fc: 0x0  nop
    ctx->pc = 0x1707fcu;
    // NOP
    // 0x170800: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x170800u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x170804: 0x0  nop
    ctx->pc = 0x170804u;
    // NOP
    // 0x170808: 0x0  nop
    ctx->pc = 0x170808u;
    // NOP
    // 0x17080c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17080cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170810: 0x0  nop
    ctx->pc = 0x170810u;
    // NOP
    // 0x170814: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x170814u;
    {
        const bool branch_taken_0x170814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170814u;
        // 0x170818: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170814) {
            ctx->pc = 0x170824u;
            return;
        }
    }
    ctx->pc = 0x17081Cu;
    // 0x17081c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17081Cu;
    {
        const bool branch_taken_0x17081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17081Cu;
        // 0x170820: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17081c) {
            ctx->pc = 0x170840u;
            return;
        }
    }
    ctx->pc = 0x170824u;
}
