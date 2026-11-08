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

// Function: entry_00207e10
// Address: 0x207e10 - 0x207e54
void entry_00207e10_0x207e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207e10_0x207e10");
#endif

    ctx->pc = 0x207e10u;

    // 0x207e10: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x207E10u;
    {
        const bool branch_taken_0x207e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E10u;
        // 0x207e14: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e10) {
            ctx->pc = 0x207DE0u;
            return;
        }
    }
    ctx->pc = 0x207E18u;
    // 0x207e18: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x207E18u;
    {
        const bool branch_taken_0x207e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E18u;
        // 0x207e1c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e18) {
            ctx->pc = 0x207E54u;
            return;
        }
    }
    ctx->pc = 0x207E20u;
    // 0x207e20: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x207E20u;
    {
        const bool branch_taken_0x207e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E20u;
        // 0x207e24: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e20) {
            ctx->pc = 0x207DCCu;
            return;
        }
    }
    ctx->pc = 0x207E28u;
    // 0x207e28: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x207e28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x207e2c: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x207e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x207e30: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x207e30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x207e34: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x207e34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x207e38: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x207e38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x207e3c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x207e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x207e40: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x207e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x207e44: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x207e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x207e48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x207e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x207e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x207E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E4Cu;
        // 0x207e50: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207E54u;
}
