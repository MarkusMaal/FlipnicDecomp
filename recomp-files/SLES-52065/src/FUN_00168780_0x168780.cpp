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

// Function: FUN_00168780
// Address: 0x168780 - 0x1687c0
void FUN_00168780_0x168780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168780_0x168780");
#endif

    switch (ctx->pc) {
        case 0x168780u: goto label_168780;
        case 0x168784u: goto label_168784;
        case 0x168788u: goto label_168788;
        case 0x16878cu: goto label_16878c;
        case 0x168790u: goto label_168790;
        case 0x168794u: goto label_168794;
        case 0x168798u: goto label_168798;
        case 0x16879cu: goto label_16879c;
        case 0x1687a0u: goto label_1687a0;
        case 0x1687a4u: goto label_1687a4;
        case 0x1687a8u: goto label_1687a8;
        case 0x1687acu: goto label_1687ac;
        case 0x1687b0u: goto label_1687b0;
        case 0x1687b4u: goto label_1687b4;
        case 0x1687b8u: goto label_1687b8;
        case 0x1687bcu: goto label_1687bc;
        default: break;
    }

    ctx->pc = 0x168780u;

label_168780:
    // 0x168780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_168784:
    // 0x168784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_168788:
    // 0x168788: 0x8c830220  lw          $v1, 0x220($a0)
    ctx->pc = 0x168788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_16878c:
    // 0x16878c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_168790:
    if (ctx->pc == 0x168790u) {
        ctx->pc = 0x168794u;
        goto label_168794;
    }
    ctx->pc = 0x16878Cu;
    {
        const bool branch_taken_0x16878c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16878c) {
            ctx->pc = 0x1687B4u;
            goto label_1687b4;
        }
    }
    ctx->pc = 0x168794u;
label_168794:
    // 0x168794: 0x846501e8  lh          $a1, 0x1E8($v1)
    ctx->pc = 0x168794u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_168798:
    // 0x168798: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x168798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16879c:
    // 0x16879c: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_1687a0:
    if (ctx->pc == 0x1687A0u) {
        ctx->pc = 0x1687A4u;
        goto label_1687a4;
    }
    ctx->pc = 0x16879Cu;
    {
        const bool branch_taken_0x16879c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x16879c) {
            ctx->pc = 0x1687B4u;
            goto label_1687b4;
        }
    }
    ctx->pc = 0x1687A4u;
label_1687a4:
    // 0x1687a4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1687a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1687a8:
    // 0x1687a8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1687a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1687ac:
    // 0x1687ac: 0x320f809  jalr        $t9
label_1687b0:
    if (ctx->pc == 0x1687B0u) {
        ctx->pc = 0x1687B4u;
        goto label_1687b4;
    }
    ctx->pc = 0x1687ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1687B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1687ACu, 0x1687B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1687B4u;
label_1687b4:
    // 0x1687b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1687b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1687b8:
    // 0x1687b8: 0x3e00008  jr          $ra
label_1687bc:
    if (ctx->pc == 0x1687BCu) {
        ctx->pc = 0x1687BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687B8u;
        // 0x1687bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687C0u;
        goto label_fallthrough_0x1687b8;
    }
    ctx->pc = 0x1687B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1687BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687B8u;
        // 0x1687bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1687B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1687b8:
    ctx->pc = 0x1687C0u;
}
