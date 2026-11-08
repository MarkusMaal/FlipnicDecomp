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

// Function: entry_001041c8
// Address: 0x1041c8 - 0x104204
void entry_001041c8_0x1041c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001041c8_0x1041c8");
#endif

    switch (ctx->pc) {
        case 0x1041d0u: goto label_1041d0;
        case 0x1041e0u: goto label_1041e0;
        default: break;
    }

    ctx->pc = 0x1041c8u;

    // 0x1041c8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1041C8u;
    SET_GPR_U32(ctx, 31, 0x1041D0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1041C8u, 0x1041D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041D0u;
label_1041d0:
    // 0x1041d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1041D0u;
    {
        const bool branch_taken_0x1041d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041D0u;
        // 0x1041d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041d0) {
            ctx->pc = 0x104204u;
            return;
        }
    }
    ctx->pc = 0x1041D8u;
    // 0x1041d8: 0xc056360  jal         func_158D80
    ctx->pc = 0x1041D8u;
    SET_GPR_U32(ctx, 31, 0x1041E0u);
    ctx->pc = 0x1041DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041D8u;
    // 0x1041dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1041D8u, 0x1041E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041E0u;
label_1041e0:
    // 0x1041e0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1041e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1041e4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1041e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1041e8: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1041e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1041ec: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1041ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1041f0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1041f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1041f4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1041f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1041f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1041f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1041fc: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x1041fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
    // 0x104200: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104204u;
}
