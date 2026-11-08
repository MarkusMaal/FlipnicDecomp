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

// Function: entry_00132050
// Address: 0x132050 - 0x132074
void entry_00132050_0x132050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132050_0x132050");
#endif

    switch (ctx->pc) {
        case 0x13205cu: goto label_13205c;
        default: break;
    }

    ctx->pc = 0x132050u;

label_132050:
    // 0x132050: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x132050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x132054: 0xc04c7c4  jal         func_131F10
    ctx->pc = 0x132054u;
    SET_GPR_U32(ctx, 31, 0x13205Cu);
    ctx->pc = 0x132058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132054u;
    // 0x132058: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F10u, 0x132054u, 0x13205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13205Cu;
label_13205c:
    // 0x13205c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x13205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x132060: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x132060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x132064: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x132064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x132068: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x132068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x13206c: 0x1471fff8  bne         $v1, $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13206Cu;
    {
        const bool branch_taken_0x13206c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x13206c) {
            ctx->pc = 0x132050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132050;
        }
    }
    ctx->pc = 0x132074u;
}
