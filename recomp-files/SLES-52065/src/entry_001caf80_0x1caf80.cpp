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

// Function: entry_001caf80
// Address: 0x1caf80 - 0x1cafac
void entry_001caf80_0x1caf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caf80_0x1caf80");
#endif

    switch (ctx->pc) {
        case 0x1cafa4u: goto label_1cafa4;
        default: break;
    }

    ctx->pc = 0x1caf80u;

    // 0x1caf80: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x1caf80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1caf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf88: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1caf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1caf8c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1caf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1caf90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1caf90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1caf94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf98: 0x260a0070  addiu       $t2, $s0, 0x70
    ctx->pc = 0x1caf98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1caf9c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CAF9Cu;
    SET_GPR_U32(ctx, 31, 0x1CAFA4u);
    ctx->pc = 0x1CAFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF9Cu;
    // 0x1cafa0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CAF9Cu, 0x1CAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFA4u;
label_1cafa4:
    // 0x1cafa4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CAFA4u;
    {
        const bool branch_taken_0x1cafa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cafa4) {
            ctx->pc = 0x1CAFECu;
            return;
        }
    }
    ctx->pc = 0x1CAFACu;
}
