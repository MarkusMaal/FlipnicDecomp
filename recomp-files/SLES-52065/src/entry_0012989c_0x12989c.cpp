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

// Function: entry_0012989c
// Address: 0x12989c - 0x1298bc
void entry_0012989c_0x12989c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012989c_0x12989c");
#endif

    switch (ctx->pc) {
        case 0x1298a8u: goto label_1298a8;
        default: break;
    }

    ctx->pc = 0x12989cu;

    // 0x12989c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298a0: 0xc0497f0  jal         func_125FC0
    ctx->pc = 0x1298A0u;
    SET_GPR_U32(ctx, 31, 0x1298A8u);
    ctx->pc = 0x1298A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1298A0u;
    // 0x1298a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125FC0u, 0x1298A0u, 0x1298A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1298A8u;
label_1298a8:
    // 0x1298a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1298a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1298ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1298acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1298b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1298b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1298b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1298B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1298B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298B4u;
        // 0x1298b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1298B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1298BCu;
}
