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

// Function: entry_00127660
// Address: 0x127660 - 0x127680
void entry_00127660_0x127660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127660_0x127660");
#endif

    switch (ctx->pc) {
        case 0x127670u: goto label_127670;
        default: break;
    }

    ctx->pc = 0x127660u;

    // 0x127660: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x127660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127664: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x127664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x127668: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x127668u;
    SET_GPR_U32(ctx, 31, 0x127670u);
    ctx->pc = 0x12766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127668u;
    // 0x12766c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x127668u, 0x127670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127670u;
label_127670:
    // 0x127670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127670u;
    {
        const bool branch_taken_0x127670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127670u;
        // 0x127674: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127670) {
            ctx->pc = 0x127680u;
            return;
        }
    }
    ctx->pc = 0x127678u;
    // 0x127678: 0xc04a0dc  jal         func_128370
    ctx->pc = 0x127678u;
    SET_GPR_U32(ctx, 31, 0x127680u);
    ctx->pc = 0x128370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128370u, 0x127678u, 0x127680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127680u;
}
