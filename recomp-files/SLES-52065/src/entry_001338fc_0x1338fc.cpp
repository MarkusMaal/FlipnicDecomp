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

// Function: entry_001338fc
// Address: 0x1338fc - 0x133924
void entry_001338fc_0x1338fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001338fc_0x1338fc");
#endif

    switch (ctx->pc) {
        case 0x13390cu: goto label_13390c;
        default: break;
    }

    ctx->pc = 0x1338fcu;

label_1338fc:
    // 0x1338fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1338fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133900: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x133900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x133904: 0xc04cb4c  jal         func_132D30
    ctx->pc = 0x133904u;
    SET_GPR_U32(ctx, 31, 0x13390Cu);
    ctx->pc = 0x133908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133904u;
    // 0x133908: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132D30u, 0x133904u, 0x13390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13390Cu;
label_13390c:
    // 0x13390c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133910: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x133910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x133914: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x133914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x133918: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x133918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13391c: 0x1470fff7  bne         $v1, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13391Cu;
    {
        const bool branch_taken_0x13391c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13391c) {
            ctx->pc = 0x1338FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1338fc;
        }
    }
    ctx->pc = 0x133924u;
}
