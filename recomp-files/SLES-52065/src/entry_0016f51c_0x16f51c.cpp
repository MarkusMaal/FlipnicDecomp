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

// Function: entry_0016f51c
// Address: 0x16f51c - 0x16f55c
void entry_0016f51c_0x16f51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f51c_0x16f51c");
#endif

    ctx->pc = 0x16f51cu;

    // 0x16f51c: 0x14880016  bne         $a0, $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16F51Cu;
    {
        const bool branch_taken_0x16f51c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x16F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F51Cu;
        // 0x16f520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f51c) {
            ctx->pc = 0x16F578u;
            return;
        }
    }
    ctx->pc = 0x16F524u;
    // 0x16f524: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x16f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f528: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x16f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f52c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f530: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f530u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f534: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f538: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f540: 0x0  nop
    ctx->pc = 0x16f540u;
    // NOP
    // 0x16f544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f548: 0x0  nop
    ctx->pc = 0x16f548u;
    // NOP
    // 0x16f54c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F54Cu;
    {
        const bool branch_taken_0x16f54c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f54c) {
            ctx->pc = 0x16F55Cu;
            return;
        }
    }
    ctx->pc = 0x16F554u;
    // 0x16f554: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F554u;
    {
        const bool branch_taken_0x16f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F554u;
        // 0x16f558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f554) {
            ctx->pc = 0x16F564u;
            return;
        }
    }
    ctx->pc = 0x16F55Cu;
}
