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

// Function: entry_00202ea8
// Address: 0x202ea8 - 0x202ed4
void entry_00202ea8_0x202ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202ea8_0x202ea8");
#endif

    switch (ctx->pc) {
        case 0x202eb0u: goto label_202eb0;
        case 0x202ebcu: goto label_202ebc;
        case 0x202ec8u: goto label_202ec8;
        default: break;
    }

    ctx->pc = 0x202ea8u;

    // 0x202ea8: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x202EA8u;
    SET_GPR_U32(ctx, 31, 0x202EB0u);
    ctx->pc = 0x202EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EA8u;
    // 0x202eac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x202EA8u, 0x202EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EB0u;
label_202eb0:
    // 0x202eb0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x202eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x202eb4: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x202EB4u;
    SET_GPR_U32(ctx, 31, 0x202EBCu);
    ctx->pc = 0x202EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EB4u;
    // 0x202eb8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x202EB4u, 0x202EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EBCu;
label_202ebc:
    // 0x202ebc: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x202ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x202ec0: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x202EC0u;
    SET_GPR_U32(ctx, 31, 0x202EC8u);
    ctx->pc = 0x202EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EC0u;
    // 0x202ec4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x202EC0u, 0x202EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EC8u;
label_202ec8:
    // 0x202ec8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x202ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202ecc: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x202ECCu;
    SET_GPR_U32(ctx, 31, 0x202ED4u);
    ctx->pc = 0x202ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202ECCu;
    // 0x202ed0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x202ECCu, 0x202ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202ED4u;
}
