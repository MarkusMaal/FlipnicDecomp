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

// Function: entry_001026d8
// Address: 0x1026d8 - 0x102704
void entry_001026d8_0x1026d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001026d8_0x1026d8");
#endif

    switch (ctx->pc) {
        case 0x1026ecu: goto label_1026ec;
        default: break;
    }

    ctx->pc = 0x1026d8u;

    // 0x1026d8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1026d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1026dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1026dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1026e0: 0x24a5e038  addiu       $a1, $a1, -0x1FC8
    ctx->pc = 0x1026e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959160));
    // 0x1026e4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1026E4u;
    SET_GPR_U32(ctx, 31, 0x1026ECu);
    ctx->pc = 0x1026E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026E4u;
    // 0x1026e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1026E4u, 0x1026ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026ECu;
label_1026ec:
    // 0x1026ec: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1026ECu;
    {
        const bool branch_taken_0x1026ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1026ec) {
            ctx->pc = 0x102750u;
            return;
        }
    }
    ctx->pc = 0x1026F4u;
    // 0x1026f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1026F4u;
    {
        const bool branch_taken_0x1026f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1026F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026F4u;
        // 0x1026f8: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026f4) {
            ctx->pc = 0x102704u;
            return;
        }
    }
    ctx->pc = 0x1026FCu;
    // 0x1026fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1026FCu;
    {
        const bool branch_taken_0x1026fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026FCu;
        // 0x102700: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026fc) {
            ctx->pc = 0x102720u;
            return;
        }
    }
    ctx->pc = 0x102704u;
}
