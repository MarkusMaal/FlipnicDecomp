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

// Function: entry_00103d9c
// Address: 0x103d9c - 0x103dd8
void entry_00103d9c_0x103d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103d9c_0x103d9c");
#endif

    switch (ctx->pc) {
        case 0x103da4u: goto label_103da4;
        case 0x103db4u: goto label_103db4;
        default: break;
    }

    ctx->pc = 0x103d9cu;

    // 0x103d9c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103D9Cu;
    SET_GPR_U32(ctx, 31, 0x103DA4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103D9Cu, 0x103DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DA4u;
label_103da4:
    // 0x103da4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103DA4u;
    {
        const bool branch_taken_0x103da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DA4u;
        // 0x103da8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103da4) {
            ctx->pc = 0x103DD8u;
            return;
        }
    }
    ctx->pc = 0x103DACu;
    // 0x103dac: 0xc0418dc  jal         func_106370
    ctx->pc = 0x103DACu;
    SET_GPR_U32(ctx, 31, 0x103DB4u);
    ctx->pc = 0x103DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DACu;
    // 0x103db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x103DACu, 0x103DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DB4u;
label_103db4:
    // 0x103db4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103db8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103dbc: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x103dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x103dc0: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x103dc4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103dc8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103dcc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103dd0: 0x244299b0  addiu       $v0, $v0, -0x6650
    ctx->pc = 0x103dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941104));
    // 0x103dd4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103dd8u;
}
