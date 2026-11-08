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

// Function: entry_0019a6a0
// Address: 0x19a6a0 - 0x19a6d4
void entry_0019a6a0_0x19a6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a6a0_0x19a6a0");
#endif

    switch (ctx->pc) {
        case 0x19a6a8u: goto label_19a6a8;
        default: break;
    }

    ctx->pc = 0x19a6a0u;

    // 0x19a6a0: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x19A6A0u;
    SET_GPR_U32(ctx, 31, 0x19A6A8u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19A6A0u, 0x19A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6A8u;
label_19a6a8:
    // 0x19a6a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a6ac: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19A6ACu;
    {
        const bool branch_taken_0x19a6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a6ac) {
            ctx->pc = 0x19A718u;
            return;
        }
    }
    ctx->pc = 0x19A6B4u;
    // 0x19a6b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a6b8: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19A6B8u;
    {
        const bool branch_taken_0x19a6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a6b8) {
            ctx->pc = 0x19A6ECu;
            return;
        }
    }
    ctx->pc = 0x19A6C0u;
    // 0x19a6c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A6C0u;
    {
        const bool branch_taken_0x19a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6C0u;
        // 0x19a6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6c0) {
            ctx->pc = 0x19A6D4u;
            return;
        }
    }
    ctx->pc = 0x19A6C8u;
    // 0x19a6c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19A6C8u;
    {
        const bool branch_taken_0x19a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6C8u;
        // 0x19a6cc: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6c8) {
            ctx->pc = 0x19A730u;
            return;
        }
    }
    ctx->pc = 0x19A6D0u;
    // 0x19a6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19a6d4u;
}
