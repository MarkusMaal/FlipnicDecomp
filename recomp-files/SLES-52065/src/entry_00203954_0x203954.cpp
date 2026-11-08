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

// Function: entry_00203954
// Address: 0x203954 - 0x203964
void entry_00203954_0x203954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203954_0x203954");
#endif

    switch (ctx->pc) {
        case 0x20395cu: goto label_20395c;
        default: break;
    }

    ctx->pc = 0x203954u;

    // 0x203954: 0xc07f8ca  jal         func_1FE328
    ctx->pc = 0x203954u;
    SET_GPR_U32(ctx, 31, 0x20395Cu);
    ctx->pc = 0x203958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203954u;
    // 0x203958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE328u, 0x203954u, 0x20395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20395Cu;
label_20395c:
    // 0x20395c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20395cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x203960: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x203960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x203964u;
}
