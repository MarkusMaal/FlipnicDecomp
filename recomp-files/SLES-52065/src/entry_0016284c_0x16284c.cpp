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

// Function: entry_0016284c
// Address: 0x16284c - 0x1628b0
void entry_0016284c_0x16284c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016284c_0x16284c");
#endif

    ctx->pc = 0x16284cu;

    // 0x16284c: 0x0  nop
    ctx->pc = 0x16284cu;
    // NOP
    // 0x162850: 0x0  nop
    ctx->pc = 0x162850u;
    // NOP
    // 0x162854: 0x0  nop
    ctx->pc = 0x162854u;
    // NOP
    // 0x162858: 0x46150004  c1          0x150004
    ctx->pc = 0x162858u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x16285c: 0x0  nop
    ctx->pc = 0x16285cu;
    // NOP
    // 0x162860: 0x0  nop
    ctx->pc = 0x162860u;
    // NOP
    // 0x162864: 0x0  nop
    ctx->pc = 0x162864u;
    // NOP
    // 0x162868: 0x460000c4  c1          0xC4
    ctx->pc = 0x162868u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x16286c: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x16286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x162870: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x162870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x162874: 0x3c024018  lui         $v0, 0x4018
    ctx->pc = 0x162874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16408 << 16));
    // 0x162878: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x162878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x16287c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16287cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162884: 0x0  nop
    ctx->pc = 0x162884u;
    // NOP
    // 0x162888: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x162888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16288c: 0x0  nop
    ctx->pc = 0x16288cu;
    // NOP
    // 0x162890: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x162890u;
    {
        const bool branch_taken_0x162890 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162890u;
        // 0x162894: 0x46030b42  mul.s       $f13, $f1, $f3 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162890) {
            ctx->pc = 0x1628E8u;
            return;
        }
    }
    ctx->pc = 0x162898u;
    // 0x162898: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x162898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x16289c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16289cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1628a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1628a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1628a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1628a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1628a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1628A8u;
    {
        const bool branch_taken_0x1628a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628A8u;
        // 0x1628ac: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628a8) {
            ctx->pc = 0x1628E8u;
            return;
        }
    }
    ctx->pc = 0x1628B0u;
}
