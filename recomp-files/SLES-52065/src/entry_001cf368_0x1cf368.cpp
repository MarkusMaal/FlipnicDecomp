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

// Function: entry_001cf368
// Address: 0x1cf368 - 0x1cf3b0
void entry_001cf368_0x1cf368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf368_0x1cf368");
#endif

    switch (ctx->pc) {
        case 0x1cf370u: goto label_1cf370;
        case 0x1cf388u: goto label_1cf388;
        case 0x1cf39cu: goto label_1cf39c;
        default: break;
    }

    ctx->pc = 0x1cf368u;

    // 0x1cf368: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CF368u;
    SET_GPR_U32(ctx, 31, 0x1CF370u);
    ctx->pc = 0x1CF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF368u;
    // 0x1cf36c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CF368u, 0x1CF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF370u;
label_1cf370:
    // 0x1cf370: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CF370u;
    {
        const bool branch_taken_0x1cf370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF370u;
        // 0x1cf374: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf370) {
            ctx->pc = 0x1CF3B0u;
            return;
        }
    }
    ctx->pc = 0x1CF378u;
    // 0x1cf378: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf37c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf380: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CF380u;
    SET_GPR_U32(ctx, 31, 0x1CF388u);
    ctx->pc = 0x1CF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF380u;
    // 0x1cf384: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CF380u, 0x1CF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF388u;
label_1cf388:
    // 0x1cf388: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf38c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf390: 0x24a59690  addiu       $a1, $a1, -0x6970
    ctx->pc = 0x1cf390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940304));
    // 0x1cf394: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CF394u;
    SET_GPR_U32(ctx, 31, 0x1CF39Cu);
    ctx->pc = 0x1CF398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF394u;
    // 0x1cf398: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CF394u, 0x1CF39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF39Cu;
label_1cf39c:
    // 0x1cf39c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf3a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf3a4: 0x24a59740  addiu       $a1, $a1, -0x68C0
    ctx->pc = 0x1cf3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940480));
    // 0x1cf3a8: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CF3A8u;
    SET_GPR_U32(ctx, 31, 0x1CF3B0u);
    ctx->pc = 0x1CF3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF3A8u;
    // 0x1cf3ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CF3A8u, 0x1CF3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF3B0u;
}
