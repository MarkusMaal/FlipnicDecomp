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

// Function: entry_001e3dcc
// Address: 0x1e3dcc - 0x1e3de8
void entry_001e3dcc_0x1e3dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3dcc_0x1e3dcc");
#endif

    switch (ctx->pc) {
        case 0x1e3dd4u: goto label_1e3dd4;
        default: break;
    }

    ctx->pc = 0x1e3dccu;

    // 0x1e3dcc: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x1E3DCCu;
    SET_GPR_U32(ctx, 31, 0x1E3DD4u);
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E3DCCu, 0x1E3DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DD4u;
label_1e3dd4:
    // 0x1e3dd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3dd8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E3DD8u;
    {
        const bool branch_taken_0x1e3dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3dd8) {
            ctx->pc = 0x1E3E28u;
            return;
        }
    }
    ctx->pc = 0x1E3DE0u;
    // 0x1e3de0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E3DE0u;
    {
        const bool branch_taken_0x1e3de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DE0u;
        // 0x1e3de4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3de0) {
            ctx->pc = 0x1E3E3Cu;
            return;
        }
    }
    ctx->pc = 0x1E3DE8u;
}
