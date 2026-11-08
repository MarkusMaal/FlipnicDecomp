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

// Function: entry_0018ae3c
// Address: 0x18ae3c - 0x18ae68
void entry_0018ae3c_0x18ae3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ae3c_0x18ae3c");
#endif

    ctx->pc = 0x18ae3cu;

    // 0x18ae3c: 0x0  nop
    ctx->pc = 0x18ae3cu;
    // NOP
    // 0x18ae40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18ae40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18ae44: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x18ae44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18ae48: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x18AE48u;
    {
        const bool branch_taken_0x18ae48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE48u;
        // 0x18ae4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae48) {
            ctx->pc = 0x18AE20u;
            return;
        }
    }
    ctx->pc = 0x18AE50u;
    // 0x18ae50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18ae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ae54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ae54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ae58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ae58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ae5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ae5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x18AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE60u;
        // 0x18ae64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AE68u;
}
