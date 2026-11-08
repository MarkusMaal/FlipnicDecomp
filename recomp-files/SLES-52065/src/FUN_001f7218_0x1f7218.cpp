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

// Function: FUN_001f7218
// Address: 0x1f7218 - 0x1f7254
void FUN_001f7218_0x1f7218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7218_0x1f7218");
#endif

    switch (ctx->pc) {
        case 0x1f7218u: goto label_1f7218;
        case 0x1f721cu: goto label_1f721c;
        case 0x1f7220u: goto label_1f7220;
        case 0x1f7224u: goto label_1f7224;
        case 0x1f7228u: goto label_1f7228;
        case 0x1f722cu: goto label_1f722c;
        case 0x1f7230u: goto label_1f7230;
        case 0x1f7234u: goto label_1f7234;
        case 0x1f7238u: goto label_1f7238;
        case 0x1f723cu: goto label_1f723c;
        case 0x1f7240u: goto label_1f7240;
        case 0x1f7244u: goto label_1f7244;
        case 0x1f7248u: goto label_1f7248;
        case 0x1f724cu: goto label_1f724c;
        case 0x1f7250u: goto label_1f7250;
        default: break;
    }

    ctx->pc = 0x1f7218u;

label_1f7218:
    // 0x1f7218: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f7218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f721c:
    // 0x1f721c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f721cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f7220:
    // 0x1f7220: 0x8c451344  lw          $a1, 0x1344($v0)
    ctx->pc = 0x1f7220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4932)));
label_1f7224:
    // 0x1f7224: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1f7228:
    if (ctx->pc == 0x1F7228u) {
        ctx->pc = 0x1F7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7224u;
        // 0x1f7228: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F722Cu;
        goto label_1f722c;
    }
    ctx->pc = 0x1F7224u;
    {
        const bool branch_taken_0x1f7224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7224u;
        // 0x1f7228: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7224) {
            ctx->pc = 0x1F7248u;
            goto label_1f7248;
        }
    }
    ctx->pc = 0x1F722Cu;
label_1f722c:
    // 0x1f722c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f722cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f7230:
    // 0x1f7230: 0x8c43bb24  lw          $v1, -0x44DC($v0)
    ctx->pc = 0x1f7230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949668)));
label_1f7234:
    // 0x1f7234: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1f7238:
    if (ctx->pc == 0x1F7238u) {
        ctx->pc = 0x1F7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7234u;
        // 0x1f7238: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F723Cu;
        goto label_1f723c;
    }
    ctx->pc = 0x1F7234u;
    {
        const bool branch_taken_0x1f7234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7234u;
        // 0x1f7238: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7234) {
            ctx->pc = 0x1F724Cu;
            goto label_1f724c;
        }
    }
    ctx->pc = 0x1F723Cu;
label_1f723c:
    // 0x1f723c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f723cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f7240:
    // 0x1f7240: 0xa0f809  jalr        $a1
label_1f7244:
    if (ctx->pc == 0x1F7244u) {
        ctx->pc = 0x1F7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7240u;
        // 0x1f7244: 0x8c441348  lw          $a0, 0x1348($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7248u;
        goto label_1f7248;
    }
    ctx->pc = 0x1F7240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F7248u);
        ctx->pc = 0x1F7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7240u;
        // 0x1f7244: 0x8c441348  lw          $a0, 0x1348($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7240u, 0x1F7248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7248u;
label_1f7248:
    // 0x1f7248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f724c:
    // 0x1f724c: 0x3e00008  jr          $ra
label_1f7250:
    if (ctx->pc == 0x1F7250u) {
        ctx->pc = 0x1F7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F724Cu;
        // 0x1f7250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7254u;
        goto label_fallthrough_0x1f724c;
    }
    ctx->pc = 0x1F724Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F724Cu;
        // 0x1f7250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F724Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f724c:
    ctx->pc = 0x1F7254u;
}
