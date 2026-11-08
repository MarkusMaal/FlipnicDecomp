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

// Function: entry_00133a30
// Address: 0x133a30 - 0x133a4c
void entry_00133a30_0x133a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133a30_0x133a30");
#endif

    switch (ctx->pc) {
        case 0x133a40u: goto label_133a40;
        default: break;
    }

    ctx->pc = 0x133a30u;

    // 0x133a30: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x133A30u;
    {
        const bool branch_taken_0x133a30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A30u;
        // 0x133a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a30) {
            ctx->pc = 0x133A4Cu;
            return;
        }
    }
    ctx->pc = 0x133A38u;
    // 0x133a38: 0xc05115c  jal         func_144570
    ctx->pc = 0x133A38u;
    SET_GPR_U32(ctx, 31, 0x133A40u);
    ctx->pc = 0x133A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A38u;
    // 0x133a3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144570u, 0x133A38u, 0x133A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A40u;
label_133a40:
    // 0x133a40: 0xae5100f4  sw          $s1, 0xF4($s2)
    ctx->pc = 0x133a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 17));
    // 0x133a44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x133A44u;
    {
        const bool branch_taken_0x133a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A44u;
        // 0x133a48: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a44) {
            ctx->pc = 0x133A6Cu;
            return;
        }
    }
    ctx->pc = 0x133A4Cu;
}
