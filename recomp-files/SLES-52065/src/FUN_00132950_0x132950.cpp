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

// Function: FUN_00132950
// Address: 0x132950 - 0x132978
void FUN_00132950_0x132950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132950_0x132950");
#endif

    switch (ctx->pc) {
        case 0x132964u: goto label_132964;
        default: break;
    }

    ctx->pc = 0x132950u;

    // 0x132950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13295c: 0xc04c998  jal         func_132660
    ctx->pc = 0x13295Cu;
    SET_GPR_U32(ctx, 31, 0x132964u);
    ctx->pc = 0x132960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13295Cu;
    // 0x132960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132660u, 0x13295Cu, 0x132964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132964u;
label_132964:
    // 0x132964: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x132964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13296c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13296cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132970: 0x3e00008  jr          $ra
    ctx->pc = 0x132970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132970u;
        // 0x132974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132978u;
}
