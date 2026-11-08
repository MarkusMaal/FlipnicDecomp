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

// Function: entry_00181f78
// Address: 0x181f78 - 0x181fcc
void entry_00181f78_0x181f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181f78_0x181f78");
#endif

    switch (ctx->pc) {
        case 0x181f80u: goto label_181f80;
        default: break;
    }

    ctx->pc = 0x181f78u;

    // 0x181f78: 0xc060908  jal         func_182420
    ctx->pc = 0x181F78u;
    SET_GPR_U32(ctx, 31, 0x181F80u);
    ctx->pc = 0x182420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182420u, 0x181F78u, 0x181F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F80u;
label_181f80:
    // 0x181f80: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x181f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x181f84: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x181f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x181f88: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x181f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x181f8c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x181f90: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x181f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x181f94: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x181f94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x181f98: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x181f98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x181f9c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x181f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x181fa0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x181fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x181fa4: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x181fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x181fa8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x181fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x181fac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x181facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x181fb0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x181fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x181fb4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x181fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x181fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x181FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FC4u;
        // 0x181fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181FCCu;
}
