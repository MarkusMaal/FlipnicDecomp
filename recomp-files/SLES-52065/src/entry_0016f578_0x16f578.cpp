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

// Function: entry_0016f578
// Address: 0x16f578 - 0x16f5b4
void entry_0016f578_0x16f578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f578_0x16f578");
#endif

    ctx->pc = 0x16f578u;

    // 0x16f578: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x16F578u;
    {
        const bool branch_taken_0x16f578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f578) {
            ctx->pc = 0x16F66Cu;
            return;
        }
    }
    ctx->pc = 0x16F580u;
    // 0x16f580: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x16f580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f584: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16f584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f588: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f588u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f58c: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f58cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f590: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f594: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f59c: 0x0  nop
    ctx->pc = 0x16f59cu;
    // NOP
    // 0x16f5a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f5a4: 0x0  nop
    ctx->pc = 0x16f5a4u;
    // NOP
    // 0x16f5a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F5A8u;
    {
        const bool branch_taken_0x16f5a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5A8u;
        // 0x16f5ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5a8) {
            ctx->pc = 0x16F5B4u;
            return;
        }
    }
    ctx->pc = 0x16F5B0u;
    // 0x16f5b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16f5b4u;
}
