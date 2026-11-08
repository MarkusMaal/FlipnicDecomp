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

// Function: entry_001b1428
// Address: 0x1b1428 - 0x1b145c
void entry_001b1428_0x1b1428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1428_0x1b1428");
#endif

    switch (ctx->pc) {
        case 0x1b1438u: goto label_1b1438;
        case 0x1b144cu: goto label_1b144c;
        default: break;
    }

    ctx->pc = 0x1b1428u;

    // 0x1b1428: 0x8fb30108  lw          $s3, 0x108($sp)
    ctx->pc = 0x1b1428u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b142c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1430: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B1430u;
    SET_GPR_U32(ctx, 31, 0x1B1438u);
    ctx->pc = 0x1B1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1430u;
    // 0x1b1434: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B1430u, 0x1B1438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1438u;
label_1b1438:
    // 0x1b1438: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1b1438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b143c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B143Cu;
    {
        const bool branch_taken_0x1b143c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b143c) {
            ctx->pc = 0x1B145Cu;
            return;
        }
    }
    ctx->pc = 0x1B1444u;
    // 0x1b1444: 0xc06c558  jal         func_1B1560
    ctx->pc = 0x1B1444u;
    SET_GPR_U32(ctx, 31, 0x1B144Cu);
    ctx->pc = 0x1B1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1444u;
    // 0x1b1448: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1560u, 0x1B1444u, 0x1B144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B144Cu;
label_1b144c:
    // 0x1b144c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B144Cu;
    {
        const bool branch_taken_0x1b144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b144c) {
            ctx->pc = 0x1B145Cu;
            return;
        }
    }
    ctx->pc = 0x1B1454u;
    // 0x1b1454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1454u;
    {
        const bool branch_taken_0x1b1454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1454u;
        // 0x1b1458: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1454) {
            ctx->pc = 0x1B1468u;
            return;
        }
    }
    ctx->pc = 0x1B145Cu;
}
