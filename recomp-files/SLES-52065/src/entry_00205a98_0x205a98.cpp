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

// Function: entry_00205a98
// Address: 0x205a98 - 0x205aac
void entry_00205a98_0x205a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205a98_0x205a98");
#endif

    switch (ctx->pc) {
        case 0x205aa8u: goto label_205aa8;
        default: break;
    }

    ctx->pc = 0x205a98u;

    // 0x205a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a9c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x205a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x205aa0: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x205AA0u;
    SET_GPR_U32(ctx, 31, 0x205AA8u);
    ctx->pc = 0x205AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AA0u;
    // 0x205aa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x205AA0u, 0x205AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AA8u;
label_205aa8:
    // 0x205aa8: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x205aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
    ctx->pc = 0x205aacu;
}
