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

// Function: entry_00103eec
// Address: 0x103eec - 0x103f10
void entry_00103eec_0x103eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103eec_0x103eec");
#endif

    switch (ctx->pc) {
        case 0x103ef4u: goto label_103ef4;
        case 0x103f04u: goto label_103f04;
        default: break;
    }

    ctx->pc = 0x103eecu;

    // 0x103eec: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103EECu;
    SET_GPR_U32(ctx, 31, 0x103EF4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103EECu, 0x103EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EF4u;
label_103ef4:
    // 0x103ef4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103EF4u;
    {
        const bool branch_taken_0x103ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EF4u;
        // 0x103ef8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ef4) {
            ctx->pc = 0x103F10u;
            return;
        }
    }
    ctx->pc = 0x103EFCu;
    // 0x103efc: 0xc056360  jal         func_158D80
    ctx->pc = 0x103EFCu;
    SET_GPR_U32(ctx, 31, 0x103F04u);
    ctx->pc = 0x103F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103EFCu;
    // 0x103f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103EFCu, 0x103F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F04u;
label_103f04:
    // 0x103f04: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103f08: 0x24427db0  addiu       $v0, $v0, 0x7DB0
    ctx->pc = 0x103f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32176));
    // 0x103f0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103f10u;
}
