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

// Function: entry_00104180
// Address: 0x104180 - 0x1041bc
void entry_00104180_0x104180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104180_0x104180");
#endif

    switch (ctx->pc) {
        case 0x104188u: goto label_104188;
        case 0x104198u: goto label_104198;
        default: break;
    }

    ctx->pc = 0x104180u;

    // 0x104180: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104180u;
    SET_GPR_U32(ctx, 31, 0x104188u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104180u, 0x104188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104188u;
label_104188:
    // 0x104188: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104188u;
    {
        const bool branch_taken_0x104188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104188u;
        // 0x10418c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104188) {
            ctx->pc = 0x1041BCu;
            return;
        }
    }
    ctx->pc = 0x104190u;
    // 0x104190: 0xc056360  jal         func_158D80
    ctx->pc = 0x104190u;
    SET_GPR_U32(ctx, 31, 0x104198u);
    ctx->pc = 0x104194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104190u;
    // 0x104194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104190u, 0x104198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104198u;
label_104198:
    // 0x104198: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10419c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10419cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1041a0: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1041a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1041a4: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1041a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1041a8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1041a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1041ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1041acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1041b0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1041b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1041b4: 0x2442a190  addiu       $v0, $v0, -0x5E70
    ctx->pc = 0x1041b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943120));
    // 0x1041b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1041b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1041bcu;
}
