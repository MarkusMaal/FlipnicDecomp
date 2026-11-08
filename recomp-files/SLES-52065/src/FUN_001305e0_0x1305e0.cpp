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

// Function: FUN_001305e0
// Address: 0x1305e0 - 0x130664
void FUN_001305e0_0x1305e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001305e0_0x1305e0");
#endif

    switch (ctx->pc) {
        case 0x1305fcu: goto label_1305fc;
        case 0x130608u: goto label_130608;
        case 0x130620u: goto label_130620;
        case 0x13063cu: goto label_13063c;
        case 0x130654u: goto label_130654;
        default: break;
    }

    ctx->pc = 0x1305e0u;

    // 0x1305e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1305e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1305e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1305e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1305e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1305ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1305ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1305f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1305f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305f4: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x1305F4u;
    SET_GPR_U32(ctx, 31, 0x1305FCu);
    ctx->pc = 0x1305F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305F4u;
    // 0x1305f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x1305F4u, 0x1305FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305FCu;
label_1305fc:
    // 0x1305fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1305fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130600: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x130600u;
    SET_GPR_U32(ctx, 31, 0x130608u);
    ctx->pc = 0x130604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130600u;
    // 0x130604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x130600u, 0x130608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130608u;
label_130608:
    // 0x130608: 0x83828510  lb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x13060c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13060Cu;
    {
        const bool branch_taken_0x13060c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13060c) {
            ctx->pc = 0x130644u;
            goto label_130644;
        }
    }
    ctx->pc = 0x130614u;
    // 0x130614: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130618: 0xc04c4b8  jal         func_1312E0
    ctx->pc = 0x130618u;
    SET_GPR_U32(ctx, 31, 0x130620u);
    ctx->pc = 0x13061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130618u;
    // 0x13061c: 0x24846280  addiu       $a0, $a0, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312E0u, 0x130618u, 0x130620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130620u;
label_130620:
    // 0x130620: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130624: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x130624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x130628: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x130628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x13062c: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x13062cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130630: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x130630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x130634: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x130634u;
    SET_GPR_U32(ctx, 31, 0x13063Cu);
    ctx->pc = 0x130638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130634u;
    // 0x130638: 0x24c66270  addiu       $a2, $a2, 0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x130634u, 0x13063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13063Cu;
label_13063c:
    // 0x13063c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130640: 0xa3828510  sb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130640u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935824), (uint8_t)GPR_U32(ctx, 2));
label_130644:
    // 0x130644: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13064c: 0xc04c19c  jal         func_130670
    ctx->pc = 0x13064Cu;
    SET_GPR_U32(ctx, 31, 0x130654u);
    ctx->pc = 0x130650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13064Cu;
    // 0x130650: 0x24846280  addiu       $a0, $a0, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130670u, 0x13064Cu, 0x130654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130654u;
label_130654:
    // 0x130654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13065c: 0x3e00008  jr          $ra
    ctx->pc = 0x13065Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13065Cu;
        // 0x130660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13065Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130664u;
}
