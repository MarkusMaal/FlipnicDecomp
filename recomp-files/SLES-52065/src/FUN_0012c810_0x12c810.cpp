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

// Function: FUN_0012c810
// Address: 0x12c810 - 0x12c85c
void FUN_0012c810_0x12c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012c810_0x12c810");
#endif

    switch (ctx->pc) {
        case 0x12c848u: goto label_12c848;
        default: break;
    }

    ctx->pc = 0x12c810u;

    // 0x12c810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12c81c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c820: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x12C820u;
    {
        const bool branch_taken_0x12c820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C820u;
        // 0x12c824: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c820) {
            ctx->pc = 0x12C84Cu;
            goto label_12c84c;
        }
    }
    ctx->pc = 0x12C828u;
    // 0x12c828: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x12c828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x12c82c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x12c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x12c830: 0x24638b80  addiu       $v1, $v1, -0x7480
    ctx->pc = 0x12c830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937472));
    // 0x12c834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12c834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12c838: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C838u;
    {
        const bool branch_taken_0x12c838 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C838u;
        // 0x12c83c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c838) {
            ctx->pc = 0x12C848u;
            goto label_12c848;
        }
    }
    ctx->pc = 0x12C840u;
    // 0x12c840: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12C840u;
    SET_GPR_U32(ctx, 31, 0x12C848u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12C840u, 0x12C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C848u;
label_12c848:
    // 0x12c848: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12c848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12c84c:
    // 0x12c84c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c854: 0x3e00008  jr          $ra
    ctx->pc = 0x12C854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C854u;
        // 0x12c858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C85Cu;
}
