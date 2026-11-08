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

// Function: FUN_00171140
// Address: 0x171140 - 0x171184
void FUN_00171140_0x171140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171140_0x171140");
#endif

    switch (ctx->pc) {
        case 0x171164u: goto label_171164;
        case 0x171174u: goto label_171174;
        default: break;
    }

    ctx->pc = 0x171140u;

    // 0x171140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x171140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x171144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17114c: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x17114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x171150: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x171150u;
    {
        const bool branch_taken_0x171150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x171154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171150u;
        // 0x171154: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171150) {
            ctx->pc = 0x171174u;
            goto label_171174;
        }
    }
    ctx->pc = 0x171158u;
    // 0x171158: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x171158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x17115c: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x17115Cu;
    SET_GPR_U32(ctx, 31, 0x171164u);
    ctx->pc = 0x171160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17115Cu;
    // 0x171160: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x17115Cu, 0x171164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171164u;
label_171164:
    // 0x171164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171168: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x171168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17116c: 0xc056010  jal         func_158040
    ctx->pc = 0x17116Cu;
    SET_GPR_U32(ctx, 31, 0x171174u);
    ctx->pc = 0x171170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17116Cu;
    // 0x171170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158040u, 0x17116Cu, 0x171174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171174u;
label_171174:
    // 0x171174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17117c: 0x3e00008  jr          $ra
    ctx->pc = 0x17117Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17117Cu;
        // 0x171180: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17117Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171184u;
}
