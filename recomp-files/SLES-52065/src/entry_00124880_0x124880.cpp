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

// Function: entry_00124880
// Address: 0x124880 - 0x1248a0
void entry_00124880_0x124880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124880_0x124880");
#endif

    ctx->pc = 0x124880u;

    // 0x124880: 0x90860068  lbu         $a2, 0x68($a0)
    ctx->pc = 0x124880u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x124884: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x124884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x124888: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x124888u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12488c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x12488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x124890: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x124890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x124894: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x124894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x124898: 0x3e00008  jr          $ra
    ctx->pc = 0x124898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124898u;
        // 0x12489c: 0xa0830068  sb          $v1, 0x68($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1248A0u;
}
