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

// Function: entry_001b2050
// Address: 0x1b2050 - 0x1b208c
void entry_001b2050_0x1b2050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2050_0x1b2050");
#endif

    switch (ctx->pc) {
        case 0x1b2058u: goto label_1b2058;
        default: break;
    }

    ctx->pc = 0x1b2050u;

    // 0x1b2050: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B2050u;
    SET_GPR_U32(ctx, 31, 0x1B2058u);
    ctx->pc = 0x1B2054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2050u;
    // 0x1b2054: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B2050u, 0x1B2058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2058u;
label_1b2058:
    // 0x1b2058: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1b2058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b205c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b205cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b2060: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1b2060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b2064: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1b2064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b2068: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b2068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b206c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1b206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b2070: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b2070u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b2074: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b2074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b2078: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x1b2078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1b207c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B207Cu;
    {
        const bool branch_taken_0x1b207c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B207Cu;
        // 0x1b2080: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b207c) {
            ctx->pc = 0x1B208Cu;
            return;
        }
    }
    ctx->pc = 0x1B2084u;
    // 0x1b2084: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b2084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2088: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b2088u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b208cu;
}
