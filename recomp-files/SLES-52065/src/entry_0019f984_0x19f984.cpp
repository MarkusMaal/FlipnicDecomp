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

// Function: entry_0019f984
// Address: 0x19f984 - 0x19f994
void entry_0019f984_0x19f984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f984_0x19f984");
#endif

    switch (ctx->pc) {
        case 0x19f98cu: goto label_19f98c;
        default: break;
    }

    ctx->pc = 0x19f984u;

    // 0x19f984: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F984u;
    SET_GPR_U32(ctx, 31, 0x19F98Cu);
    ctx->pc = 0x19F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F984u;
    // 0x19f988: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F984u, 0x19F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F98Cu;
label_19f98c:
    // 0x19f98c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19F98Cu;
    {
        const bool branch_taken_0x19f98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f98c) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F994u;
}
