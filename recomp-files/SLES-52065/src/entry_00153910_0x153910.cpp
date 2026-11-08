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

// Function: entry_00153910
// Address: 0x153910 - 0x153984
void entry_00153910_0x153910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153910_0x153910");
#endif

    ctx->pc = 0x153910u;

    // 0x153910: 0x0  nop
    ctx->pc = 0x153910u;
    // NOP
    // 0x153914: 0x0  nop
    ctx->pc = 0x153914u;
    // NOP
    // 0x153918: 0x0  nop
    ctx->pc = 0x153918u;
    // NOP
    // 0x15391c: 0x460701c4  c1          0x701C4
    ctx->pc = 0x15391cu;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
    // 0x153920: 0x0  nop
    ctx->pc = 0x153920u;
    // NOP
    // 0x153924: 0x0  nop
    ctx->pc = 0x153924u;
    // NOP
    // 0x153928: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x153928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15392c: 0x0  nop
    ctx->pc = 0x15392cu;
    // NOP
    // 0x153930: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x153930u;
    {
        const bool branch_taken_0x153930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153930u;
        // 0x153934: 0x46002847  neg.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153930) {
            ctx->pc = 0x153984u;
            return;
        }
    }
    ctx->pc = 0x153938u;
    // 0x153938: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x153938u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x15393c: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x15393cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x153940: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x153940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x153944: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x153944u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153948: 0x0  nop
    ctx->pc = 0x153948u;
    // NOP
    // 0x15394c: 0x0  nop
    ctx->pc = 0x15394cu;
    // NOP
    // 0x153950: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153954: 0x0  nop
    ctx->pc = 0x153954u;
    // NOP
    // 0x153958: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x153958u;
    {
        const bool branch_taken_0x153958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153958u;
        // 0x15395c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153958) {
            ctx->pc = 0x1539CCu;
            return;
        }
    }
    ctx->pc = 0x153960u;
    // 0x153960: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153964: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153968: 0x0  nop
    ctx->pc = 0x153968u;
    // NOP
    // 0x15396c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15396cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153970: 0x0  nop
    ctx->pc = 0x153970u;
    // NOP
    // 0x153974: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x153974u;
    {
        const bool branch_taken_0x153974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153974) {
            ctx->pc = 0x1539C8u;
            return;
        }
    }
    ctx->pc = 0x15397Cu;
    // 0x15397c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15397Cu;
    {
        const bool branch_taken_0x15397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15397c) {
            ctx->pc = 0x1539D0u;
            return;
        }
    }
    ctx->pc = 0x153984u;
}
