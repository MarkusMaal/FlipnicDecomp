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

// Function: FUN_001004a0
// Address: 0x1004a0 - 0x100538
void FUN_001004a0_0x1004a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001004a0_0x1004a0");
#endif

    switch (ctx->pc) {
        case 0x1004c8u: goto label_1004c8;
        case 0x1004d4u: goto label_1004d4;
        case 0x1004f0u: goto label_1004f0;
        case 0x100504u: goto label_100504;
        case 0x100518u: goto label_100518;
        default: break;
    }

    ctx->pc = 0x1004a0u;

    // 0x1004a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1004a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1004a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1004a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1004a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1004a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1004ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1004acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1004b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1004b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1004b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1004b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1004b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004bc: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x1004bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1004c0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1004C0u;
    SET_GPR_U32(ctx, 31, 0x1004C8u);
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1004C0u, 0x1004C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004C8u;
label_1004c8:
    // 0x1004c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1004c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004cc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1004CCu;
    SET_GPR_U32(ctx, 31, 0x1004D4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1004CCu, 0x1004D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004D4u;
label_1004d4:
    // 0x1004d4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1004D4u;
    {
        const bool branch_taken_0x1004d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1004d4) {
            ctx->pc = 0x1004E8u;
            goto label_1004e8;
        }
    }
    ctx->pc = 0x1004DCu;
    // 0x1004dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1004dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1004E0u;
    {
        const bool branch_taken_0x1004e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1004e0) {
            ctx->pc = 0x10051Cu;
            goto label_10051c;
        }
    }
    ctx->pc = 0x1004E8u;
label_1004e8:
    // 0x1004e8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1004E8u;
    SET_GPR_U32(ctx, 31, 0x1004F0u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1004E8u, 0x1004F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004F0u;
label_1004f0:
    // 0x1004f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1004f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1004f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1004f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004fc: 0xc07fa8e  jal         func_1FEA38
    ctx->pc = 0x1004FCu;
    SET_GPR_U32(ctx, 31, 0x100504u);
    ctx->pc = 0x1FEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA38u, 0x1004FCu, 0x100504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100504u;
label_100504:
    // 0x100504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100508: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100508u;
    {
        const bool branch_taken_0x100508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100508) {
            ctx->pc = 0x100518u;
            goto label_100518;
        }
    }
    ctx->pc = 0x100510u;
    // 0x100510: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x100510u;
    SET_GPR_U32(ctx, 31, 0x100518u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x100510u, 0x100518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100518u;
label_100518:
    // 0x100518: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x100518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10051c:
    // 0x10051c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10051cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10052c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10052cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x100530: 0x3e00008  jr          $ra
    ctx->pc = 0x100530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100538u;
}
