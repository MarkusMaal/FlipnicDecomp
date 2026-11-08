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

// Function: entry_00108eb4
// Address: 0x108eb4 - 0x108eec
void entry_00108eb4_0x108eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108eb4_0x108eb4");
#endif

    switch (ctx->pc) {
        case 0x108ebcu: goto label_108ebc;
        case 0x108ec8u: goto label_108ec8;
        case 0x108ed0u: goto label_108ed0;
        default: break;
    }

    ctx->pc = 0x108eb4u;

    // 0x108eb4: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108EB4u;
    SET_GPR_U32(ctx, 31, 0x108EBCu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108EB4u, 0x108EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EBCu;
label_108ebc:
    // 0x108ebc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ec0: 0xc04a018  jal         func_128060
    ctx->pc = 0x108EC0u;
    SET_GPR_U32(ctx, 31, 0x108EC8u);
    ctx->pc = 0x108EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EC0u;
    // 0x108ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x108EC0u, 0x108EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EC8u;
label_108ec8:
    // 0x108ec8: 0xc0423bc  jal         func_108EF0
    ctx->pc = 0x108EC8u;
    SET_GPR_U32(ctx, 31, 0x108ED0u);
    ctx->pc = 0x108ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EC8u;
    // 0x108ecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108EF0u, 0x108EC8u, 0x108ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108ED0u;
label_108ed0:
    // 0x108ed0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x108ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108ed4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x108ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x108EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EE4u;
        // 0x108ee8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108EECu;
}
