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

// Function: entry_001b5cbc
// Address: 0x1b5cbc - 0x1b5ce0
void entry_001b5cbc_0x1b5cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5cbc_0x1b5cbc");
#endif

    switch (ctx->pc) {
        case 0x1b5cc4u: goto label_1b5cc4;
        case 0x1b5cd0u: goto label_1b5cd0;
        default: break;
    }

    ctx->pc = 0x1b5cbcu;

    // 0x1b5cbc: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B5CBCu;
    SET_GPR_U32(ctx, 31, 0x1B5CC4u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B5CBCu, 0x1B5CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CC4u;
label_1b5cc4:
    // 0x1b5cc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cc8: 0xc0485a4  jal         func_121690
    ctx->pc = 0x1B5CC8u;
    SET_GPR_U32(ctx, 31, 0x1B5CD0u);
    ctx->pc = 0x1B5CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CC8u;
    // 0x1b5ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x1B5CC8u, 0x1B5CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CD0u;
label_1b5cd0:
    // 0x1b5cd0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cd8: 0xc046b40  jal         func_11AD00
    ctx->pc = 0x1B5CD8u;
    SET_GPR_U32(ctx, 31, 0x1B5CE0u);
    ctx->pc = 0x1B5CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CD8u;
    // 0x1b5cdc: 0x24a50d88  addiu       $a1, $a1, 0xD88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD00u, 0x1B5CD8u, 0x1B5CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CE0u;
}
