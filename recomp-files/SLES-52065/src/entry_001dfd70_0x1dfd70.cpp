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

// Function: entry_001dfd70
// Address: 0x1dfd70 - 0x1dfdb0
void entry_001dfd70_0x1dfd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfd70_0x1dfd70");
#endif

    switch (ctx->pc) {
        case 0x1dfda8u: goto label_1dfda8;
        default: break;
    }

    ctx->pc = 0x1dfd70u;

    // 0x1dfd70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dfd74: 0x529f8  dsll        $a1, $a1, 7
    ctx->pc = 0x1dfd74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 7);
    // 0x1dfd78: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1dfd78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dfd7c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1dfd7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfd80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dfd84: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1dfd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1dfd88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1dfd88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1dfd8c: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1dfd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1dfd90: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DFD90u;
    {
        const bool branch_taken_0x1dfd90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD90u;
        // 0x1dfd94: 0xa3282d  daddu       $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd90) {
            ctx->pc = 0x1DFD68u;
            return;
        }
    }
    ctx->pc = 0x1DFD98u;
    // 0x1dfd98: 0x4a20005  bltzl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFD98u;
    {
        const bool branch_taken_0x1dfd98 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1dfd98) {
            ctx->pc = 0x1DFD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFD98u;
            // 0x1dfd9c: 0x5107a  dsrl        $v0, $a1, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFDB0u;
            return;
        }
    }
    ctx->pc = 0x1DFDA0u;
    // 0x1dfda0: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DFDA0u;
    SET_GPR_U32(ctx, 31, 0x1DFDA8u);
    ctx->pc = 0x1DFDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDA0u;
    // 0x1dfda4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DFDA0u, 0x1DFDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDA8u;
label_1dfda8:
    // 0x1dfda8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DFDA8u;
    {
        const bool branch_taken_0x1dfda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfda8) {
            ctx->pc = 0x1DFDC8u;
            return;
        }
    }
    ctx->pc = 0x1DFDB0u;
}
