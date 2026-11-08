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

// Function: entry_00209a6c
// Address: 0x209a6c - 0x209a9c
void entry_00209a6c_0x209a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209a6c_0x209a6c");
#endif

    ctx->pc = 0x209a6cu;

    // 0x209a6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209a70: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x209a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x209a74: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x209a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x209a78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x209a7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209a80: 0x34420109  ori         $v0, $v0, 0x109
    ctx->pc = 0x209a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)265);
    // 0x209a84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209a88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x209a8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209a94: 0x3e00008  jr          $ra
    ctx->pc = 0x209A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A94u;
        // 0x209a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209A9Cu;
}
