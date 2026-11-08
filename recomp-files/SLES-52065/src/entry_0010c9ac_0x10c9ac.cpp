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

// Function: entry_0010c9ac
// Address: 0x10c9ac - 0x10c9d0
void entry_0010c9ac_0x10c9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c9ac_0x10c9ac");
#endif

    switch (ctx->pc) {
        case 0x10c9b8u: goto label_10c9b8;
        case 0x10c9c8u: goto label_10c9c8;
        default: break;
    }

    ctx->pc = 0x10c9acu;

    // 0x10c9ac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x10c9b0: 0xc046458  jal         func_119160
    ctx->pc = 0x10C9B0u;
    SET_GPR_U32(ctx, 31, 0x10C9B8u);
    ctx->pc = 0x10C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9B0u;
    // 0x10c9b4: 0x2484e338  addiu       $a0, $a0, -0x1CC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10C9B0u, 0x10C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9B8u;
label_10c9b8:
    // 0x10c9b8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10c9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x10c9bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9c0: 0xc046458  jal         func_119160
    ctx->pc = 0x10C9C0u;
    SET_GPR_U32(ctx, 31, 0x10C9C8u);
    ctx->pc = 0x10C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9C0u;
    // 0x10c9c4: 0x2484e348  addiu       $a0, $a0, -0x1CB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10C9C0u, 0x10C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9C8u;
label_10c9c8:
    // 0x10c9c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10C9C8u;
    {
        const bool branch_taken_0x10c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9C8u;
        // 0x10c9cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9c8) {
            ctx->pc = 0x10C9E8u;
            return;
        }
    }
    ctx->pc = 0x10C9D0u;
}
