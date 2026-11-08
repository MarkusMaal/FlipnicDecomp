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

// Function: entry_001dd844
// Address: 0x1dd844 - 0x1dd878
void entry_001dd844_0x1dd844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd844_0x1dd844");
#endif

    ctx->pc = 0x1dd844u;

    // 0x1dd844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd848: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1dd848u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd84c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1DD84Cu;
    {
        const bool branch_taken_0x1dd84c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD84Cu;
        // 0x1dd850: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd84c) {
            ctx->pc = 0x1DD878u;
            return;
        }
    }
    ctx->pc = 0x1DD854u;
    // 0x1dd854: 0x26447330  addiu       $a0, $s2, 0x7330
    ctx->pc = 0x1dd854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd85c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd860: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dd868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd86c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1dd86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1dd870: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DD870u;
    {
        const bool branch_taken_0x1dd870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD870u;
        // 0x1dd874: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd870) {
            ctx->pc = 0x1DD8A0u;
            return;
        }
    }
    ctx->pc = 0x1DD878u;
}
