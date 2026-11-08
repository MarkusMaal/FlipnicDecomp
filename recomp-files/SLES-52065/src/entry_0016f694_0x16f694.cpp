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

// Function: entry_0016f694
// Address: 0x16f694 - 0x16f6c8
void entry_0016f694_0x16f694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f694_0x16f694");
#endif

    ctx->pc = 0x16f694u;

    // 0x16f694: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x16f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f698: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16f698u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f69c: 0x0  nop
    ctx->pc = 0x16f69cu;
    // NOP
    // 0x16f6a0: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x16F6A0u;
    {
        const bool branch_taken_0x16f6a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f6a0) {
            ctx->pc = 0x16F754u;
            return;
        }
    }
    ctx->pc = 0x16F6A8u;
    // 0x16f6a8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x16f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f6ac: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f6b0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f6b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16f6b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f6bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16f6c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16F6C0u;
    {
        const bool branch_taken_0x16f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6C0u;
        // 0x16f6c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6c0) {
            ctx->pc = 0x16F710u;
            return;
        }
    }
    ctx->pc = 0x16F6C8u;
}
