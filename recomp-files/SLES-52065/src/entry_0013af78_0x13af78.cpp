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

// Function: entry_0013af78
// Address: 0x13af78 - 0x13afac
void entry_0013af78_0x13af78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013af78_0x13af78");
#endif

    switch (ctx->pc) {
        case 0x13af84u: goto label_13af84;
        case 0x13af8cu: goto label_13af8c;
        default: break;
    }

    ctx->pc = 0x13af78u;

    // 0x13af78: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13af78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13af7c: 0xc048bfc  jal         func_122FF0
    ctx->pc = 0x13AF7Cu;
    SET_GPR_U32(ctx, 31, 0x13AF84u);
    ctx->pc = 0x13AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF7Cu;
    // 0x13af80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FF0u, 0x13AF7Cu, 0x13AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF84u;
label_13af84:
    // 0x13af84: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13AF84u;
    SET_GPR_U32(ctx, 31, 0x13AF8Cu);
    ctx->pc = 0x13AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF84u;
    // 0x13af88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13AF84u, 0x13AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF8Cu;
label_13af8c:
    // 0x13af8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13af90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13af90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13af94: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x13af94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x13af98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13af98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13af9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13af9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13afa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13afa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13afa4: 0x3e00008  jr          $ra
    ctx->pc = 0x13AFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFA4u;
        // 0x13afa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AFACu;
}
