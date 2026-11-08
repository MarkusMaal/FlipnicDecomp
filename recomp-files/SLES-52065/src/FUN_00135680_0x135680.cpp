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

// Function: FUN_00135680
// Address: 0x135680 - 0x1356b0
void FUN_00135680_0x135680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135680_0x135680");
#endif

    switch (ctx->pc) {
        case 0x135680u: goto label_135680;
        case 0x135684u: goto label_135684;
        case 0x135688u: goto label_135688;
        case 0x13568cu: goto label_13568c;
        case 0x135690u: goto label_135690;
        case 0x135694u: goto label_135694;
        case 0x135698u: goto label_135698;
        case 0x13569cu: goto label_13569c;
        case 0x1356a0u: goto label_1356a0;
        case 0x1356a4u: goto label_1356a4;
        case 0x1356a8u: goto label_1356a8;
        case 0x1356acu: goto label_1356ac;
        default: break;
    }

    ctx->pc = 0x135680u;

label_135680:
    // 0x135680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_135684:
    // 0x135684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_135688:
    // 0x135688: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x135688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_13568c:
    // 0x13568c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_135690:
    if (ctx->pc == 0x135690u) {
        ctx->pc = 0x135690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13568Cu;
        // 0x135690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135694u;
        goto label_135694;
    }
    ctx->pc = 0x13568Cu;
    {
        const bool branch_taken_0x13568c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x135690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13568Cu;
        // 0x135690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13568c) {
            ctx->pc = 0x1356A4u;
            goto label_1356a4;
        }
    }
    ctx->pc = 0x135694u;
label_135694:
    // 0x135694: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135698:
    // 0x135698: 0x8f390084  lw          $t9, 0x84($t9)
    ctx->pc = 0x135698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 132)));
label_13569c:
    // 0x13569c: 0x320f809  jalr        $t9
label_1356a0:
    if (ctx->pc == 0x1356A0u) {
        ctx->pc = 0x1356A4u;
        goto label_1356a4;
    }
    ctx->pc = 0x13569Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1356A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13569Cu, 0x1356A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1356A4u;
label_1356a4:
    // 0x1356a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1356a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1356a8:
    // 0x1356a8: 0x3e00008  jr          $ra
label_1356ac:
    if (ctx->pc == 0x1356ACu) {
        ctx->pc = 0x1356ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356A8u;
        // 0x1356ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1356B0u;
        goto label_fallthrough_0x1356a8;
    }
    ctx->pc = 0x1356A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1356ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356A8u;
        // 0x1356ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1356A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1356a8:
    ctx->pc = 0x1356B0u;
}
