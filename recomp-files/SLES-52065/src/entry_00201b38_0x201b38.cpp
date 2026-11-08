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

// Function: entry_00201b38
// Address: 0x201b38 - 0x201b5c
void entry_00201b38_0x201b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201b38_0x201b38");
#endif

    ctx->pc = 0x201b38u;

    // 0x201b38: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x201b38u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x201b3c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201b3cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201b40: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x201b40u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x201b44: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x201b44u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x201b48: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x201b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x201b4c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x201B4Cu;
    {
        const bool branch_taken_0x201b4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B4Cu;
        // 0x201b50: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b4c) {
            ctx->pc = 0x201B5Cu;
            return;
        }
    }
    ctx->pc = 0x201B54u;
    // 0x201b54: 0x3e00008  jr          $ra
    ctx->pc = 0x201B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B54u;
        // 0x201b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B5Cu;
}
