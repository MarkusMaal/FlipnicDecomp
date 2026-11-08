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

// Function: entry_0016c610
// Address: 0x16c610 - 0x16c654
void entry_0016c610_0x16c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c610_0x16c610");
#endif

    ctx->pc = 0x16c610u;

    // 0x16c610: 0xc4a101c0  lwc1        $f1, 0x1C0($a1)
    ctx->pc = 0x16c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c614: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16c614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16c618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c61c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x16c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16c620: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16c620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16c624: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x16c624u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x16c628: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16c628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c62c: 0x0  nop
    ctx->pc = 0x16c62cu;
    // NOP
    // 0x16c630: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x16C630u;
    {
        const bool branch_taken_0x16c630 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C630u;
        // 0x16c634: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c630) {
            ctx->pc = 0x16C654u;
            return;
        }
    }
    ctx->pc = 0x16C638u;
    // 0x16c638: 0xc4800210  lwc1        $f0, 0x210($a0)
    ctx->pc = 0x16c638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c63c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c63cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c640: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x16c640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c644: 0x0  nop
    ctx->pc = 0x16c644u;
    // NOP
    // 0x16c648: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16C648u;
    {
        const bool branch_taken_0x16c648 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C648u;
        // 0x16c64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c648) {
            ctx->pc = 0x16C654u;
            return;
        }
    }
    ctx->pc = 0x16C650u;
    // 0x16c650: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16c654u;
}
