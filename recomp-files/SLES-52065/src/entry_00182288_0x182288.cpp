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

// Function: entry_00182288
// Address: 0x182288 - 0x182298
void entry_00182288_0x182288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182288_0x182288");
#endif

    switch (ctx->pc) {
        case 0x182290u: goto label_182290;
        default: break;
    }

    ctx->pc = 0x182288u;

    // 0x182288: 0xc047a50  jal         func_11E940
    ctx->pc = 0x182288u;
    SET_GPR_U32(ctx, 31, 0x182290u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x182288u, 0x182290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182290u;
label_182290:
    // 0x182290: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182290u;
    {
        const bool branch_taken_0x182290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182290u;
        // 0x182294: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182290) {
            ctx->pc = 0x1822A4u;
            return;
        }
    }
    ctx->pc = 0x182298u;
}
