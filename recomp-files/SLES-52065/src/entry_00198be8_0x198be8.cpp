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

// Function: entry_00198be8
// Address: 0x198be8 - 0x198c14
void entry_00198be8_0x198be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198be8_0x198be8");
#endif

    switch (ctx->pc) {
        case 0x198c0cu: goto label_198c0c;
        default: break;
    }

    ctx->pc = 0x198be8u;

    // 0x198be8: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x198be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x198bec: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x198becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198bf0: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x198BF0u;
    {
        const bool branch_taken_0x198bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BF0u;
        // 0x198bf4: 0x2b08821  addu        $s1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198bf0) {
            ctx->pc = 0x198B64u;
            return;
        }
    }
    ctx->pc = 0x198BF8u;
    // 0x198bf8: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x198BF8u;
    {
        const bool branch_taken_0x198bf8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x198bf8) {
            ctx->pc = 0x198C34u;
            return;
        }
    }
    ctx->pc = 0x198C00u;
    // 0x198c00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c04: 0xc063e08  jal         func_18F820
    ctx->pc = 0x198C04u;
    SET_GPR_U32(ctx, 31, 0x198C0Cu);
    ctx->pc = 0x198C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198C04u;
    // 0x198c08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x198C04u, 0x198C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C0Cu;
label_198c0c:
    // 0x198c0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x198C0Cu;
    {
        const bool branch_taken_0x198c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198c0c) {
            ctx->pc = 0x198C34u;
            return;
        }
    }
    ctx->pc = 0x198C14u;
}
