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

// Function: entry_00104894
// Address: 0x104894 - 0x1048c4
void entry_00104894_0x104894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104894_0x104894");
#endif

    switch (ctx->pc) {
        case 0x10489cu: goto label_10489c;
        case 0x1048acu: goto label_1048ac;
        default: break;
    }

    ctx->pc = 0x104894u;

    // 0x104894: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104894u;
    SET_GPR_U32(ctx, 31, 0x10489Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104894u, 0x10489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10489Cu;
label_10489c:
    // 0x10489c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10489Cu;
    {
        const bool branch_taken_0x10489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10489Cu;
        // 0x1048a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10489c) {
            ctx->pc = 0x1048C4u;
            return;
        }
    }
    ctx->pc = 0x1048A4u;
    // 0x1048a4: 0xc056360  jal         func_158D80
    ctx->pc = 0x1048A4u;
    SET_GPR_U32(ctx, 31, 0x1048ACu);
    ctx->pc = 0x1048A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1048A4u;
    // 0x1048a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1048A4u, 0x1048ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048ACu;
label_1048ac:
    // 0x1048ac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1048acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1048b0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1048b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1048b4: 0x24637bd0  addiu       $v1, $v1, 0x7BD0
    ctx->pc = 0x1048b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31696));
    // 0x1048b8: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x1048b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x1048bc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1048bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1048c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1048c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1048c4u;
}
