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

// Function: entry_0019dc40
// Address: 0x19dc40 - 0x19dc54
void entry_0019dc40_0x19dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc40_0x19dc40");
#endif

    switch (ctx->pc) {
        case 0x19dc4cu: goto label_19dc4c;
        default: break;
    }

    ctx->pc = 0x19dc40u;

    // 0x19dc40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19dc44: 0xc063de0  jal         func_18F780
    ctx->pc = 0x19DC44u;
    SET_GPR_U32(ctx, 31, 0x19DC4Cu);
    ctx->pc = 0x19DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC44u;
    // 0x19dc48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19DC44u, 0x19DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC4Cu;
label_19dc4c:
    // 0x19dc4c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19DC4Cu;
    {
        const bool branch_taken_0x19dc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dc4c) {
            ctx->pc = 0x19DCCCu;
            return;
        }
    }
    ctx->pc = 0x19DC54u;
}
