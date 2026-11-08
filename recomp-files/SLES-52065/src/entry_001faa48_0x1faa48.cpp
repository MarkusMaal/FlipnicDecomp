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

// Function: entry_001faa48
// Address: 0x1faa48 - 0x1faa70
void entry_001faa48_0x1faa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faa48_0x1faa48");
#endif

    ctx->pc = 0x1faa48u;

    // 0x1faa48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1faa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa4c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1faa4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1faa50: 0x0  nop
    ctx->pc = 0x1faa50u;
    // NOP
    // 0x1faa54: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x1FAA54u;
    {
        const bool branch_taken_0x1faa54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA54u;
        // 0x1faa58: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa54) {
            ctx->pc = 0x1FABA4u;
            return;
        }
    }
    ctx->pc = 0x1FAA5Cu;
    // 0x1faa5c: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x1faa5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1faa60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FAA60u;
    {
        const bool branch_taken_0x1faa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA60u;
        // 0x1faa64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa60) {
            ctx->pc = 0x1FAA8Cu;
            return;
        }
    }
    ctx->pc = 0x1FAA68u;
    // 0x1faa68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1faa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1faa6c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1faa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    ctx->pc = 0x1faa70u;
}
