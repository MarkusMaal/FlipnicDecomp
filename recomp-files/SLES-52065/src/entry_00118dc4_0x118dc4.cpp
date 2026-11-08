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

// Function: entry_00118dc4
// Address: 0x118dc4 - 0x118ddc
void entry_00118dc4_0x118dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118dc4_0x118dc4");
#endif

    ctx->pc = 0x118dc4u;

    // 0x118dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118dc8: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118DC8u;
    {
        const bool branch_taken_0x118dc8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x118DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DC8u;
        // 0x118dcc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118dc8) {
            ctx->pc = 0x118DE0u;
            return;
        }
    }
    ctx->pc = 0x118DD0u;
    // 0x118dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118dd4: 0xc062c30  jal         func_18B0C0
    ctx->pc = 0x118DD4u;
    SET_GPR_U32(ctx, 31, 0x118DDCu);
    ctx->pc = 0x118DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DD4u;
    // 0x118dd8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0C0u, 0x118DD4u, 0x118DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DDCu;
}
