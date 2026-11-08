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

// Function: entry_0019c380
// Address: 0x19c380 - 0x19c3a0
void entry_0019c380_0x19c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c380_0x19c380");
#endif

    switch (ctx->pc) {
        case 0x19c394u: goto label_19c394;
        default: break;
    }

    ctx->pc = 0x19c380u;

    // 0x19c380: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19c380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19c384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c388: 0x24a50228  addiu       $a1, $a1, 0x228
    ctx->pc = 0x19c388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
    // 0x19c38c: 0xc064a88  jal         func_192A20
    ctx->pc = 0x19C38Cu;
    SET_GPR_U32(ctx, 31, 0x19C394u);
    ctx->pc = 0x19C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C38Cu;
    // 0x19c390: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x19C38Cu, 0x19C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C394u;
label_19c394:
    // 0x19c394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c398: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19C398u;
    SET_GPR_U32(ctx, 31, 0x19C3A0u);
    ctx->pc = 0x19C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C398u;
    // 0x19c39c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19C398u, 0x19C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3A0u;
}
