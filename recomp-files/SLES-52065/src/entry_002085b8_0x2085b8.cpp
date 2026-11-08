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

// Function: entry_002085b8
// Address: 0x2085b8 - 0x2085dc
void entry_002085b8_0x2085b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002085b8_0x2085b8");
#endif

    ctx->pc = 0x2085b8u;

    // 0x2085b8: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x2085b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2085bc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2085bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2085c0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2085C0u;
    {
        const bool branch_taken_0x2085c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2085c0) {
            ctx->pc = 0x2085C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2085C0u;
            // 0x2085c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208580u;
            return;
        }
    }
    ctx->pc = 0x2085C8u;
    // 0x2085c8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2085c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2085cc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2085CCu;
    {
        const bool branch_taken_0x2085cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2085D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085CCu;
        // 0x2085d0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085cc) {
            ctx->pc = 0x2085ACu;
            return;
        }
    }
    ctx->pc = 0x2085D4u;
    // 0x2085d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2085D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2085D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085D4u;
        // 0x2085d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2085D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2085DCu;
}
