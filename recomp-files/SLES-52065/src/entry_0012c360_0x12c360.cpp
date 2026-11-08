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

// Function: entry_0012c360
// Address: 0x12c360 - 0x12c38c
void entry_0012c360_0x12c360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c360_0x12c360");
#endif

    ctx->pc = 0x12c360u;

    // 0x12c360: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12c360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x12c364: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x12c364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12c368: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12C368u;
    {
        const bool branch_taken_0x12c368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C368u;
        // 0x12c36c: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c368) {
            ctx->pc = 0x12C2E0u;
            return;
        }
    }
    ctx->pc = 0x12C370u;
    // 0x12c370: 0x92020045  lbu         $v0, 0x45($s0)
    ctx->pc = 0x12c370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x12c374: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x12c374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12c37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c384: 0x3e00008  jr          $ra
    ctx->pc = 0x12C384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C384u;
        // 0x12c388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C38Cu;
}
