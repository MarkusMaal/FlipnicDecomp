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

// Function: entry_00202c34
// Address: 0x202c34 - 0x202c5c
void entry_00202c34_0x202c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202c34_0x202c34");
#endif

    switch (ctx->pc) {
        case 0x202c44u: goto label_202c44;
        default: break;
    }

    ctx->pc = 0x202c34u;

    // 0x202c34: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x202c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x202c38: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x202c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x202c3c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202C3Cu;
    SET_GPR_U32(ctx, 31, 0x202C44u);
    ctx->pc = 0x202C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C3Cu;
    // 0x202c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202C3Cu, 0x202C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C44u;
label_202c44:
    // 0x202c44: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202C44u;
    {
        const bool branch_taken_0x202c44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x202C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C44u;
        // 0x202c48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c44) {
            ctx->pc = 0x202C5Cu;
            return;
        }
    }
    ctx->pc = 0x202C4Cu;
    // 0x202c4c: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x202c4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x202c50: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x202c50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x202c54: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x202C54u;
    {
        const bool branch_taken_0x202c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c54) {
            ctx->pc = 0x202C94u;
            return;
        }
    }
    ctx->pc = 0x202C5Cu;
}
