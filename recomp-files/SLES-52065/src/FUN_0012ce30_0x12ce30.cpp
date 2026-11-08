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

// Function: FUN_0012ce30
// Address: 0x12ce30 - 0x12cea8
void FUN_0012ce30_0x12ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ce30_0x12ce30");
#endif

    ctx->pc = 0x12ce30u;

    // 0x12ce30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ce34: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x12ce34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x12ce38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12ce3c: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x12ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x12ce40: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x12ce44: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12ce48: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x12ce4c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x12ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ce50: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x12ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x12ce54: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x12ce54u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ce58: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x12ce58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x12ce5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12ce5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce60: 0x7c860010  sq          $a2, 0x10($a0)
    ctx->pc = 0x12ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 6));
    // 0x12ce64: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x12ce68: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x12ce6c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x12ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x12ce70: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x12ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x12ce74: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x12ce74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ce78: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x12ce78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x12ce7c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x12ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x12ce80: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x12ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x12ce84: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x12ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x12ce88: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x12ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x12ce8c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x12ce8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ce90: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x12ce90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x12ce94: 0xac870044  sw          $a3, 0x44($a0)
    ctx->pc = 0x12ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 7));
    // 0x12ce98: 0xac870040  sw          $a3, 0x40($a0)
    ctx->pc = 0x12ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 7));
    // 0x12ce9c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x12ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x12cea0: 0x3e00008  jr          $ra
    ctx->pc = 0x12CEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEA0u;
        // 0x12cea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CEA8u;
}
