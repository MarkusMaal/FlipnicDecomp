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

// Function: entry_001bfff4
// Address: 0x1bfff4 - 0x1c0020
void entry_001bfff4_0x1bfff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfff4_0x1bfff4");
#endif

    switch (ctx->pc) {
        case 0x1bfffcu: goto label_1bfffc;
        default: break;
    }

    ctx->pc = 0x1bfff4u;

    // 0x1bfff4: 0xc073170  jal         func_1CC5C0
    ctx->pc = 0x1BFFF4u;
    SET_GPR_U32(ctx, 31, 0x1BFFFCu);
    ctx->pc = 0x1BFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFF4u;
    // 0x1bfff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5C0u, 0x1BFFF4u, 0x1BFFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFFFCu;
label_1bfffc:
    // 0x1bfffc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1bfffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c0000: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x1c0000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c0004: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c0004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c0008: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1c0008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c000c: 0xa4532828  sh          $s3, 0x2828($v0)
    ctx->pc = 0x1c000cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10280), (uint16_t)GPR_U32(ctx, 19));
    // 0x1c0010: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c0010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c0014: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c0014u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c0018: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0018u;
    {
        const bool branch_taken_0x1c0018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0018u;
        // 0x1c001c: 0xa040282b  sb          $zero, 0x282B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10283), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0018) {
            ctx->pc = 0x1C0030u;
            return;
        }
    }
    ctx->pc = 0x1C0020u;
}
