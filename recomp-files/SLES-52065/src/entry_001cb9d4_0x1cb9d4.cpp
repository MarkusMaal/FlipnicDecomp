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

// Function: entry_001cb9d4
// Address: 0x1cb9d4 - 0x1cb9f0
void entry_001cb9d4_0x1cb9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb9d4_0x1cb9d4");
#endif

    switch (ctx->pc) {
        case 0x1cb9dcu: goto label_1cb9dc;
        default: break;
    }

    ctx->pc = 0x1cb9d4u;

    // 0x1cb9d4: 0xc072ed0  jal         func_1CBB40
    ctx->pc = 0x1CB9D4u;
    SET_GPR_U32(ctx, 31, 0x1CB9DCu);
    ctx->pc = 0x1CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBB40u, 0x1CB9D4u, 0x1CB9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9DCu;
label_1cb9dc:
    // 0x1cb9dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cb9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb9e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB9E0u;
    {
        const bool branch_taken_0x1cb9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb9e0) {
            ctx->pc = 0x1CB9F0u;
            return;
        }
    }
    ctx->pc = 0x1CB9E8u;
    // 0x1cb9e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB9E8u;
    {
        const bool branch_taken_0x1cb9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9E8u;
        // 0x1cb9ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9e8) {
            ctx->pc = 0x1CB9F4u;
            return;
        }
    }
    ctx->pc = 0x1CB9F0u;
}
