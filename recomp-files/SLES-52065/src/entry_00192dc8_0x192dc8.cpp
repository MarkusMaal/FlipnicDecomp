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

// Function: entry_00192dc8
// Address: 0x192dc8 - 0x192df8
void entry_00192dc8_0x192dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192dc8_0x192dc8");
#endif

    switch (ctx->pc) {
        case 0x192dd0u: goto label_192dd0;
        case 0x192de0u: goto label_192de0;
        case 0x192df0u: goto label_192df0;
        default: break;
    }

    ctx->pc = 0x192dc8u;

    // 0x192dc8: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x192DC8u;
    SET_GPR_U32(ctx, 31, 0x192DD0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x192DC8u, 0x192DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DD0u;
label_192dd0:
    // 0x192dd0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192DD0u;
    {
        const bool branch_taken_0x192dd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x192dd0) {
            ctx->pc = 0x192DF8u;
            return;
        }
    }
    ctx->pc = 0x192DD8u;
    // 0x192dd8: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x192DD8u;
    SET_GPR_U32(ctx, 31, 0x192DE0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x192DD8u, 0x192DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DE0u;
label_192de0:
    // 0x192de0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192de4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x192de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192de8: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x192DE8u;
    SET_GPR_U32(ctx, 31, 0x192DF0u);
    ctx->pc = 0x192DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192DE8u;
    // 0x192dec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x192DE8u, 0x192DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DF0u;
label_192df0:
    // 0x192df0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192DF0u;
    {
        const bool branch_taken_0x192df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DF0u;
        // 0x192df4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192df0) {
            ctx->pc = 0x192E00u;
            return;
        }
    }
    ctx->pc = 0x192DF8u;
}
