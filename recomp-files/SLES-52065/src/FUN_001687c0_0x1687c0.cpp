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

// Function: FUN_001687c0
// Address: 0x1687c0 - 0x168800
void FUN_001687c0_0x1687c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001687c0_0x1687c0");
#endif

    switch (ctx->pc) {
        case 0x1687c0u: goto label_1687c0;
        case 0x1687c4u: goto label_1687c4;
        case 0x1687c8u: goto label_1687c8;
        case 0x1687ccu: goto label_1687cc;
        case 0x1687d0u: goto label_1687d0;
        case 0x1687d4u: goto label_1687d4;
        case 0x1687d8u: goto label_1687d8;
        case 0x1687dcu: goto label_1687dc;
        case 0x1687e0u: goto label_1687e0;
        case 0x1687e4u: goto label_1687e4;
        case 0x1687e8u: goto label_1687e8;
        case 0x1687ecu: goto label_1687ec;
        case 0x1687f0u: goto label_1687f0;
        case 0x1687f4u: goto label_1687f4;
        case 0x1687f8u: goto label_1687f8;
        case 0x1687fcu: goto label_1687fc;
        default: break;
    }

    ctx->pc = 0x1687c0u;

label_1687c0:
    // 0x1687c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1687c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1687c4:
    // 0x1687c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1687c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1687c8:
    // 0x1687c8: 0x8c830220  lw          $v1, 0x220($a0)
    ctx->pc = 0x1687c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_1687cc:
    // 0x1687cc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1687d0:
    if (ctx->pc == 0x1687D0u) {
        ctx->pc = 0x1687D4u;
        goto label_1687d4;
    }
    ctx->pc = 0x1687CCu;
    {
        const bool branch_taken_0x1687cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1687cc) {
            ctx->pc = 0x1687F4u;
            goto label_1687f4;
        }
    }
    ctx->pc = 0x1687D4u;
label_1687d4:
    // 0x1687d4: 0x846501e8  lh          $a1, 0x1E8($v1)
    ctx->pc = 0x1687d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1687d8:
    // 0x1687d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1687d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1687dc:
    // 0x1687dc: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_1687e0:
    if (ctx->pc == 0x1687E0u) {
        ctx->pc = 0x1687E4u;
        goto label_1687e4;
    }
    ctx->pc = 0x1687DCu;
    {
        const bool branch_taken_0x1687dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1687dc) {
            ctx->pc = 0x1687F4u;
            goto label_1687f4;
        }
    }
    ctx->pc = 0x1687E4u;
label_1687e4:
    // 0x1687e4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1687e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1687e8:
    // 0x1687e8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1687e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1687ec:
    // 0x1687ec: 0x320f809  jalr        $t9
label_1687f0:
    if (ctx->pc == 0x1687F0u) {
        ctx->pc = 0x1687F4u;
        goto label_1687f4;
    }
    ctx->pc = 0x1687ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1687F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1687ECu, 0x1687F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1687F4u;
label_1687f4:
    // 0x1687f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1687f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1687f8:
    // 0x1687f8: 0x3e00008  jr          $ra
label_1687fc:
    if (ctx->pc == 0x1687FCu) {
        ctx->pc = 0x1687FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687F8u;
        // 0x1687fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168800u;
        goto label_fallthrough_0x1687f8;
    }
    ctx->pc = 0x1687F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1687FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687F8u;
        // 0x1687fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1687F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1687f8:
    ctx->pc = 0x168800u;
}
