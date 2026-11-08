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

// Function: FUN_00106640
// Address: 0x106640 - 0x1066a0
void FUN_00106640_0x106640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106640_0x106640");
#endif

    switch (ctx->pc) {
        case 0x106670u: goto label_106670;
        case 0x106688u: goto label_106688;
        default: break;
    }

    ctx->pc = 0x106640u;

    // 0x106640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10664c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106654: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x106654u;
    {
        const bool branch_taken_0x106654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106654u;
        // 0x106658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106654) {
            ctx->pc = 0x106688u;
            goto label_106688;
        }
    }
    ctx->pc = 0x10665Cu;
    // 0x10665c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106664: 0x244279f0  addiu       $v0, $v0, 0x79F0
    ctx->pc = 0x106664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31216));
    // 0x106668: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x106668u;
    SET_GPR_U32(ctx, 31, 0x106670u);
    ctx->pc = 0x10666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106668u;
    // 0x10666c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106EC0u, 0x106668u, 0x106670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106670u;
label_106670:
    // 0x106670: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x106670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x106674: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106678: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106678u;
    {
        const bool branch_taken_0x106678 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106678u;
        // 0x10667c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106678) {
            ctx->pc = 0x10668Cu;
            goto label_10668c;
        }
    }
    ctx->pc = 0x106680u;
    // 0x106680: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106680u;
    SET_GPR_U32(ctx, 31, 0x106688u);
    ctx->pc = 0x106684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106680u;
    // 0x106684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106680u, 0x106688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106688u;
label_106688:
    // 0x106688: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10668c:
    // 0x10668c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10668cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106698: 0x3e00008  jr          $ra
    ctx->pc = 0x106698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106698u;
        // 0x10669c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1066A0u;
}
