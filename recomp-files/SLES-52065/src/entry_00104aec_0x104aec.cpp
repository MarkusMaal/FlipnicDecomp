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

// Function: entry_00104aec
// Address: 0x104aec - 0x104b10
void entry_00104aec_0x104aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104aec_0x104aec");
#endif

    switch (ctx->pc) {
        case 0x104af4u: goto label_104af4;
        case 0x104b04u: goto label_104b04;
        default: break;
    }

    ctx->pc = 0x104aecu;

    // 0x104aec: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104AECu;
    SET_GPR_U32(ctx, 31, 0x104AF4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104AECu, 0x104AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AF4u;
label_104af4:
    // 0x104af4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104AF4u;
    {
        const bool branch_taken_0x104af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AF4u;
        // 0x104af8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104af4) {
            ctx->pc = 0x104B10u;
            return;
        }
    }
    ctx->pc = 0x104AFCu;
    // 0x104afc: 0xc056360  jal         func_158D80
    ctx->pc = 0x104AFCu;
    SET_GPR_U32(ctx, 31, 0x104B04u);
    ctx->pc = 0x104B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AFCu;
    // 0x104b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104AFCu, 0x104B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B04u;
label_104b04:
    // 0x104b04: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104b08: 0x2442ae80  addiu       $v0, $v0, -0x5180
    ctx->pc = 0x104b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
    // 0x104b0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104b10u;
}
