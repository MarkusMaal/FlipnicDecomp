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

// Function: entry_0019dc84
// Address: 0x19dc84 - 0x19dc94
void entry_0019dc84_0x19dc84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc84_0x19dc84");
#endif

    switch (ctx->pc) {
        case 0x19dc8cu: goto label_19dc8c;
        default: break;
    }

    ctx->pc = 0x19dc84u;

    // 0x19dc84: 0xc063de0  jal         func_18F780
    ctx->pc = 0x19DC84u;
    SET_GPR_U32(ctx, 31, 0x19DC8Cu);
    ctx->pc = 0x19DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC84u;
    // 0x19dc88: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19DC84u, 0x19DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC8Cu;
label_19dc8c:
    // 0x19dc8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19DC8Cu;
    {
        const bool branch_taken_0x19dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dc8c) {
            ctx->pc = 0x19DCCCu;
            return;
        }
    }
    ctx->pc = 0x19DC94u;
}
