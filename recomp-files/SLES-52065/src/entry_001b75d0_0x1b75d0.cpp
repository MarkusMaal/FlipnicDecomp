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

// Function: entry_001b75d0
// Address: 0x1b75d0 - 0x1b7600
void entry_001b75d0_0x1b75d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b75d0_0x1b75d0");
#endif

    switch (ctx->pc) {
        case 0x1b75e0u: goto label_1b75e0;
        default: break;
    }

    ctx->pc = 0x1b75d0u;

    // 0x1b75d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b75d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b75d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75d8: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1B75D8u;
    SET_GPR_U32(ctx, 31, 0x1B75E0u);
    ctx->pc = 0x1B75DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75D8u;
    // 0x1b75dc: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1B75D8u, 0x1B75E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75E0u;
label_1b75e0:
    // 0x1b75e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B75E0u;
    {
        const bool branch_taken_0x1b75e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b75e0) {
            ctx->pc = 0x1B7600u;
            return;
        }
    }
    ctx->pc = 0x1B75E8u;
    // 0x1b75e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b75ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b75ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75f0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b75f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b75f8: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1B75F8u;
    SET_GPR_U32(ctx, 31, 0x1B7600u);
    ctx->pc = 0x1B75FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75F8u;
    // 0x1b75fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1B75F8u, 0x1B7600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7600u;
}
