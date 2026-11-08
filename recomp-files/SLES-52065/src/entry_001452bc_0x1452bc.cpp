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

// Function: entry_001452bc
// Address: 0x1452bc - 0x1452dc
void entry_001452bc_0x1452bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001452bc_0x1452bc");
#endif

    ctx->pc = 0x1452bcu;

    // 0x1452bc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1452bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1452c0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1452c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1452c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1452c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1452c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1452c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1452cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1452ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1452d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1452d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1452d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1452D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1452D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452D4u;
        // 0x1452d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1452DCu;
}
