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

// Function: entry_00205c50
// Address: 0x205c50 - 0x205c74
void entry_00205c50_0x205c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205c50_0x205c50");
#endif

    switch (ctx->pc) {
        case 0x205c5cu: goto label_205c5c;
        default: break;
    }

    ctx->pc = 0x205c50u;

label_205c50:
    // 0x205c50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x205c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c54: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x205C54u;
    SET_GPR_U32(ctx, 31, 0x205C5Cu);
    ctx->pc = 0x205C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C54u;
    // 0x205c58: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x205C54u, 0x205C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C5Cu;
label_205c5c:
    // 0x205c5c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x205c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x205c60: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x205c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x205c64: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x205C64u;
    {
        const bool branch_taken_0x205c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C64u;
        // 0x205c68: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c64) {
            ctx->pc = 0x205C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205c50;
        }
    }
    ctx->pc = 0x205C6Cu;
    // 0x205c6c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x205C6Cu;
    {
        const bool branch_taken_0x205c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C6Cu;
        // 0x205c70: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c6c) {
            ctx->pc = 0x205D28u;
            return;
        }
    }
    ctx->pc = 0x205C74u;
}
