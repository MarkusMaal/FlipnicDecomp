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

// Function: FUN_0012f130
// Address: 0x12f130 - 0x12f19c
void FUN_0012f130_0x12f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012f130_0x12f130");
#endif

    switch (ctx->pc) {
        case 0x12f140u: goto label_12f140;
        default: break;
    }

    ctx->pc = 0x12f130u;

    // 0x12f130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12f134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f138: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12f138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12f13c: 0x24843e70  addiu       $a0, $a0, 0x3E70
    ctx->pc = 0x12f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15984));
label_12f140:
    // 0x12f140: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x12f140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12f144: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12f144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12f148: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x12f148u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x12f14c: 0x28a30080  slti        $v1, $a1, 0x80
    ctx->pc = 0x12f14cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x12f150: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x12f150u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x12f154: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x12f154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x12f158: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x12f158u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x12f15c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x12f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x12f160: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x12f160u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x12f164: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x12f164u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x12f168: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x12f168u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x12f16c: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x12f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x12f170: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x12f170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x12f174: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x12f174u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x12f178: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x12f178u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x12f17c: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x12f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x12f180: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x12f180u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x12f184: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x12f184u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x12f188: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x12f188u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x12f18c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12F18Cu;
    {
        const bool branch_taken_0x12f18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F18Cu;
        // 0x12f190: 0xace0003c  sw          $zero, 0x3C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f18c) {
            ctx->pc = 0x12F140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f140;
        }
    }
    ctx->pc = 0x12F194u;
    // 0x12f194: 0x3e00008  jr          $ra
    ctx->pc = 0x12F194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F19Cu;
}
