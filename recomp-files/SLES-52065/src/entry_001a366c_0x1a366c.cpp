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

// Function: entry_001a366c
// Address: 0x1a366c - 0x1a3694
void entry_001a366c_0x1a366c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a366c_0x1a366c");
#endif

    switch (ctx->pc) {
        case 0x1a368cu: goto label_1a368c;
        default: break;
    }

    ctx->pc = 0x1a366cu;

    // 0x1a366c: 0x0  nop
    ctx->pc = 0x1a366cu;
    // NOP
    // 0x1a3670: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1a3670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a3674: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a3674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a3678: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a367c: 0x1062ffb1  beq         $v1, $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1A367Cu;
    {
        const bool branch_taken_0x1a367c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a367c) {
            ctx->pc = 0x1A3544u;
            return;
        }
    }
    ctx->pc = 0x1A3684u;
    // 0x1a3684: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A3684u;
    SET_GPR_U32(ctx, 31, 0x1A368Cu);
    ctx->pc = 0x1A3688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3684u;
    // 0x1a3688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A3684u, 0x1A368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A368Cu;
label_1a368c:
    // 0x1a368c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x1A368Cu;
    {
        const bool branch_taken_0x1a368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a368c) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3694u;
}
