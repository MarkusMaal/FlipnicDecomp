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

// Function: entry_001051d8
// Address: 0x1051d8 - 0x105214
void entry_001051d8_0x1051d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001051d8_0x1051d8");
#endif

    switch (ctx->pc) {
        case 0x1051e0u: goto label_1051e0;
        case 0x1051f0u: goto label_1051f0;
        default: break;
    }

    ctx->pc = 0x1051d8u;

    // 0x1051d8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1051D8u;
    SET_GPR_U32(ctx, 31, 0x1051E0u);
    ctx->pc = 0x1051DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1051D8u;
    // 0x1051dc: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1051D8u, 0x1051E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051E0u;
label_1051e0:
    // 0x1051e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1051E0u;
    {
        const bool branch_taken_0x1051e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051E0u;
        // 0x1051e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051e0) {
            ctx->pc = 0x105214u;
            return;
        }
    }
    ctx->pc = 0x1051E8u;
    // 0x1051e8: 0xc056360  jal         func_158D80
    ctx->pc = 0x1051E8u;
    SET_GPR_U32(ctx, 31, 0x1051F0u);
    ctx->pc = 0x1051ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1051E8u;
    // 0x1051ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1051E8u, 0x1051F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051F0u;
label_1051f0:
    // 0x1051f0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1051f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1051f4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1051f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1051f8: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1051f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1051fc: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1051fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x105200: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x105204: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105208: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10520c: 0x24427930  addiu       $v0, $v0, 0x7930
    ctx->pc = 0x10520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31024));
    // 0x105210: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x105214u;
}
