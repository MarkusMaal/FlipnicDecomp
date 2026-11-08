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

// Function: entry_001ba544
// Address: 0x1ba544 - 0x1ba570
void entry_001ba544_0x1ba544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba544_0x1ba544");
#endif

    switch (ctx->pc) {
        case 0x1ba558u: goto label_1ba558;
        case 0x1ba568u: goto label_1ba568;
        default: break;
    }

    ctx->pc = 0x1ba544u;

    // 0x1ba544: 0x9203001d  lbu         $v1, 0x1D($s0)
    ctx->pc = 0x1ba544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x1ba548: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA548u;
    {
        const bool branch_taken_0x1ba548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA548u;
        // 0x1ba54c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba548) {
            ctx->pc = 0x1BA570u;
            return;
        }
    }
    ctx->pc = 0x1BA550u;
    // 0x1ba550: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1BA550u;
    SET_GPR_U32(ctx, 31, 0x1BA558u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1BA550u, 0x1BA558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA558u;
label_1ba558:
    // 0x1ba558: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba55c: 0x8c252ef8  lw          $a1, 0x2EF8($at)
    ctx->pc = 0x1ba55cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x212EF8u));
    // 0x1ba560: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x1BA560u;
    SET_GPR_U32(ctx, 31, 0x1BA568u);
    ctx->pc = 0x1BA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA560u;
    // 0x1ba564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x1BA560u, 0x1BA568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA568u;
label_1ba568:
    // 0x1ba568: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x1ba568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba56c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ba56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1ba570u;
}
