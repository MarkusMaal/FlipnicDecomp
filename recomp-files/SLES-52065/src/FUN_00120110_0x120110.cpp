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

// Function: FUN_00120110
// Address: 0x120110 - 0x120164
void FUN_00120110_0x120110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120110_0x120110");
#endif

    switch (ctx->pc) {
        case 0x120134u: goto label_120134;
        case 0x12014cu: goto label_12014c;
        default: break;
    }

    ctx->pc = 0x120110u;

    // 0x120110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x120114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x120118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12011c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x120120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120124: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x120124u;
    {
        const bool branch_taken_0x120124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120124u;
        // 0x120128: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120124) {
            ctx->pc = 0x12014Cu;
            goto label_12014c;
        }
    }
    ctx->pc = 0x12012Cu;
    // 0x12012c: 0xc0482a4  jal         func_120A90
    ctx->pc = 0x12012Cu;
    SET_GPR_U32(ctx, 31, 0x120134u);
    ctx->pc = 0x120130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12012Cu;
    // 0x120130: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A90u, 0x12012Cu, 0x120134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120134u;
label_120134:
    // 0x120134: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x120134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x120138: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x120138u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12013c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12013Cu;
    {
        const bool branch_taken_0x12013c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x120140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12013Cu;
        // 0x120140: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12013c) {
            ctx->pc = 0x120150u;
            goto label_120150;
        }
    }
    ctx->pc = 0x120144u;
    // 0x120144: 0xc0401a4  jal         func_100690
    ctx->pc = 0x120144u;
    SET_GPR_U32(ctx, 31, 0x12014Cu);
    ctx->pc = 0x120148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120144u;
    // 0x120148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x120144u, 0x12014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12014Cu;
label_12014c:
    // 0x12014c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12014cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120150:
    // 0x120150: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x120150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x120158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12015c: 0x3e00008  jr          $ra
    ctx->pc = 0x12015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12015Cu;
        // 0x120160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120164u;
}
