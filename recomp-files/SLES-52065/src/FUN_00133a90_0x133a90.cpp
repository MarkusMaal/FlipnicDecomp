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

// Function: FUN_00133a90
// Address: 0x133a90 - 0x133ad0
void FUN_00133a90_0x133a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133a90_0x133a90");
#endif

    switch (ctx->pc) {
        case 0x133a90u: goto label_133a90;
        case 0x133a94u: goto label_133a94;
        case 0x133a98u: goto label_133a98;
        case 0x133a9cu: goto label_133a9c;
        case 0x133aa0u: goto label_133aa0;
        case 0x133aa4u: goto label_133aa4;
        case 0x133aa8u: goto label_133aa8;
        case 0x133aacu: goto label_133aac;
        case 0x133ab0u: goto label_133ab0;
        case 0x133ab4u: goto label_133ab4;
        case 0x133ab8u: goto label_133ab8;
        case 0x133abcu: goto label_133abc;
        case 0x133ac0u: goto label_133ac0;
        case 0x133ac4u: goto label_133ac4;
        case 0x133ac8u: goto label_133ac8;
        case 0x133accu: goto label_133acc;
        default: break;
    }

    ctx->pc = 0x133a90u;

label_133a90:
    // 0x133a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_133a94:
    // 0x133a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_133a98:
    // 0x133a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_133a9c:
    // 0x133a9c: 0xc04c57c  jal         func_1315F0
label_133aa0:
    if (ctx->pc == 0x133AA0u) {
        ctx->pc = 0x133AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A9Cu;
        // 0x133aa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AA4u;
        goto label_133aa4;
    }
    ctx->pc = 0x133A9Cu;
    SET_GPR_U32(ctx, 31, 0x133AA4u);
    ctx->pc = 0x133AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A9Cu;
    // 0x133aa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1315F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1315F0u, 0x133A9Cu, 0x133AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AA4u;
label_133aa4:
    // 0x133aa4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_133aa8:
    if (ctx->pc == 0x133AA8u) {
        ctx->pc = 0x133AACu;
        goto label_133aac;
    }
    ctx->pc = 0x133AA4u;
    {
        const bool branch_taken_0x133aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x133aa4) {
            ctx->pc = 0x133AC0u;
            goto label_133ac0;
        }
    }
    ctx->pc = 0x133AACu;
label_133aac:
    // 0x133aac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x133aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_133ab0:
    // 0x133ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133ab4:
    // 0x133ab4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x133ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_133ab8:
    // 0x133ab8: 0x320f809  jalr        $t9
label_133abc:
    if (ctx->pc == 0x133ABCu) {
        ctx->pc = 0x133ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AB8u;
        // 0x133abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AC0u;
        goto label_133ac0;
    }
    ctx->pc = 0x133AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133AC0u);
        ctx->pc = 0x133ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AB8u;
        // 0x133abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133AB8u, 0x133AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133AC0u;
label_133ac0:
    // 0x133ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133ac4:
    // 0x133ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_133ac8:
    // 0x133ac8: 0x3e00008  jr          $ra
label_133acc:
    if (ctx->pc == 0x133ACCu) {
        ctx->pc = 0x133ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AC8u;
        // 0x133acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AD0u;
        goto label_fallthrough_0x133ac8;
    }
    ctx->pc = 0x133AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AC8u;
        // 0x133acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x133ac8:
    ctx->pc = 0x133AD0u;
}
