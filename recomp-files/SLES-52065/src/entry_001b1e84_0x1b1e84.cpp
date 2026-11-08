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

// Function: entry_001b1e84
// Address: 0x1b1e84 - 0x1b1ec0
void entry_001b1e84_0x1b1e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1e84_0x1b1e84");
#endif

    switch (ctx->pc) {
        case 0x1b1e8cu: goto label_1b1e8c;
        default: break;
    }

    ctx->pc = 0x1b1e84u;

    // 0x1b1e84: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B1E84u;
    SET_GPR_U32(ctx, 31, 0x1B1E8Cu);
    ctx->pc = 0x1B1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E84u;
    // 0x1b1e88: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B1E84u, 0x1B1E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E8Cu;
label_1b1e8c:
    // 0x1b1e8c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b1e90: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b1e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b1e94: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1b1e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b1e98: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b1e9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1ea0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b1ea4: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b1ea4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b1ea8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b1eac: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x1b1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1b1eb0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1EB0u;
    {
        const bool branch_taken_0x1b1eb0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EB0u;
        // 0x1b1eb4: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1eb0) {
            ctx->pc = 0x1B1EC0u;
            return;
        }
    }
    ctx->pc = 0x1B1EB8u;
    // 0x1b1eb8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b1ebc: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b1ebcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b1ec0u;
}
