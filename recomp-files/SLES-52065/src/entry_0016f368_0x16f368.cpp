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

// Function: entry_0016f368
// Address: 0x16f368 - 0x16f3a4
void entry_0016f368_0x16f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f368_0x16f368");
#endif

    ctx->pc = 0x16f368u;

    // 0x16f368: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16F368u;
    {
        const bool branch_taken_0x16f368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f368) {
            ctx->pc = 0x16F3F0u;
            return;
        }
    }
    ctx->pc = 0x16F370u;
    // 0x16f370: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x16f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f374: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x16f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f378: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f37c: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f37cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f380: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f384: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f38c: 0x0  nop
    ctx->pc = 0x16f38cu;
    // NOP
    // 0x16f390: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f394: 0x0  nop
    ctx->pc = 0x16f394u;
    // NOP
    // 0x16f398: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F398u;
    {
        const bool branch_taken_0x16f398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F398u;
        // 0x16f39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f398) {
            ctx->pc = 0x16F3A4u;
            return;
        }
    }
    ctx->pc = 0x16F3A0u;
    // 0x16f3a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16f3a4u;
}
