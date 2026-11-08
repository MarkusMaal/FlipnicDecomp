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

// Function: FUN_00100630
// Address: 0x100630 - 0x10068c
void FUN_00100630_0x100630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100630_0x100630");
#endif

    switch (ctx->pc) {
        case 0x100654u: goto label_100654;
        case 0x100664u: goto label_100664;
        case 0x100674u: goto label_100674;
        default: break;
    }

    ctx->pc = 0x100630u;

    // 0x100630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10063c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x100640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100644: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x100644u;
    {
        const bool branch_taken_0x100644 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x100644) {
            ctx->pc = 0x100674u;
            goto label_100674;
        }
    }
    ctx->pc = 0x10064Cu;
    // 0x10064c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x10064Cu;
    SET_GPR_U32(ctx, 31, 0x100654u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x10064Cu, 0x100654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100654u;
label_100654:
    // 0x100654: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10065c: 0xc07fb18  jal         func_1FEC60
    ctx->pc = 0x10065Cu;
    SET_GPR_U32(ctx, 31, 0x100664u);
    ctx->pc = 0x1FEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC60u, 0x10065Cu, 0x100664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100664u;
label_100664:
    // 0x100664: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100664u;
    {
        const bool branch_taken_0x100664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100664) {
            ctx->pc = 0x100674u;
            goto label_100674;
        }
    }
    ctx->pc = 0x10066Cu;
    // 0x10066c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x10066Cu;
    SET_GPR_U32(ctx, 31, 0x100674u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x10066Cu, 0x100674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100674u;
label_100674:
    // 0x100674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10067c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10067cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100680: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x100684: 0x3e00008  jr          $ra
    ctx->pc = 0x100684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10068Cu;
}
