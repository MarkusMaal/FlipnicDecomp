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

// Function: entry_001d38ac
// Address: 0x1d38ac - 0x1d38d8
void entry_001d38ac_0x1d38ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d38ac_0x1d38ac");
#endif

    ctx->pc = 0x1d38acu;

    // 0x1d38ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d38acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d38b0: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1d38b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1d38b4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D38B4u;
    {
        const bool branch_taken_0x1d38b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d38b4) {
            ctx->pc = 0x1D38B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D38B4u;
            // 0x1d38b8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3898u;
            return;
        }
    }
    ctx->pc = 0x1D38BCu;
    // 0x1d38bc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d38bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d38c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d38c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d38c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d38c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d38c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d38cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d38ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d38d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38D0u;
        // 0x1d38d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D38D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D38D8u;
}
