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

// Function: FUN_0012ef80
// Address: 0x12ef80 - 0x12efc0
void FUN_0012ef80_0x12ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ef80_0x12ef80");
#endif

    switch (ctx->pc) {
        case 0x12ef9cu: goto label_12ef9c;
        default: break;
    }

    ctx->pc = 0x12ef80u;

    // 0x12ef80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12ef84: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x12ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12ef88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12ef8c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12ef90: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x12ef90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12ef94: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EF94u;
    {
        const bool branch_taken_0x12ef94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef94) {
            ctx->pc = 0x12EFB8u;
            goto label_12efb8;
        }
    }
    ctx->pc = 0x12EF9Cu;
label_12ef9c:
    // 0x12ef9c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x12ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x12efa0: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x12efa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12efa4: 0x0  nop
    ctx->pc = 0x12efa4u;
    // NOP
    // 0x12efa8: 0x0  nop
    ctx->pc = 0x12efa8u;
    // NOP
    // 0x12efac: 0x0  nop
    ctx->pc = 0x12efacu;
    // NOP
    // 0x12efb0: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12EFB0u;
    {
        const bool branch_taken_0x12efb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12efb0) {
            ctx->pc = 0x12EF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ef9c;
        }
    }
    ctx->pc = 0x12EFB8u;
label_12efb8:
    // 0x12efb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFB8u;
        // 0x12efbc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EFC0u;
}
