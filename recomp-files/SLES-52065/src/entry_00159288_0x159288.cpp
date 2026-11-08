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

// Function: entry_00159288
// Address: 0x159288 - 0x159298
void entry_00159288_0x159288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159288_0x159288");
#endif

    switch (ctx->pc) {
        case 0x159294u: goto label_159294;
        default: break;
    }

    ctx->pc = 0x159288u;

    // 0x159288: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x159288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15928c: 0xc05609c  jal         func_158270
    ctx->pc = 0x15928Cu;
    SET_GPR_U32(ctx, 31, 0x159294u);
    ctx->pc = 0x159290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15928Cu;
    // 0x159290: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158270u, 0x15928Cu, 0x159294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159294u;
label_159294:
    // 0x159294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x159298u;
}
