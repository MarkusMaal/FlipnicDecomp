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

// Function: entry_00112014
// Address: 0x112014 - 0x112020
void entry_00112014_0x112014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112014_0x112014");
#endif

    switch (ctx->pc) {
        case 0x11201cu: goto label_11201c;
        default: break;
    }

    ctx->pc = 0x112014u;

    // 0x112014: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x112014u;
    SET_GPR_U32(ctx, 31, 0x11201Cu);
    ctx->pc = 0x112018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112014u;
    // 0x112018: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x112014u, 0x11201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11201Cu;
label_11201c:
    // 0x11201c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11201cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x112020u;
}
