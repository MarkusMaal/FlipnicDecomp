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

// Function: entry_0016c22c
// Address: 0x16c22c - 0x16c264
void entry_0016c22c_0x16c22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c22c_0x16c22c");
#endif

    ctx->pc = 0x16c22cu;

    // 0x16c22c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x16c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c230: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16c230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c234: 0x0  nop
    ctx->pc = 0x16c234u;
    // NOP
    // 0x16c238: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c23c: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c23cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16c240: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16c240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16c244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c248: 0x0  nop
    ctx->pc = 0x16c248u;
    // NOP
    // 0x16c24c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c250: 0x0  nop
    ctx->pc = 0x16c250u;
    // NOP
    // 0x16c254: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16C254u;
    {
        const bool branch_taken_0x16c254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c254) {
            ctx->pc = 0x16C264u;
            return;
        }
    }
    ctx->pc = 0x16C25Cu;
    // 0x16c25c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16C25Cu;
    {
        const bool branch_taken_0x16c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C25Cu;
        // 0x16c260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c25c) {
            ctx->pc = 0x16C26Cu;
            return;
        }
    }
    ctx->pc = 0x16C264u;
}
