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

// Function: entry_00103bac
// Address: 0x103bac - 0x103be8
void entry_00103bac_0x103bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103bac_0x103bac");
#endif

    switch (ctx->pc) {
        case 0x103bb4u: goto label_103bb4;
        case 0x103bc4u: goto label_103bc4;
        default: break;
    }

    ctx->pc = 0x103bacu;

    // 0x103bac: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103BACu;
    SET_GPR_U32(ctx, 31, 0x103BB4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103BACu, 0x103BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BB4u;
label_103bb4:
    // 0x103bb4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103BB4u;
    {
        const bool branch_taken_0x103bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BB4u;
        // 0x103bb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bb4) {
            ctx->pc = 0x103BE8u;
            return;
        }
    }
    ctx->pc = 0x103BBCu;
    // 0x103bbc: 0xc041860  jal         func_106180
    ctx->pc = 0x103BBCu;
    SET_GPR_U32(ctx, 31, 0x103BC4u);
    ctx->pc = 0x103BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BBCu;
    // 0x103bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103BBCu, 0x103BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BC4u;
label_103bc4:
    // 0x103bc4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103bc8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103bcc: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x103bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x103bd0: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103bd4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103bd8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103bdc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103be0: 0x24429710  addiu       $v0, $v0, -0x68F0
    ctx->pc = 0x103be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940432));
    // 0x103be4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103be8u;
}
