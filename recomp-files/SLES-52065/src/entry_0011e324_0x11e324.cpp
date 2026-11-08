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

// Function: entry_0011e324
// Address: 0x11e324 - 0x11e348
void entry_0011e324_0x11e324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e324_0x11e324");
#endif

    switch (ctx->pc) {
        case 0x11e32cu: goto label_11e32c;
        case 0x11e334u: goto label_11e334;
        default: break;
    }

    ctx->pc = 0x11e324u;

    // 0x11e324: 0xc0752de  jal         func_1D4B78
    ctx->pc = 0x11E324u;
    SET_GPR_U32(ctx, 31, 0x11E32Cu);
    ctx->pc = 0x11E328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E324u;
    // 0x11e328: 0x26040108  addiu       $a0, $s0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B78u, 0x11E324u, 0x11E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E32Cu;
label_11e32c:
    // 0x11e32c: 0xc07c9bc  jal         func_1F26F0
    ctx->pc = 0x11E32Cu;
    SET_GPR_U32(ctx, 31, 0x11E334u);
    ctx->pc = 0x11E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E32Cu;
    // 0x11e330: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26F0u, 0x11E32Cu, 0x11E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E334u;
label_11e334:
    // 0x11e334: 0x820203ec  lb          $v0, 0x3EC($s0)
    ctx->pc = 0x11e334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x11e338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E338u;
    {
        const bool branch_taken_0x11e338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E338u;
        // 0x11e33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e338) {
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E340u;
    // 0x11e340: 0xc046c14  jal         func_11B050
    ctx->pc = 0x11E340u;
    SET_GPR_U32(ctx, 31, 0x11E348u);
    ctx->pc = 0x11E344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E340u;
    // 0x11e344: 0x260503ec  addiu       $a1, $s0, 0x3EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x11E340u, 0x11E348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E348u;
}
