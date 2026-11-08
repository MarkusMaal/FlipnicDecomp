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

// Function: entry_0018222c
// Address: 0x18222c - 0x18224c
void entry_0018222c_0x18222c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018222c_0x18222c");
#endif

    ctx->pc = 0x18222cu;

    // 0x18222c: 0x0  nop
    ctx->pc = 0x18222cu;
    // NOP
    // 0x182230: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182234: 0xac2087c4  sw          $zero, -0x783C($at)
    ctx->pc = 0x182234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3687C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3687C4u, _value); } while (0);
    // 0x182238: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x182238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18223c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18223cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182244: 0x3e00008  jr          $ra
    ctx->pc = 0x182244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182244u;
        // 0x182248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18224Cu;
}
