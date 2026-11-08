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

// Function: entry_001c6988
// Address: 0x1c6988 - 0x1c69b8
void entry_001c6988_0x1c6988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6988_0x1c6988");
#endif

    switch (ctx->pc) {
        case 0x1c6990u: goto label_1c6990;
        case 0x1c69a8u: goto label_1c69a8;
        default: break;
    }

    ctx->pc = 0x1c6988u;

    // 0x1c6988: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6988u;
    SET_GPR_U32(ctx, 31, 0x1C6990u);
    ctx->pc = 0x1C698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6988u;
    // 0x1c698c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6988u, 0x1C6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6990u;
label_1c6990:
    // 0x1c6990: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6994: 0x9022f890  lbu         $v0, -0x770($at)
    ctx->pc = 0x1c6994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36F890u));
    // 0x1c6998: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6998u;
    {
        const bool branch_taken_0x1c6998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6998u;
        // 0x1c699c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6998) {
            ctx->pc = 0x1C69CCu;
            return;
        }
    }
    ctx->pc = 0x1C69A0u;
    // 0x1c69a0: 0xc071e1c  jal         func_1C7870
    ctx->pc = 0x1C69A0u;
    SET_GPR_U32(ctx, 31, 0x1C69A8u);
    ctx->pc = 0x1C69A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69A0u;
    // 0x1c69a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7870u, 0x1C69A0u, 0x1C69A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69A8u;
label_1c69a8:
    // 0x1c69a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c69ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c69acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c69b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C69B0u;
    {
        const bool branch_taken_0x1c69b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69B0u;
        // 0x1c69b4: 0xa022f890  sb          $v0, -0x770($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294965392), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69b0) {
            ctx->pc = 0x1C69CCu;
            return;
        }
    }
    ctx->pc = 0x1C69B8u;
}
