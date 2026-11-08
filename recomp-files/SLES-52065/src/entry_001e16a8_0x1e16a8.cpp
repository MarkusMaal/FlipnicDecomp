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

// Function: entry_001e16a8
// Address: 0x1e16a8 - 0x1e16e0
void entry_001e16a8_0x1e16a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e16a8_0x1e16a8");
#endif

    ctx->pc = 0x1e16a8u;

    // 0x1e16a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e16ac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e16acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e16b0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e16b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e16b4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e16b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1e16b8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1e16b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1e16bc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1e16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1e16c0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1e16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1e16c4: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e16c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e16c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e16c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e16cc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e16ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e16d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e16d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e16d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e16d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e16d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E16D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16D8u;
        // 0x1e16dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E16D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E16E0u;
}
