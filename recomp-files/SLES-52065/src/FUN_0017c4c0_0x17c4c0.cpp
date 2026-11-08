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

// Function: FUN_0017c4c0
// Address: 0x17c4c0 - 0x17c504
void FUN_0017c4c0_0x17c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c4c0_0x17c4c0");
#endif

    switch (ctx->pc) {
        case 0x17c4c0u: goto label_17c4c0;
        case 0x17c4c4u: goto label_17c4c4;
        case 0x17c4c8u: goto label_17c4c8;
        case 0x17c4ccu: goto label_17c4cc;
        case 0x17c4d0u: goto label_17c4d0;
        case 0x17c4d4u: goto label_17c4d4;
        case 0x17c4d8u: goto label_17c4d8;
        case 0x17c4dcu: goto label_17c4dc;
        case 0x17c4e0u: goto label_17c4e0;
        case 0x17c4e4u: goto label_17c4e4;
        case 0x17c4e8u: goto label_17c4e8;
        case 0x17c4ecu: goto label_17c4ec;
        case 0x17c4f0u: goto label_17c4f0;
        case 0x17c4f4u: goto label_17c4f4;
        case 0x17c4f8u: goto label_17c4f8;
        case 0x17c4fcu: goto label_17c4fc;
        case 0x17c500u: goto label_17c500;
        default: break;
    }

    ctx->pc = 0x17c4c0u;

label_17c4c0:
    // 0x17c4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17c4c4:
    // 0x17c4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17c4c8:
    // 0x17c4c8: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x17c4c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_17c4cc:
    // 0x17c4cc: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_17c4d0:
    if (ctx->pc == 0x17C4D0u) {
        ctx->pc = 0x17C4D4u;
        goto label_17c4d4;
    }
    ctx->pc = 0x17C4CCu;
    {
        const bool branch_taken_0x17c4cc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17c4cc) {
            ctx->pc = 0x17C4F8u;
            goto label_17c4f8;
        }
    }
    ctx->pc = 0x17C4D4u;
label_17c4d4:
    // 0x17c4d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17c4d8:
    // 0x17c4d8: 0xa4830220  sh          $v1, 0x220($a0)
    ctx->pc = 0x17c4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 3));
label_17c4dc:
    // 0x17c4dc: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x17c4dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_17c4e0:
    // 0x17c4e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_17c4e4:
    if (ctx->pc == 0x17C4E4u) {
        ctx->pc = 0x17C4E8u;
        goto label_17c4e8;
    }
    ctx->pc = 0x17C4E0u;
    {
        const bool branch_taken_0x17c4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c4e0) {
            ctx->pc = 0x17C4F8u;
            goto label_17c4f8;
        }
    }
    ctx->pc = 0x17C4E8u;
label_17c4e8:
    // 0x17c4e8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x17c4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17c4ec:
    // 0x17c4ec: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17c4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17c4f0:
    // 0x17c4f0: 0x320f809  jalr        $t9
label_17c4f4:
    if (ctx->pc == 0x17C4F4u) {
        ctx->pc = 0x17C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4F0u;
        // 0x17c4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C4F8u;
        goto label_17c4f8;
    }
    ctx->pc = 0x17C4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17C4F8u);
        ctx->pc = 0x17C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4F0u;
        // 0x17c4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C4F0u, 0x17C4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C4F8u;
label_17c4f8:
    // 0x17c4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c4fc:
    // 0x17c4fc: 0x3e00008  jr          $ra
label_17c500:
    if (ctx->pc == 0x17C500u) {
        ctx->pc = 0x17C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4FCu;
        // 0x17c500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C504u;
        goto label_fallthrough_0x17c4fc;
    }
    ctx->pc = 0x17C4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4FCu;
        // 0x17c500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17c4fc:
    ctx->pc = 0x17C504u;
}
