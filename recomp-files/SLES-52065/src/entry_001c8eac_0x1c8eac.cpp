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

// Function: entry_001c8eac
// Address: 0x1c8eac - 0x1c8ecc
void entry_001c8eac_0x1c8eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8eac_0x1c8eac");
#endif

    switch (ctx->pc) {
        case 0x1c8ec4u: goto label_1c8ec4;
        default: break;
    }

    ctx->pc = 0x1c8eacu;

    // 0x1c8eac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8eb0: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8EB0u;
    {
        const bool branch_taken_0x1c8eb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EB0u;
        // 0x1c8eb4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eb0) {
            ctx->pc = 0x1C8ECCu;
            return;
        }
    }
    ctx->pc = 0x1C8EB8u;
    // 0x1c8eb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ebc: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C8EBCu;
    SET_GPR_U32(ctx, 31, 0x1C8EC4u);
    ctx->pc = 0x1C8EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EBCu;
    // 0x1c8ec0: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C8EBCu, 0x1C8EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EC4u;
label_1c8ec4:
    // 0x1c8ec4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1C8EC4u;
    {
        const bool branch_taken_0x1c8ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ec4) {
            ctx->pc = 0x1C8FD4u;
            return;
        }
    }
    ctx->pc = 0x1C8ECCu;
}
