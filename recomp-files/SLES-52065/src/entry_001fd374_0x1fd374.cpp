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

// Function: entry_001fd374
// Address: 0x1fd374 - 0x1fd384
void entry_001fd374_0x1fd374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd374_0x1fd374");
#endif

    switch (ctx->pc) {
        case 0x1fd37cu: goto label_1fd37c;
        default: break;
    }

    ctx->pc = 0x1fd374u;

    // 0x1fd374: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FD374u;
    SET_GPR_U32(ctx, 31, 0x1FD37Cu);
    ctx->pc = 0x1FD378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD374u;
    // 0x1fd378: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FD374u, 0x1FD37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD37Cu;
label_1fd37c:
    // 0x1fd37c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD37Cu;
    {
        const bool branch_taken_0x1fd37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD37Cu;
        // 0x1fd380: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd37c) {
            ctx->pc = 0x1FD388u;
            return;
        }
    }
    ctx->pc = 0x1FD384u;
}
