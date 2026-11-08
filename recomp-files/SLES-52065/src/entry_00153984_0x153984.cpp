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

// Function: entry_00153984
// Address: 0x153984 - 0x1539c8
void entry_00153984_0x153984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153984_0x153984");
#endif

    ctx->pc = 0x153984u;

    // 0x153984: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x153984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x153988: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x153988u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x15398c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15398cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153990: 0x0  nop
    ctx->pc = 0x153990u;
    // NOP
    // 0x153994: 0x0  nop
    ctx->pc = 0x153994u;
    // NOP
    // 0x153998: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15399c: 0x0  nop
    ctx->pc = 0x15399cu;
    // NOP
    // 0x1539a0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1539A0u;
    {
        const bool branch_taken_0x1539a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1539A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539A0u;
        // 0x1539a4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539a0) {
            ctx->pc = 0x1539C8u;
            return;
        }
    }
    ctx->pc = 0x1539A8u;
    // 0x1539a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1539a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1539ac: 0x0  nop
    ctx->pc = 0x1539acu;
    // NOP
    // 0x1539b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1539b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1539b4: 0x0  nop
    ctx->pc = 0x1539b4u;
    // NOP
    // 0x1539b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1539B8u;
    {
        const bool branch_taken_0x1539b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1539b8) {
            ctx->pc = 0x1539C8u;
            return;
        }
    }
    ctx->pc = 0x1539C0u;
    // 0x1539c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1539C0u;
    {
        const bool branch_taken_0x1539c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1539c0) {
            ctx->pc = 0x1539D0u;
            return;
        }
    }
    ctx->pc = 0x1539C8u;
}
