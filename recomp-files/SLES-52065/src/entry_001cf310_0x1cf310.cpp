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

// Function: entry_001cf310
// Address: 0x1cf310 - 0x1cf368
void entry_001cf310_0x1cf310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf310_0x1cf310");
#endif

    switch (ctx->pc) {
        case 0x1cf320u: goto label_1cf320;
        case 0x1cf33cu: goto label_1cf33c;
        case 0x1cf350u: goto label_1cf350;
        case 0x1cf364u: goto label_1cf364;
        default: break;
    }

    ctx->pc = 0x1cf310u;

    // 0x1cf310: 0xa2a20040  sb          $v0, 0x40($s5)
    ctx->pc = 0x1cf310u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cf314: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf318: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CF318u;
    SET_GPR_U32(ctx, 31, 0x1CF320u);
    ctx->pc = 0x1CF31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF318u;
    // 0x1cf31c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CF318u, 0x1CF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF320u;
label_1cf320:
    // 0x1cf320: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CF320u;
    {
        const bool branch_taken_0x1cf320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF320u;
        // 0x1cf324: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf320) {
            ctx->pc = 0x1CF368u;
            return;
        }
    }
    ctx->pc = 0x1CF328u;
    // 0x1cf328: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf32c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf334: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CF334u;
    SET_GPR_U32(ctx, 31, 0x1CF33Cu);
    ctx->pc = 0x1CF338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF334u;
    // 0x1cf338: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CF334u, 0x1CF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF33Cu;
label_1cf33c:
    // 0x1cf33c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf340: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf344: 0x24a59690  addiu       $a1, $a1, -0x6970
    ctx->pc = 0x1cf344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940304));
    // 0x1cf348: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CF348u;
    SET_GPR_U32(ctx, 31, 0x1CF350u);
    ctx->pc = 0x1CF34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF348u;
    // 0x1cf34c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CF348u, 0x1CF350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF350u;
label_1cf350:
    // 0x1cf350: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf354: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf358: 0x24a59740  addiu       $a1, $a1, -0x68C0
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940480));
    // 0x1cf35c: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CF35Cu;
    SET_GPR_U32(ctx, 31, 0x1CF364u);
    ctx->pc = 0x1CF360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF35Cu;
    // 0x1cf360: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CF35Cu, 0x1CF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF364u;
label_1cf364:
    // 0x1cf364: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cf368u;
}
