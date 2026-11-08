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

// Function: entry_0011e740
// Address: 0x11e740 - 0x11e76c
void entry_0011e740_0x11e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e740_0x11e740");
#endif

    switch (ctx->pc) {
        case 0x11e758u: goto label_11e758;
        default: break;
    }

    ctx->pc = 0x11e740u;

    // 0x11e740: 0x8e420524  lw          $v0, 0x524($s2)
    ctx->pc = 0x11e740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
    // 0x11e744: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11e744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11e748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e74c: 0x24c6e770  addiu       $a2, $a2, -0x1890
    ctx->pc = 0x11e74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961008));
    // 0x11e750: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E750u;
    SET_GPR_U32(ctx, 31, 0x11E758u);
    ctx->pc = 0x11E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E750u;
    // 0x11e754: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E750u, 0x11E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E758u;
label_11e758:
    // 0x11e758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e75c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E75Cu;
    {
        const bool branch_taken_0x11e75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e75c) {
            ctx->pc = 0x11E76Cu;
            return;
        }
    }
    ctx->pc = 0x11E764u;
    // 0x11e764: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x11E764u;
    {
        const bool branch_taken_0x11e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E764u;
        // 0x11e768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e764) {
            ctx->pc = 0x11E8C8u;
            return;
        }
    }
    ctx->pc = 0x11E76Cu;
}
