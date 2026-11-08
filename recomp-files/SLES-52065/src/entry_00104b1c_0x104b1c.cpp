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

// Function: entry_00104b1c
// Address: 0x104b1c - 0x104b40
void entry_00104b1c_0x104b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104b1c_0x104b1c");
#endif

    switch (ctx->pc) {
        case 0x104b24u: goto label_104b24;
        case 0x104b34u: goto label_104b34;
        default: break;
    }

    ctx->pc = 0x104b1cu;

    // 0x104b1c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104B1Cu;
    SET_GPR_U32(ctx, 31, 0x104B24u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104B1Cu, 0x104B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B24u;
label_104b24:
    // 0x104b24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104B24u;
    {
        const bool branch_taken_0x104b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B24u;
        // 0x104b28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b24) {
            ctx->pc = 0x104B40u;
            return;
        }
    }
    ctx->pc = 0x104B2Cu;
    // 0x104b2c: 0xc056360  jal         func_158D80
    ctx->pc = 0x104B2Cu;
    SET_GPR_U32(ctx, 31, 0x104B34u);
    ctx->pc = 0x104B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B2Cu;
    // 0x104b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104B2Cu, 0x104B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B34u;
label_104b34:
    // 0x104b34: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104b38: 0x2442ae20  addiu       $v0, $v0, -0x51E0
    ctx->pc = 0x104b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946336));
    // 0x104b3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104b40u;
}
