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

// Function: entry_0018b438
// Address: 0x18b438 - 0x18b478
void entry_0018b438_0x18b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b438_0x18b438");
#endif

    ctx->pc = 0x18b438u;

    // 0x18b438: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b43c: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x18b43cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b440: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x18b440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x18b444: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18B444u;
    {
        const bool branch_taken_0x18b444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B444u;
        // 0x18b448: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b444) {
            ctx->pc = 0x18B3FCu;
            return;
        }
    }
    ctx->pc = 0x18B44Cu;
    // 0x18b44c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18b44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18b450: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18b450u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b454: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18b454u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b458: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b458u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b45c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b45cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b460: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b464: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b46c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b470: 0x3e00008  jr          $ra
    ctx->pc = 0x18B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B470u;
        // 0x18b474: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B478u;
}
