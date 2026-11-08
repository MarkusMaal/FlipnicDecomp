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

// Function: AllocateMemoryReturnPointer
// Address: 0x1006f0 - 0x100774
void AllocateMemoryReturnPointer_0x1006f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocateMemoryReturnPointer_0x1006f0");
#endif

    switch (ctx->pc) {
        case 0x100734u: goto label_100734;
        case 0x100744u: goto label_100744;
        case 0x100758u: goto label_100758;
        default: break;
    }

    ctx->pc = 0x1006f0u;

    // 0x1006f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1006f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1006f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1006f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1006f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1006f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1006fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1006fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100704: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100704u;
    {
        const bool branch_taken_0x100704 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x100704) {
            ctx->pc = 0x100718u;
            goto label_100718;
        }
    }
    ctx->pc = 0x10070Cu;
    // 0x10070c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10070cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100710: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x100710u;
    {
        const bool branch_taken_0x100710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100710) {
            ctx->pc = 0x10075Cu;
            goto label_10075c;
        }
    }
    ctx->pc = 0x100718u;
label_100718:
    // 0x100718: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100718u;
    {
        const bool branch_taken_0x100718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x100718) {
            ctx->pc = 0x10072Cu;
            goto label_10072c;
        }
    }
    ctx->pc = 0x100720u;
    // 0x100720: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x100720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100724: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x100724u;
    {
        const bool branch_taken_0x100724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100724) {
            ctx->pc = 0x100758u;
            goto label_100758;
        }
    }
    ctx->pc = 0x10072Cu;
label_10072c:
    // 0x10072c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x10072Cu;
    SET_GPR_U32(ctx, 31, 0x100734u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x10072Cu, 0x100734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100734u;
label_100734:
    // 0x100734: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10073c: 0xc07fb0e  jal         func_1FEC38
    ctx->pc = 0x10073Cu;
    SET_GPR_U32(ctx, 31, 0x100744u);
    ctx->pc = 0x1FEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC38u, 0x10073Cu, 0x100744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100744u;
label_100744:
    // 0x100744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100748: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100748u;
    {
        const bool branch_taken_0x100748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x100748) {
            ctx->pc = 0x100758u;
            goto label_100758;
        }
    }
    ctx->pc = 0x100750u;
    // 0x100750: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x100750u;
    SET_GPR_U32(ctx, 31, 0x100758u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x100750u, 0x100758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100758u;
label_100758:
    // 0x100758: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10075c:
    // 0x10075c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10075cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100768: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10076c: 0x3e00008  jr          $ra
    ctx->pc = 0x10076Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10076Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100774u;
}
