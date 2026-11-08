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

// Function: entry_00104024
// Address: 0x104024 - 0x104060
void entry_00104024_0x104024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104024_0x104024");
#endif

    switch (ctx->pc) {
        case 0x10402cu: goto label_10402c;
        case 0x10403cu: goto label_10403c;
        default: break;
    }

    ctx->pc = 0x104024u;

    // 0x104024: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104024u;
    SET_GPR_U32(ctx, 31, 0x10402Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104024u, 0x10402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10402Cu;
label_10402c:
    // 0x10402c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10402Cu;
    {
        const bool branch_taken_0x10402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10402Cu;
        // 0x104030: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10402c) {
            ctx->pc = 0x104060u;
            return;
        }
    }
    ctx->pc = 0x104034u;
    // 0x104034: 0xc056360  jal         func_158D80
    ctx->pc = 0x104034u;
    SET_GPR_U32(ctx, 31, 0x10403Cu);
    ctx->pc = 0x104038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104034u;
    // 0x104038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104034u, 0x10403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10403Cu;
label_10403c:
    // 0x10403c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104040: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104044: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x104044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104048: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x10404c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10404cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104050: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104054: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104058: 0x24429bf0  addiu       $v0, $v0, -0x6410
    ctx->pc = 0x104058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941680));
    // 0x10405c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10405cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104060u;
}
