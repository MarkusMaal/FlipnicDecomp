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

// Function: entry_0010c9e8
// Address: 0x10c9e8 - 0x10ca20
void entry_0010c9e8_0x10c9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c9e8_0x10c9e8");
#endif

    ctx->pc = 0x10c9e8u;

    // 0x10c9e8: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x10c9e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x10c9ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10C9ECu;
    {
        const bool branch_taken_0x10c9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9ECu;
        // 0x10c9f0: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9ec) {
            ctx->pc = 0x10C9D0u;
            return;
        }
    }
    ctx->pc = 0x10C9F4u;
    // 0x10c9f4: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x10c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x10c9f8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x10c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10c9fc: 0xae230264  sw          $v1, 0x264($s1)
    ctx->pc = 0x10c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 3));
    // 0x10ca00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ca04: 0xae24026c  sw          $a0, 0x26C($s1)
    ctx->pc = 0x10ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 4));
    // 0x10ca08: 0xae230274  sw          $v1, 0x274($s1)
    ctx->pc = 0x10ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 3));
    // 0x10ca0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ca0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ca10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10ca10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ca14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ca14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ca18: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA18u;
        // 0x10ca1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CA20u;
}
