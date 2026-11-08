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

// Function: entry_001996ec
// Address: 0x1996ec - 0x199700
void entry_001996ec_0x1996ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001996ec_0x1996ec");
#endif

    switch (ctx->pc) {
        case 0x1996f4u: goto label_1996f4;
        default: break;
    }

    ctx->pc = 0x1996ecu;

    // 0x1996ec: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1996ECu;
    SET_GPR_U32(ctx, 31, 0x1996F4u);
    ctx->pc = 0x1996F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996ECu;
    // 0x1996f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1996ECu, 0x1996F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996F4u;
label_1996f4:
    // 0x1996f4: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1996F4u;
    {
        const bool branch_taken_0x1996f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1996f4) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x1996FCu;
    // 0x1996fc: 0x26840820  addiu       $a0, $s4, 0x820
    ctx->pc = 0x1996fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
    ctx->pc = 0x199700u;
}
