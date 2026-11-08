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

// Function: entry_00176ef4
// Address: 0x176ef4 - 0x176f1c
void entry_00176ef4_0x176ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176ef4_0x176ef4");
#endif

    ctx->pc = 0x176ef4u;

    // 0x176ef4: 0x0  nop
    ctx->pc = 0x176ef4u;
    // NOP
    // 0x176ef8: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x176ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x176efc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x176EFCu;
    {
        const bool branch_taken_0x176efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EFCu;
        // 0x176f00: 0x62900  sll         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176efc) {
            ctx->pc = 0x176EB0u;
            return;
        }
    }
    ctx->pc = 0x176F04u;
    // 0x176f04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x176f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f14: 0x3e00008  jr          $ra
    ctx->pc = 0x176F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F14u;
        // 0x176f18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176F1Cu;
}
