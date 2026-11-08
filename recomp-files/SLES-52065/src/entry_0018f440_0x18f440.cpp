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

// Function: entry_0018f440
// Address: 0x18f440 - 0x18f460
void entry_0018f440_0x18f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f440_0x18f440");
#endif

    ctx->pc = 0x18f440u;

    // 0x18f440: 0x4e00007  bltz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F440u;
    {
        const bool branch_taken_0x18f440 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x18f440) {
            ctx->pc = 0x18F460u;
            return;
        }
    }
    ctx->pc = 0x18F448u;
    // 0x18f448: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x18f448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x18f44c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f450: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x18f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18f454: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18f454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18f458: 0xc05ec7c  jal         func_17B1F0
    ctx->pc = 0x18F458u;
    SET_GPR_U32(ctx, 31, 0x18F460u);
    ctx->pc = 0x18F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F458u;
    // 0x18f45c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1F0u, 0x18F458u, 0x18F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F460u;
}
