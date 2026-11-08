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

// Function: entry_0014dedc
// Address: 0x14dedc - 0x14defc
void entry_0014dedc_0x14dedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dedc_0x14dedc");
#endif

    ctx->pc = 0x14dedcu;

    // 0x14dedc: 0x0  nop
    ctx->pc = 0x14dedcu;
    // NOP
    // 0x14dee0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x14dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x14dee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14dee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14dee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14deec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14deecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14def0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14def0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14def4: 0x3e00008  jr          $ra
    ctx->pc = 0x14DEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEF4u;
        // 0x14def8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DEFCu;
}
