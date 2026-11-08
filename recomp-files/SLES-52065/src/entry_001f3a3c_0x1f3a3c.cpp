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

// Function: entry_001f3a3c
// Address: 0x1f3a3c - 0x1f3a60
void entry_001f3a3c_0x1f3a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3a3c_0x1f3a3c");
#endif

    switch (ctx->pc) {
        case 0x1f3a44u: goto label_1f3a44;
        case 0x1f3a4cu: goto label_1f3a4c;
        default: break;
    }

    ctx->pc = 0x1f3a3cu;

    // 0x1f3a3c: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F3A3Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A44u);
    ctx->pc = 0x1F3A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A3Cu;
    // 0x1f3a40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F3A3Cu, 0x1F3A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A44u;
label_1f3a44:
    // 0x1f3a44: 0xc07b802  jal         func_1EE008
    ctx->pc = 0x1F3A44u;
    SET_GPR_U32(ctx, 31, 0x1F3A4Cu);
    ctx->pc = 0x1EE008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE008u, 0x1F3A44u, 0x1F3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A4Cu;
label_1f3a4c:
    // 0x1f3a4c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1f3a4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3a50: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1f3a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F3A54u;
    {
        const bool branch_taken_0x1f3a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A54u;
        // 0x1f3a58: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a54) {
            ctx->pc = 0x1F3A84u;
            return;
        }
    }
    ctx->pc = 0x1F3A5Cu;
    // 0x1f3a5c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1f3a5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1f3a60u;
}
