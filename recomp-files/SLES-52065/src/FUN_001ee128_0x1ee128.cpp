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

// Function: FUN_001ee128
// Address: 0x1ee128 - 0x1ee168
void FUN_001ee128_0x1ee128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee128_0x1ee128");
#endif

    switch (ctx->pc) {
        case 0x1ee14cu: goto label_1ee14c;
        default: break;
    }

    ctx->pc = 0x1ee128u;

    // 0x1ee128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ee12c: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE12Cu;
    {
        const bool branch_taken_0x1ee12c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1EE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE12Cu;
        // 0x1ee130: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee12c) {
            ctx->pc = 0x1EE144u;
            goto label_1ee144;
        }
    }
    ctx->pc = 0x1EE134u;
    // 0x1ee134: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1ee134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ee138: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ee138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee13c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE13Cu;
    {
        const bool branch_taken_0x1ee13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee13c) {
            ctx->pc = 0x1EE140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE13Cu;
            // 0x1ee140: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE154u;
            goto label_1ee154;
        }
    }
    ctx->pc = 0x1EE144u;
label_1ee144:
    // 0x1ee144: 0xc07b83e  jal         func_1EE0F8
    ctx->pc = 0x1EE144u;
    SET_GPR_U32(ctx, 31, 0x1EE14Cu);
    ctx->pc = 0x1EE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0F8u, 0x1EE144u, 0x1EE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE14Cu;
label_1ee14c:
    // 0x1ee14c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE14Cu;
    {
        const bool branch_taken_0x1ee14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE14Cu;
        // 0x1ee150: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee14c) {
            ctx->pc = 0x1EE160u;
            goto label_1ee160;
        }
    }
    ctx->pc = 0x1EE154u;
label_1ee154:
    // 0x1ee154: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1ee154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1ee158: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ee158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee160:
    // 0x1ee160: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE160u;
        // 0x1ee164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE168u;
}
