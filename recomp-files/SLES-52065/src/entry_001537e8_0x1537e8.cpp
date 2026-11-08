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

// Function: entry_001537e8
// Address: 0x1537e8 - 0x153844
void entry_001537e8_0x1537e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001537e8_0x1537e8");
#endif

    ctx->pc = 0x1537e8u;

    // 0x1537e8: 0x0  nop
    ctx->pc = 0x1537e8u;
    // NOP
    // 0x1537ec: 0x0  nop
    ctx->pc = 0x1537ecu;
    // NOP
    // 0x1537f0: 0x0  nop
    ctx->pc = 0x1537f0u;
    // NOP
    // 0x1537f4: 0x46040104  c1          0x40104
    ctx->pc = 0x1537f4u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x1537f8: 0x46050802  mul.s       $f0, $f1, $f5
    ctx->pc = 0x1537f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1537fc: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1537fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x153800: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x153800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x153804: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x153804u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153808: 0x0  nop
    ctx->pc = 0x153808u;
    // NOP
    // 0x15380c: 0x0  nop
    ctx->pc = 0x15380cu;
    // NOP
    // 0x153810: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153814: 0x0  nop
    ctx->pc = 0x153814u;
    // NOP
    // 0x153818: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x153818u;
    {
        const bool branch_taken_0x153818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153818u;
        // 0x15381c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153818) {
            ctx->pc = 0x153848u;
            return;
        }
    }
    ctx->pc = 0x153820u;
    // 0x153820: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153828: 0x0  nop
    ctx->pc = 0x153828u;
    // NOP
    // 0x15382c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15382cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153830: 0x0  nop
    ctx->pc = 0x153830u;
    // NOP
    // 0x153834: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153834u;
    {
        const bool branch_taken_0x153834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153834) {
            ctx->pc = 0x153844u;
            return;
        }
    }
    ctx->pc = 0x15383Cu;
    // 0x15383c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15383Cu;
    {
        const bool branch_taken_0x15383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15383c) {
            ctx->pc = 0x15384Cu;
            return;
        }
    }
    ctx->pc = 0x153844u;
}
