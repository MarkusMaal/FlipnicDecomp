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

// Function: entry_00132604
// Address: 0x132604 - 0x132630
void entry_00132604_0x132604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132604_0x132604");
#endif

    ctx->pc = 0x132604u;

    // 0x132604: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x132604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x132608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13260c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13260cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x132610: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x132610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x132614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x132618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13261c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13261cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132628: 0x3e00008  jr          $ra
    ctx->pc = 0x132628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132628u;
        // 0x13262c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132630u;
}
