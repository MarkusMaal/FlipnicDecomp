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

// Function: FUN_00144fd0
// Address: 0x144fd0 - 0x145008
void FUN_00144fd0_0x144fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144fd0_0x144fd0");
#endif

    ctx->pc = 0x144fd0u;

    // 0x144fd0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x144fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x144fd4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x144fd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144fd8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x144fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x144fdc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x144fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x144fe0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x144fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x144fe4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x144fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x144fe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x144fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x144fec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x144fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144ff0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x144ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144ff4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x144FF4u;
    {
        const bool branch_taken_0x144ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144ff4) {
            ctx->pc = 0x145000u;
            goto label_145000;
        }
    }
    ctx->pc = 0x144FFCu;
    // 0x144ffc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x144ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_145000:
    // 0x145000: 0x3e00008  jr          $ra
    ctx->pc = 0x145000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145008u;
}
