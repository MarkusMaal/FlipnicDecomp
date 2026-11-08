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

// Function: entry_001ba5d8
// Address: 0x1ba5d8 - 0x1ba604
void entry_001ba5d8_0x1ba5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba5d8_0x1ba5d8");
#endif

    switch (ctx->pc) {
        case 0x1ba5ecu: goto label_1ba5ec;
        case 0x1ba5fcu: goto label_1ba5fc;
        default: break;
    }

    ctx->pc = 0x1ba5d8u;

    // 0x1ba5d8: 0x9222001d  lbu         $v0, 0x1D($s1)
    ctx->pc = 0x1ba5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x1ba5dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA5DCu;
    {
        const bool branch_taken_0x1ba5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5DCu;
        // 0x1ba5e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5dc) {
            ctx->pc = 0x1BA604u;
            return;
        }
    }
    ctx->pc = 0x1BA5E4u;
    // 0x1ba5e4: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1BA5E4u;
    SET_GPR_U32(ctx, 31, 0x1BA5ECu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1BA5E4u, 0x1BA5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5ECu;
label_1ba5ec:
    // 0x1ba5ec: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba5f0: 0x8c252ef8  lw          $a1, 0x2EF8($at)
    ctx->pc = 0x1ba5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x212EF8u));
    // 0x1ba5f4: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x1BA5F4u;
    SET_GPR_U32(ctx, 31, 0x1BA5FCu);
    ctx->pc = 0x1BA5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5F4u;
    // 0x1ba5f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x1BA5F4u, 0x1BA5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5FCu;
label_1ba5fc:
    // 0x1ba5fc: 0xa220001d  sb          $zero, 0x1D($s1)
    ctx->pc = 0x1ba5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba600: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ba600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1ba604u;
}
