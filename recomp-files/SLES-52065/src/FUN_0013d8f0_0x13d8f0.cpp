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

// Function: FUN_0013d8f0
// Address: 0x13d8f0 - 0x13d944
void FUN_0013d8f0_0x13d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d8f0_0x13d8f0");
#endif

    switch (ctx->pc) {
        case 0x13d8f0u: goto label_13d8f0;
        case 0x13d8f4u: goto label_13d8f4;
        case 0x13d8f8u: goto label_13d8f8;
        case 0x13d8fcu: goto label_13d8fc;
        case 0x13d900u: goto label_13d900;
        case 0x13d904u: goto label_13d904;
        case 0x13d908u: goto label_13d908;
        case 0x13d90cu: goto label_13d90c;
        case 0x13d910u: goto label_13d910;
        case 0x13d914u: goto label_13d914;
        case 0x13d918u: goto label_13d918;
        case 0x13d91cu: goto label_13d91c;
        case 0x13d920u: goto label_13d920;
        case 0x13d924u: goto label_13d924;
        case 0x13d928u: goto label_13d928;
        case 0x13d92cu: goto label_13d92c;
        case 0x13d930u: goto label_13d930;
        case 0x13d934u: goto label_13d934;
        case 0x13d938u: goto label_13d938;
        case 0x13d93cu: goto label_13d93c;
        case 0x13d940u: goto label_13d940;
        default: break;
    }

    ctx->pc = 0x13d8f0u;

label_13d8f0:
    // 0x13d8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13d8f4:
    // 0x13d8f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d8f8:
    // 0x13d8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13d8fc:
    // 0x13d8fc: 0x9083018a  lbu         $v1, 0x18A($a0)
    ctx->pc = 0x13d8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13d900:
    // 0x13d900: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_13d904:
    if (ctx->pc == 0x13D904u) {
        ctx->pc = 0x13D908u;
        goto label_13d908;
    }
    ctx->pc = 0x13D900u;
    {
        const bool branch_taken_0x13d900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d900) {
            ctx->pc = 0x13D930u;
            goto label_13d930;
        }
    }
    ctx->pc = 0x13D908u;
label_13d908:
    // 0x13d908: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d90c:
    // 0x13d90c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13d90cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13d910:
    // 0x13d910: 0x320f809  jalr        $t9
label_13d914:
    if (ctx->pc == 0x13D914u) {
        ctx->pc = 0x13D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D910u;
        // 0x13d914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D918u;
        goto label_13d918;
    }
    ctx->pc = 0x13D910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D918u);
        ctx->pc = 0x13D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D910u;
        // 0x13d914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D910u, 0x13D918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D918u;
label_13d918:
    // 0x13d918: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x13d918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13d91c:
    // 0x13d91c: 0x8f3900c0  lw          $t9, 0xC0($t9)
    ctx->pc = 0x13d91cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 192)));
label_13d920:
    // 0x13d920: 0x320f809  jalr        $t9
label_13d924:
    if (ctx->pc == 0x13D924u) {
        ctx->pc = 0x13D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D920u;
        // 0x13d924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D928u;
        goto label_13d928;
    }
    ctx->pc = 0x13D920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D928u);
        ctx->pc = 0x13D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D920u;
        // 0x13d924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D920u, 0x13D928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D928u;
label_13d928:
    // 0x13d928: 0x10000004  b           . + 4 + (0x4 << 2)
label_13d92c:
    if (ctx->pc == 0x13D92Cu) {
        ctx->pc = 0x13D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D928u;
        // 0x13d92c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D930u;
        goto label_13d930;
    }
    ctx->pc = 0x13D928u;
    {
        const bool branch_taken_0x13d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D928u;
        // 0x13d92c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d928) {
            ctx->pc = 0x13D93Cu;
            goto label_13d93c;
        }
    }
    ctx->pc = 0x13D930u;
label_13d930:
    // 0x13d930: 0x908200dc  lbu         $v0, 0xDC($a0)
    ctx->pc = 0x13d930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 220)));
label_13d934:
    // 0x13d934: 0x0  nop
    ctx->pc = 0x13d934u;
    // NOP
label_13d938:
    // 0x13d938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d93c:
    // 0x13d93c: 0x3e00008  jr          $ra
label_13d940:
    if (ctx->pc == 0x13D940u) {
        ctx->pc = 0x13D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D93Cu;
        // 0x13d940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D944u;
        goto label_fallthrough_0x13d93c;
    }
    ctx->pc = 0x13D93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D93Cu;
        // 0x13d940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13d93c:
    ctx->pc = 0x13D944u;
}
