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

// Function: FUN_00106f80
// Address: 0x106f80 - 0x106fd8
void FUN_00106f80_0x106f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106f80_0x106f80");
#endif

    switch (ctx->pc) {
        case 0x106f80u: goto label_106f80;
        case 0x106f84u: goto label_106f84;
        case 0x106f88u: goto label_106f88;
        case 0x106f8cu: goto label_106f8c;
        case 0x106f90u: goto label_106f90;
        case 0x106f94u: goto label_106f94;
        case 0x106f98u: goto label_106f98;
        case 0x106f9cu: goto label_106f9c;
        case 0x106fa0u: goto label_106fa0;
        case 0x106fa4u: goto label_106fa4;
        case 0x106fa8u: goto label_106fa8;
        case 0x106facu: goto label_106fac;
        case 0x106fb0u: goto label_106fb0;
        case 0x106fb4u: goto label_106fb4;
        case 0x106fb8u: goto label_106fb8;
        case 0x106fbcu: goto label_106fbc;
        case 0x106fc0u: goto label_106fc0;
        case 0x106fc4u: goto label_106fc4;
        case 0x106fc8u: goto label_106fc8;
        case 0x106fccu: goto label_106fcc;
        case 0x106fd0u: goto label_106fd0;
        case 0x106fd4u: goto label_106fd4;
        default: break;
    }

    ctx->pc = 0x106f80u;

label_106f80:
    // 0x106f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_106f84:
    // 0x106f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_106f88:
    // 0x106f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_106f8c:
    // 0x106f8c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x106f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_106f90:
    // 0x106f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106f94:
    // 0x106f94: 0x8c840220  lw          $a0, 0x220($a0)
    ctx->pc = 0x106f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_106f98:
    // 0x106f98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x106f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_106f9c:
    // 0x106f9c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x106f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_106fa0:
    // 0x106fa0: 0x320f809  jalr        $t9
label_106fa4:
    if (ctx->pc == 0x106FA4u) {
        ctx->pc = 0x106FA8u;
        goto label_106fa8;
    }
    ctx->pc = 0x106FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x106FA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106FA0u, 0x106FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106FA8u;
label_106fa8:
    // 0x106fa8: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x106fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_106fac:
    // 0x106fac: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x106facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_106fb0:
    // 0x106fb0: 0x24a5fc80  addiu       $a1, $a1, -0x380
    ctx->pc = 0x106fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966400));
label_106fb4:
    // 0x106fb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x106fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_106fb8:
    // 0x106fb8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x106fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_106fbc:
    // 0x106fbc: 0x320f809  jalr        $t9
label_106fc0:
    if (ctx->pc == 0x106FC0u) {
        ctx->pc = 0x106FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FBCu;
        // 0x106fc0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FC4u;
        goto label_106fc4;
    }
    ctx->pc = 0x106FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x106FC4u);
        ctx->pc = 0x106FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FBCu;
        // 0x106fc0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106FBCu, 0x106FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106FC4u;
label_106fc4:
    // 0x106fc4: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x106fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
label_106fc8:
    // 0x106fc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_106fcc:
    // 0x106fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_106fd0:
    // 0x106fd0: 0x3e00008  jr          $ra
label_106fd4:
    if (ctx->pc == 0x106FD4u) {
        ctx->pc = 0x106FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FD0u;
        // 0x106fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FD8u;
        goto label_fallthrough_0x106fd0;
    }
    ctx->pc = 0x106FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FD0u;
        // 0x106fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106fd0:
    ctx->pc = 0x106FD8u;
}
