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

// Function: entry_0011c5a0
// Address: 0x11c5a0 - 0x11c5e0
void entry_0011c5a0_0x11c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c5a0_0x11c5a0");
#endif

    switch (ctx->pc) {
        case 0x11c5bcu: goto label_11c5bc;
        default: break;
    }

    ctx->pc = 0x11c5a0u;

label_11c5a0:
    // 0x11c5a0: 0x26240424  addiu       $a0, $s1, 0x424
    ctx->pc = 0x11c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1060));
    // 0x11c5a4: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x11c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c5a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5b4: 0xc047bec  jal         func_11EFB0
    ctx->pc = 0x11C5B4u;
    SET_GPR_U32(ctx, 31, 0x11C5BCu);
    ctx->pc = 0x11C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5B4u;
    // 0x11c5b8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFB0u, 0x11C5B4u, 0x11C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5BCu;
label_11c5bc:
    // 0x11c5bc: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x11c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c5c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c5c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11c5c8: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x11c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    // 0x11c5cc: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x11c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x11c5d0: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x11C5D0u;
    {
        const bool branch_taken_0x11c5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c5d0) {
            ctx->pc = 0x11C650u;
            return;
        }
    }
    ctx->pc = 0x11C5D8u;
    // 0x11c5d8: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x11C5D8u;
    {
        const bool branch_taken_0x11c5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5D8u;
        // 0x11c5dc: 0x8e230094  lw          $v1, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5d8) {
            ctx->pc = 0x11C5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c5a0;
        }
    }
    ctx->pc = 0x11C5E0u;
}
