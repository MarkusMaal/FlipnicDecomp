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

// Function: entry_0016f5b4
// Address: 0x16f5b4 - 0x16f5f8
void entry_0016f5b4_0x16f5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f5b4_0x16f5b4");
#endif

    ctx->pc = 0x16f5b4u;

    // 0x16f5b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f5b8: 0x14440027  bne         $v0, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x16F5B8u;
    {
        const bool branch_taken_0x16f5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x16f5b8) {
            ctx->pc = 0x16F658u;
            return;
        }
    }
    ctx->pc = 0x16F5C0u;
    // 0x16f5c0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x16f5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f5c4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x16f5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f5c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f5c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f5cc: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f5ccu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f5d0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f5d4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f5dc: 0x0  nop
    ctx->pc = 0x16f5dcu;
    // NOP
    // 0x16f5e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f5e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f5e4: 0x0  nop
    ctx->pc = 0x16f5e4u;
    // NOP
    // 0x16f5e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F5E8u;
    {
        const bool branch_taken_0x16f5e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f5e8) {
            ctx->pc = 0x16F5F8u;
            return;
        }
    }
    ctx->pc = 0x16F5F0u;
    // 0x16f5f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F5F0u;
    {
        const bool branch_taken_0x16f5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5F0u;
        // 0x16f5f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5f0) {
            ctx->pc = 0x16F600u;
            return;
        }
    }
    ctx->pc = 0x16F5F8u;
}
