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

// Function: FUN_00100540
// Address: 0x100540 - 0x10059c
void FUN_00100540_0x100540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100540_0x100540");
#endif

    switch (ctx->pc) {
        case 0x100564u: goto label_100564;
        case 0x100574u: goto label_100574;
        case 0x100584u: goto label_100584;
        default: break;
    }

    ctx->pc = 0x100540u;

    // 0x100540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10054c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10054cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x100550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100554: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x100554u;
    {
        const bool branch_taken_0x100554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x100554) {
            ctx->pc = 0x100584u;
            goto label_100584;
        }
    }
    ctx->pc = 0x10055Cu;
    // 0x10055c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x10055Cu;
    SET_GPR_U32(ctx, 31, 0x100564u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x10055Cu, 0x100564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100564u;
label_100564:
    // 0x100564: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10056c: 0xc07fb18  jal         func_1FEC60
    ctx->pc = 0x10056Cu;
    SET_GPR_U32(ctx, 31, 0x100574u);
    ctx->pc = 0x1FEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC60u, 0x10056Cu, 0x100574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100574u;
label_100574:
    // 0x100574: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100574u;
    {
        const bool branch_taken_0x100574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100574) {
            ctx->pc = 0x100584u;
            goto label_100584;
        }
    }
    ctx->pc = 0x10057Cu;
    // 0x10057c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x10057Cu;
    SET_GPR_U32(ctx, 31, 0x100584u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x10057Cu, 0x100584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100584u;
label_100584:
    // 0x100584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10058c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10058cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100590: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x100594: 0x3e00008  jr          $ra
    ctx->pc = 0x100594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10059Cu;
}
