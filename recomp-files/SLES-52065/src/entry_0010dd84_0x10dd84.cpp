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

// Function: entry_0010dd84
// Address: 0x10dd84 - 0x10dda8
void entry_0010dd84_0x10dd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dd84_0x10dd84");
#endif

    switch (ctx->pc) {
        case 0x10dd8cu: goto label_10dd8c;
        default: break;
    }

    ctx->pc = 0x10dd84u;

label_10dd84:
    // 0x10dd84: 0xc0439e0  jal         func_10E780
    ctx->pc = 0x10DD84u;
    SET_GPR_U32(ctx, 31, 0x10DD8Cu);
    ctx->pc = 0x10DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD84u;
    // 0x10dd88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E780u, 0x10DD84u, 0x10DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD8Cu;
label_10dd8c:
    // 0x10dd8c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10dd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x10dd90: 0x0  nop
    ctx->pc = 0x10dd90u;
    // NOP
    // 0x10dd94: 0x0  nop
    ctx->pc = 0x10dd94u;
    // NOP
    // 0x10dd98: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10DD98u;
    {
        const bool branch_taken_0x10dd98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dd98) {
            ctx->pc = 0x10DD84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dd84;
        }
    }
    ctx->pc = 0x10DDA0u;
    // 0x10dda0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10DDA0u;
    {
        const bool branch_taken_0x10dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDA0u;
        // 0x10dda4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dda0) {
            ctx->pc = 0x10DDBCu;
            return;
        }
    }
    ctx->pc = 0x10DDA8u;
}
