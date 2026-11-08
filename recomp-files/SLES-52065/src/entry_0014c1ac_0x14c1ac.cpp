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

// Function: entry_0014c1ac
// Address: 0x14c1ac - 0x14c1e0
void entry_0014c1ac_0x14c1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c1ac_0x14c1ac");
#endif

    switch (ctx->pc) {
        case 0x14c1c4u: goto label_14c1c4;
        default: break;
    }

    ctx->pc = 0x14c1acu;

    // 0x14c1ac: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x14c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x14c1b0: 0x266400e0  addiu       $a0, $s3, 0xE0
    ctx->pc = 0x14c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x14c1b4: 0x24a5bfb0  addiu       $a1, $a1, -0x4050
    ctx->pc = 0x14c1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950832));
    // 0x14c1b8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14c1bc: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x14C1BCu;
    SET_GPR_U32(ctx, 31, 0x14C1C4u);
    ctx->pc = 0x14C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C1BCu;
    // 0x14c1c0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x14C1BCu, 0x14C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1C4u;
label_14c1c4:
    // 0x14c1c4: 0x266400cc  addiu       $a0, $s3, 0xCC
    ctx->pc = 0x14c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 204));
    // 0x14c1c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C1C8u;
    {
        const bool branch_taken_0x14c1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1c8) {
            ctx->pc = 0x14C1E0u;
            return;
        }
    }
    ctx->pc = 0x14C1D0u;
    // 0x14c1d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C1D0u;
    {
        const bool branch_taken_0x14c1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1D0u;
        // 0x14c1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1d0) {
            ctx->pc = 0x14C1E0u;
            return;
        }
    }
    ctx->pc = 0x14C1D8u;
    // 0x14c1d8: 0xc053780  jal         func_14DE00
    ctx->pc = 0x14C1D8u;
    SET_GPR_U32(ctx, 31, 0x14C1E0u);
    ctx->pc = 0x14DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE00u, 0x14C1D8u, 0x14C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1E0u;
}
