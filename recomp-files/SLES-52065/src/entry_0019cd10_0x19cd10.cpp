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

// Function: entry_0019cd10
// Address: 0x19cd10 - 0x19cd88
void entry_0019cd10_0x19cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cd10_0x19cd10");
#endif

    switch (ctx->pc) {
        case 0x19cd40u: goto label_19cd40;
        case 0x19cd58u: goto label_19cd58;
        case 0x19cd70u: goto label_19cd70;
        default: break;
    }

    ctx->pc = 0x19cd10u;

    // 0x19cd10: 0x8e42069c  lw          $v0, 0x69C($s2)
    ctx->pc = 0x19cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1692)));
    // 0x19cd14: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x19cd14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19cd18: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x19CD18u;
    {
        const bool branch_taken_0x19cd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD18u;
        // 0x19cd1c: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd18) {
            ctx->pc = 0x19CC64u;
            return;
        }
    }
    ctx->pc = 0x19CD20u;
    // 0x19cd20: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x19cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x19cd24: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19cd28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19cd2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19cd30: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x19cd34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x19cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19cd38: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x19CD38u;
    SET_GPR_U32(ctx, 31, 0x19CD40u);
    ctx->pc = 0x19CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD38u;
    // 0x19cd3c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x19CD38u, 0x19CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD40u;
label_19cd40:
    // 0x19cd40: 0x8e460824  lw          $a2, 0x824($s2)
    ctx->pc = 0x19cd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2084)));
    // 0x19cd44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19cd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd48: 0x26450828  addiu       $a1, $s2, 0x828
    ctx->pc = 0x19cd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2088));
    // 0x19cd4c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x19cd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19cd50: 0xc06737c  jal         func_19CDF0
    ctx->pc = 0x19CD50u;
    SET_GPR_U32(ctx, 31, 0x19CD58u);
    ctx->pc = 0x19CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD50u;
    // 0x19cd54: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDF0u, 0x19CD50u, 0x19CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD58u;
label_19cd58:
    // 0x19cd58: 0x8e460760  lw          $a2, 0x760($s2)
    ctx->pc = 0x19cd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1888)));
    // 0x19cd5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19cd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd60: 0x26450764  addiu       $a1, $s2, 0x764
    ctx->pc = 0x19cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1892));
    // 0x19cd64: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x19cd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19cd68: 0xc06737c  jal         func_19CDF0
    ctx->pc = 0x19CD68u;
    SET_GPR_U32(ctx, 31, 0x19CD70u);
    ctx->pc = 0x19CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD68u;
    // 0x19cd6c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDF0u, 0x19CD68u, 0x19CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD70u;
label_19cd70:
    // 0x19cd70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19cd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19cd74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19cd74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cd78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cd78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cd7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cd80: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD80u;
        // 0x19cd84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD88u;
}
