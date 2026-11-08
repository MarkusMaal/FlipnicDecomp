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

// Function: entry_00159238
// Address: 0x159238 - 0x159248
void entry_00159238_0x159238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159238_0x159238");
#endif

    switch (ctx->pc) {
        case 0x159244u: goto label_159244;
        default: break;
    }

    ctx->pc = 0x159238u;

    // 0x159238: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x159238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15923c: 0xc05604c  jal         func_158130
    ctx->pc = 0x15923Cu;
    SET_GPR_U32(ctx, 31, 0x159244u);
    ctx->pc = 0x159240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15923Cu;
    // 0x159240: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158130u, 0x15923Cu, 0x159244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159244u;
label_159244:
    // 0x159244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x159248u;
}
