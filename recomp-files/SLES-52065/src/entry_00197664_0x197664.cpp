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

// Function: entry_00197664
// Address: 0x197664 - 0x1976a4
void entry_00197664_0x197664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197664_0x197664");
#endif

    switch (ctx->pc) {
        case 0x19766cu: goto label_19766c;
        default: break;
    }

    ctx->pc = 0x197664u;

    // 0x197664: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x197664u;
    SET_GPR_U32(ctx, 31, 0x19766Cu);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x197664u, 0x19766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19766Cu;
label_19766c:
    // 0x19766c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19766cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197670: 0x104301f1  beq         $v0, $v1, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x197670u;
    {
        const bool branch_taken_0x197670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x197670) {
            ctx->pc = 0x197E38u;
            return;
        }
    }
    ctx->pc = 0x197678u;
    // 0x197678: 0x8ea406d4  lw          $a0, 0x6D4($s5)
    ctx->pc = 0x197678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1748)));
    // 0x19767c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197680: 0x108300b1  beq         $a0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x197680u;
    {
        const bool branch_taken_0x197680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x197680) {
            ctx->pc = 0x197948u;
            return;
        }
    }
    ctx->pc = 0x197688u;
    // 0x197688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19768c: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x19768Cu;
    {
        const bool branch_taken_0x19768c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19768Cu;
        // 0x197690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19768c) {
            ctx->pc = 0x19779Cu;
            return;
        }
    }
    ctx->pc = 0x197694u;
    // 0x197694: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197694u;
    {
        const bool branch_taken_0x197694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197694) {
            ctx->pc = 0x1976A4u;
            return;
        }
    }
    ctx->pc = 0x19769Cu;
    // 0x19769c: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x19769Cu;
    {
        const bool branch_taken_0x19769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19769Cu;
        // 0x1976a0: 0x8ea30328  lw          $v1, 0x328($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19769c) {
            ctx->pc = 0x197B1Cu;
            return;
        }
    }
    ctx->pc = 0x1976A4u;
}
