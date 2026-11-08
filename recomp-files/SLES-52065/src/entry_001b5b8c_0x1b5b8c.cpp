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

// Function: entry_001b5b8c
// Address: 0x1b5b8c - 0x1b5bb8
void entry_001b5b8c_0x1b5b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5b8c_0x1b5b8c");
#endif

    switch (ctx->pc) {
        case 0x1b5b94u: goto label_1b5b94;
        case 0x1b5b9cu: goto label_1b5b9c;
        case 0x1b5ba8u: goto label_1b5ba8;
        default: break;
    }

    ctx->pc = 0x1b5b8cu;

    // 0x1b5b8c: 0xc073088  jal         func_1CC220
    ctx->pc = 0x1B5B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B5B94u);
    ctx->pc = 0x1CC220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC220u, 0x1B5B8Cu, 0x1B5B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B94u;
label_1b5b94:
    // 0x1b5b94: 0xc06d49c  jal         func_1B5270
    ctx->pc = 0x1B5B94u;
    SET_GPR_U32(ctx, 31, 0x1B5B9Cu);
    ctx->pc = 0x1B5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5270u, 0x1B5B94u, 0x1B5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B9Cu;
label_1b5b9c:
    // 0x1b5b9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ba0: 0xc0485a4  jal         func_121690
    ctx->pc = 0x1B5BA0u;
    SET_GPR_U32(ctx, 31, 0x1B5BA8u);
    ctx->pc = 0x1B5BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BA0u;
    // 0x1b5ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x1B5BA0u, 0x1B5BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BA8u;
label_1b5ba8:
    // 0x1b5ba8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bb0: 0xc046b40  jal         func_11AD00
    ctx->pc = 0x1B5BB0u;
    SET_GPR_U32(ctx, 31, 0x1B5BB8u);
    ctx->pc = 0x1B5BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BB0u;
    // 0x1b5bb4: 0x24a50f08  addiu       $a1, $a1, 0xF08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD00u, 0x1B5BB0u, 0x1B5BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BB8u;
}
