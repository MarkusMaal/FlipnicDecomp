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

// Function: entry_00153be4
// Address: 0x153be4 - 0x153c40
void entry_00153be4_0x153be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153be4_0x153be4");
#endif

    ctx->pc = 0x153be4u;

    // 0x153be4: 0x0  nop
    ctx->pc = 0x153be4u;
    // NOP
    // 0x153be8: 0x0  nop
    ctx->pc = 0x153be8u;
    // NOP
    // 0x153bec: 0x0  nop
    ctx->pc = 0x153becu;
    // NOP
    // 0x153bf0: 0x46050144  c1          0x50144
    ctx->pc = 0x153bf0u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x153bf4: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x153bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x153bf8: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x153bf8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x153bfc: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x153bfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x153c00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x153c00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153c04: 0x0  nop
    ctx->pc = 0x153c04u;
    // NOP
    // 0x153c08: 0x0  nop
    ctx->pc = 0x153c08u;
    // NOP
    // 0x153c0c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153c0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153c10: 0x0  nop
    ctx->pc = 0x153c10u;
    // NOP
    // 0x153c14: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x153C14u;
    {
        const bool branch_taken_0x153c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C14u;
        // 0x153c18: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c14) {
            ctx->pc = 0x153C44u;
            return;
        }
    }
    ctx->pc = 0x153C1Cu;
    // 0x153c1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153c20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153c24: 0x0  nop
    ctx->pc = 0x153c24u;
    // NOP
    // 0x153c28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153c28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153c2c: 0x0  nop
    ctx->pc = 0x153c2cu;
    // NOP
    // 0x153c30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153C30u;
    {
        const bool branch_taken_0x153c30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153c30) {
            ctx->pc = 0x153C40u;
            return;
        }
    }
    ctx->pc = 0x153C38u;
    // 0x153c38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x153C38u;
    {
        const bool branch_taken_0x153c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c38) {
            ctx->pc = 0x153C48u;
            return;
        }
    }
    ctx->pc = 0x153C40u;
}
