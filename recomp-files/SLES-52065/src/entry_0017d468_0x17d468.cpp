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

// Function: entry_0017d468
// Address: 0x17d468 - 0x17d498
void entry_0017d468_0x17d468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d468_0x17d468");
#endif

    ctx->pc = 0x17d468u;

    // 0x17d468: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x17d468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x17d46c: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x17D46Cu;
    {
        const bool branch_taken_0x17d46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D46Cu;
        // 0x17d470: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d46c) {
            ctx->pc = 0x17D3F4u;
            return;
        }
    }
    ctx->pc = 0x17D474u;
    // 0x17d474: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17d474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d478: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17d478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d47c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17d47cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d480: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d48c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d490: 0x3e00008  jr          $ra
    ctx->pc = 0x17D490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D490u;
        // 0x17d494: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D498u;
}
