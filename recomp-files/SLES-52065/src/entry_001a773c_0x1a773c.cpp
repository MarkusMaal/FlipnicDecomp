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

// Function: entry_001a773c
// Address: 0x1a773c - 0x1a7774
void entry_001a773c_0x1a773c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a773c_0x1a773c");
#endif

    switch (ctx->pc) {
        case 0x1a7744u: goto label_1a7744;
        case 0x1a7760u: goto label_1a7760;
        default: break;
    }

    ctx->pc = 0x1a773cu;

    // 0x1a773c: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A773Cu;
    SET_GPR_U32(ctx, 31, 0x1A7744u);
    ctx->pc = 0x1A7740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A773Cu;
    // 0x1a7740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A773Cu, 0x1A7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7744u;
label_1a7744:
    // 0x1a7744: 0x3c03c180  lui         $v1, 0xC180
    ctx->pc = 0x1a7744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
    // 0x1a7748: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1a7748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1a774c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a774cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7750: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a7754: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1a7754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1a7758: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1A7758u;
    SET_GPR_U32(ctx, 31, 0x1A7760u);
    ctx->pc = 0x1A775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7758u;
    // 0x1a775c: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1A7758u, 0x1A7760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7760u;
label_1a7760:
    // 0x1a7760: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1a7760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a7764: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7764u;
    {
        const bool branch_taken_0x1a7764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7764u;
        // 0x1a7768: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7764) {
            ctx->pc = 0x1A7774u;
            return;
        }
    }
    ctx->pc = 0x1A776Cu;
    // 0x1a776c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A776Cu;
    {
        const bool branch_taken_0x1a776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A776Cu;
        // 0x1a7770: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a776c) {
            ctx->pc = 0x1A7778u;
            return;
        }
    }
    ctx->pc = 0x1A7774u;
}
