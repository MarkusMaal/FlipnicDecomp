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

// Function: entry_0016f1f8
// Address: 0x16f1f8 - 0x16f238
void entry_0016f1f8_0x16f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f1f8_0x16f1f8");
#endif

    ctx->pc = 0x16f1f8u;

    // 0x16f1f8: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x16F1F8u;
    {
        const bool branch_taken_0x16f1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f1f8) {
            ctx->pc = 0x16F3F0u;
            return;
        }
    }
    ctx->pc = 0x16F200u;
    // 0x16f200: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x16f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f208: 0x0  nop
    ctx->pc = 0x16f208u;
    // NOP
    // 0x16f20c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16f20cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16f210: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f210u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f214: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f218: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f220: 0x0  nop
    ctx->pc = 0x16f220u;
    // NOP
    // 0x16f224: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f228: 0x0  nop
    ctx->pc = 0x16f228u;
    // NOP
    // 0x16f22c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F22Cu;
    {
        const bool branch_taken_0x16f22c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F22Cu;
        // 0x16f230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f22c) {
            ctx->pc = 0x16F238u;
            return;
        }
    }
    ctx->pc = 0x16F234u;
    // 0x16f234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16f238u;
}
