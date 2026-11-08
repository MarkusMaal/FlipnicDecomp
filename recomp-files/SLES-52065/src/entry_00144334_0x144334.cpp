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

// Function: entry_00144334
// Address: 0x144334 - 0x144354
void entry_00144334_0x144334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144334_0x144334");
#endif

    ctx->pc = 0x144334u;

    // 0x144334: 0x0  nop
    ctx->pc = 0x144334u;
    // NOP
    // 0x144338: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x144338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x14433c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14433cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144340: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14434c: 0x3e00008  jr          $ra
    ctx->pc = 0x14434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14434Cu;
        // 0x144350: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14434Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144354u;
}
