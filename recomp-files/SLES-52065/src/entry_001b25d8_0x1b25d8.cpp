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

// Function: entry_001b25d8
// Address: 0x1b25d8 - 0x1b2614
void entry_001b25d8_0x1b25d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b25d8_0x1b25d8");
#endif

    switch (ctx->pc) {
        case 0x1b25e0u: goto label_1b25e0;
        default: break;
    }

    ctx->pc = 0x1b25d8u;

    // 0x1b25d8: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B25D8u;
    SET_GPR_U32(ctx, 31, 0x1B25E0u);
    ctx->pc = 0x1B25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25D8u;
    // 0x1b25dc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B25D8u, 0x1B25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25E0u;
label_1b25e0:
    // 0x1b25e0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1b25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1b25e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b25e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b25e8: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x1b25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1b25ec: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1b25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1b25f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b25f4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x1b25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1b25f8: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b25f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b25fc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b25fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b2600: 0x8fa20370  lw          $v0, 0x370($sp)
    ctx->pc = 0x1b2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1b2604: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2604u;
    {
        const bool branch_taken_0x1b2604 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2604u;
        // 0x1b2608: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2604) {
            ctx->pc = 0x1B2614u;
            return;
        }
    }
    ctx->pc = 0x1B260Cu;
    // 0x1b260c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2610: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b2610u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b2614u;
}
