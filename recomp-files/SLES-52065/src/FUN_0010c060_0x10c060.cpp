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

// Function: FUN_0010c060
// Address: 0x10c060 - 0x10c09c
void FUN_0010c060_0x10c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010c060_0x10c060");
#endif

    switch (ctx->pc) {
        case 0x10c074u: goto label_10c074;
        case 0x10c08cu: goto label_10c08c;
        default: break;
    }

    ctx->pc = 0x10c060u;

    // 0x10c060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10c06c: 0xc04318c  jal         func_10C630
    ctx->pc = 0x10C06Cu;
    SET_GPR_U32(ctx, 31, 0x10C074u);
    ctx->pc = 0x10C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C06Cu;
    // 0x10c070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C630u, 0x10C06Cu, 0x10C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C074u;
label_10c074:
    // 0x10c074: 0x8604024e  lh          $a0, 0x24E($s0)
    ctx->pc = 0x10c074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 590)));
    // 0x10c078: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10c078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c07c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C07Cu;
    {
        const bool branch_taken_0x10c07c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C07Cu;
        // 0x10c080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c07c) {
            ctx->pc = 0x10C08Cu;
            goto label_10c08c;
        }
    }
    ctx->pc = 0x10C084u;
    // 0x10c084: 0xc043114  jal         func_10C450
    ctx->pc = 0x10C084u;
    SET_GPR_U32(ctx, 31, 0x10C08Cu);
    ctx->pc = 0x10C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C450u, 0x10C084u, 0x10C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C08Cu;
label_10c08c:
    // 0x10c08c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c094: 0x3e00008  jr          $ra
    ctx->pc = 0x10C094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C094u;
        // 0x10c098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C09Cu;
}
