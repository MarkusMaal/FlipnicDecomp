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

// Function: FUN_0017dd40
// Address: 0x17dd40 - 0x17dda0
void FUN_0017dd40_0x17dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017dd40_0x17dd40");
#endif

    ctx->pc = 0x17dd40u;

    // 0x17dd40: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x17dd40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd44: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x17dd44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd48: 0xaf84863c  sw          $a0, -0x79C4($gp)
    ctx->pc = 0x17dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 4));
    // 0x17dd4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17dd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd50: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17dd54: 0xaf828640  sw          $v0, -0x79C0($gp)
    ctx->pc = 0x17dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 2));
    // 0x17dd58: 0x24847730  addiu       $a0, $a0, 0x7730
    ctx->pc = 0x17dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    // 0x17dd5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17dd5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd60: 0x805f75c  j           func_17DD70
    ctx->pc = 0x17DD60u;
    ctx->pc = 0x17DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD60u;
    // 0x17dd64: 0xaf878644  sw          $a3, -0x79BC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DD70u;
    goto label_17dd70;
    ctx->pc = 0x17DD68u;
    // 0x17dd68: 0x0  nop
    ctx->pc = 0x17dd68u;
    // NOP
    // 0x17dd6c: 0x0  nop
    ctx->pc = 0x17dd6cu;
    // NOP
label_17dd70:
    // 0x17dd70: 0xac85101c  sw          $a1, 0x101C($a0)
    ctx->pc = 0x17dd70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4124), GPR_U32(ctx, 5));
    // 0x17dd74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dd78: 0x14e30007  bne         $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DD78u;
    {
        const bool branch_taken_0x17dd78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x17DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD78u;
        // 0x17dd7c: 0xac861020  sw          $a2, 0x1020($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd78) {
            ctx->pc = 0x17DD98u;
            goto label_17dd98;
        }
    }
    ctx->pc = 0x17DD80u;
    // 0x17dd80: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x17dd80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x17dd84: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x17dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17dd88: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17dd8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17dd90: 0x8c67001c  lw          $a3, 0x1C($v1)
    ctx->pc = 0x17dd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x17dd94: 0x0  nop
    ctx->pc = 0x17dd94u;
    // NOP
label_17dd98:
    // 0x17dd98: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD98u;
        // 0x17dd9c: 0xac871024  sw          $a3, 0x1024($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4132), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DDA0u;
}
