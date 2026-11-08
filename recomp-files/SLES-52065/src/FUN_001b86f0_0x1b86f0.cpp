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

// Function: FUN_001b86f0
// Address: 0x1b86f0 - 0x1b8744
void FUN_001b86f0_0x1b86f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b86f0_0x1b86f0");
#endif

    switch (ctx->pc) {
        case 0x1b8714u: goto label_1b8714;
        case 0x1b872cu: goto label_1b872c;
        default: break;
    }

    ctx->pc = 0x1b86f0u;

    // 0x1b86f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b86f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b86f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b86f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b86f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b86f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b86fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b86fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8704: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8704u;
    {
        const bool branch_taken_0x1b8704 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8704u;
        // 0x1b8708: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8704) {
            ctx->pc = 0x1B872Cu;
            goto label_1b872c;
        }
    }
    ctx->pc = 0x1B870Cu;
    // 0x1b870c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B870Cu;
    SET_GPR_U32(ctx, 31, 0x1B8714u);
    ctx->pc = 0x1B8710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B870Cu;
    // 0x1b8710: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B870Cu, 0x1B8714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8714u;
label_1b8714:
    // 0x1b8714: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1b8714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1b8718: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b8718u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b871c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B871Cu;
    {
        const bool branch_taken_0x1b871c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B871Cu;
        // 0x1b8720: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b871c) {
            ctx->pc = 0x1B8730u;
            goto label_1b8730;
        }
    }
    ctx->pc = 0x1B8724u;
    // 0x1b8724: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B8724u;
    SET_GPR_U32(ctx, 31, 0x1B872Cu);
    ctx->pc = 0x1B8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8724u;
    // 0x1b8728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B8724u, 0x1B872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B872Cu;
label_1b872c:
    // 0x1b872c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b872cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8730:
    // 0x1b8730: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b873c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B873Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B873Cu;
        // 0x1b8740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B873Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8744u;
}
