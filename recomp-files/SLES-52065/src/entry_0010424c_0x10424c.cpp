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

// Function: entry_0010424c
// Address: 0x10424c - 0x104288
void entry_0010424c_0x10424c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010424c_0x10424c");
#endif

    switch (ctx->pc) {
        case 0x104254u: goto label_104254;
        case 0x104264u: goto label_104264;
        default: break;
    }

    ctx->pc = 0x10424cu;

    // 0x10424c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10424Cu;
    SET_GPR_U32(ctx, 31, 0x104254u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10424Cu, 0x104254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104254u;
label_104254:
    // 0x104254: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104254u;
    {
        const bool branch_taken_0x104254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104254u;
        // 0x104258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104254) {
            ctx->pc = 0x104288u;
            return;
        }
    }
    ctx->pc = 0x10425Cu;
    // 0x10425c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10425Cu;
    SET_GPR_U32(ctx, 31, 0x104264u);
    ctx->pc = 0x104260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10425Cu;
    // 0x104260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10425Cu, 0x104264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104264u;
label_104264:
    // 0x104264: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104268: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10426c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104270: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104274: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104278: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10427c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10427cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104280: 0x2442a070  addiu       $v0, $v0, -0x5F90
    ctx->pc = 0x104280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942832));
    // 0x104284: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104288u;
}
