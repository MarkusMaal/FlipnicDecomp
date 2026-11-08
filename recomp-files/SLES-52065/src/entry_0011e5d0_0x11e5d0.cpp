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

// Function: entry_0011e5d0
// Address: 0x11e5d0 - 0x11e618
void entry_0011e5d0_0x11e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e5d0_0x11e5d0");
#endif

    switch (ctx->pc) {
        case 0x11e5ecu: goto label_11e5ec;
        default: break;
    }

    ctx->pc = 0x11e5d0u;

    // 0x11e5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e5d4: 0x600ffde  bltz        $s0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x11E5D4u;
    {
        const bool branch_taken_0x11e5d4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D4u;
        // 0x11e5d8: 0xaf8283f0  sw          $v0, -0x7C10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d4) {
            ctx->pc = 0x11E550u;
            return;
        }
    }
    ctx->pc = 0x11E5DCu;
    // 0x11e5dc: 0x8ea40530  lw          $a0, 0x530($s5)
    ctx->pc = 0x11e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x11e5e0: 0x1232c0  sll         $a2, $s2, 11
    ctx->pc = 0x11e5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x11e5e4: 0xc046804  jal         func_11A010
    ctx->pc = 0x11E5E4u;
    SET_GPR_U32(ctx, 31, 0x11E5ECu);
    ctx->pc = 0x11E5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5E4u;
    // 0x11e5e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A010u, 0x11E5E4u, 0x11E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5ECu;
label_11e5ec:
    // 0x11e5ec: 0x440ffd8  bltz        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x11E5ECu;
    {
        const bool branch_taken_0x11e5ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11e5ec) {
            ctx->pc = 0x11E550u;
            return;
        }
    }
    ctx->pc = 0x11E5F4u;
    // 0x11e5f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11e5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e5f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11e5f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e5fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11e5fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11e600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11e604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e60c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e610: 0x3e00008  jr          $ra
    ctx->pc = 0x11E610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E610u;
        // 0x11e614: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E618u;
}
