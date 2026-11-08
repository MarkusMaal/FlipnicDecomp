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

// Function: entry_00103ebc
// Address: 0x103ebc - 0x103ee0
void entry_00103ebc_0x103ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103ebc_0x103ebc");
#endif

    switch (ctx->pc) {
        case 0x103ec4u: goto label_103ec4;
        case 0x103ed4u: goto label_103ed4;
        default: break;
    }

    ctx->pc = 0x103ebcu;

    // 0x103ebc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103EBCu;
    SET_GPR_U32(ctx, 31, 0x103EC4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103EBCu, 0x103EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EC4u;
label_103ec4:
    // 0x103ec4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103EC4u;
    {
        const bool branch_taken_0x103ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EC4u;
        // 0x103ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ec4) {
            ctx->pc = 0x103EE0u;
            return;
        }
    }
    ctx->pc = 0x103ECCu;
    // 0x103ecc: 0xc056360  jal         func_158D80
    ctx->pc = 0x103ECCu;
    SET_GPR_U32(ctx, 31, 0x103ED4u);
    ctx->pc = 0x103ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103ECCu;
    // 0x103ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103ECCu, 0x103ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103ED4u;
label_103ed4:
    // 0x103ed4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103ed8: 0x24427e10  addiu       $v0, $v0, 0x7E10
    ctx->pc = 0x103ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32272));
    // 0x103edc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103ee0u;
}
