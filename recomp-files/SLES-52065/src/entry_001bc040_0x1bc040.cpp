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

// Function: entry_001bc040
// Address: 0x1bc040 - 0x1bc070
void entry_001bc040_0x1bc040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc040_0x1bc040");
#endif

    ctx->pc = 0x1bc040u;

    // 0x1bc040: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bc040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc044: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bc044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bc048: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bc048u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bc04c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bc04cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc050: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bc050u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc054: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bc054u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc058: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc05c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc068: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC068u;
        // 0x1bc06c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC070u;
}
