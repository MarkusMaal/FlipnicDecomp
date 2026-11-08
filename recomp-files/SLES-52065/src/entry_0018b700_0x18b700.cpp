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

// Function: entry_0018b700
// Address: 0x18b700 - 0x18b720
void entry_0018b700_0x18b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b700_0x18b700");
#endif

    switch (ctx->pc) {
        case 0x18b708u: goto label_18b708;
        case 0x18b71cu: goto label_18b71c;
        default: break;
    }

    ctx->pc = 0x18b700u;

    // 0x18b700: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x18B700u;
    SET_GPR_U32(ctx, 31, 0x18B708u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x18B700u, 0x18B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B708u;
label_18b708:
    // 0x18b708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18b708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b70c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B70Cu;
    {
        const bool branch_taken_0x18b70c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B70Cu;
        // 0x18b710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b70c) {
            ctx->pc = 0x18B720u;
            return;
        }
    }
    ctx->pc = 0x18B714u;
    // 0x18b714: 0xc062e28  jal         func_18B8A0
    ctx->pc = 0x18B714u;
    SET_GPR_U32(ctx, 31, 0x18B71Cu);
    ctx->pc = 0x18B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B8A0u, 0x18B714u, 0x18B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B71Cu;
label_18b71c:
    // 0x18b71c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18b71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18b720u;
}
