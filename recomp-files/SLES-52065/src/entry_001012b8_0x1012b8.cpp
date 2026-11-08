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

// Function: entry_001012b8
// Address: 0x1012b8 - 0x1012e8
void entry_001012b8_0x1012b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001012b8_0x1012b8");
#endif

    switch (ctx->pc) {
        case 0x1012e0u: goto label_1012e0;
        default: break;
    }

    ctx->pc = 0x1012b8u;

    // 0x1012b8: 0x8f848214  lw          $a0, -0x7DEC($gp)
    ctx->pc = 0x1012b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1012bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1012bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1012c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1012c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1012c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1012c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1012c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1012c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1012cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1012ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1012d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1012d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1012d4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1012d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1012d8: 0xc04ce04  jal         func_133810
    ctx->pc = 0x1012D8u;
    SET_GPR_U32(ctx, 31, 0x1012E0u);
    ctx->pc = 0x1012DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012D8u;
    // 0x1012dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133810u, 0x1012D8u, 0x1012E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012E0u;
label_1012e0:
    // 0x1012e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1012E0u;
    {
        const bool branch_taken_0x1012e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1012e0) {
            ctx->pc = 0x101344u;
            return;
        }
    }
    ctx->pc = 0x1012E8u;
}
