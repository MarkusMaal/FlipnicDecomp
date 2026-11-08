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

// Function: entry_00196cc8
// Address: 0x196cc8 - 0x196d08
void entry_00196cc8_0x196cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196cc8_0x196cc8");
#endif

    switch (ctx->pc) {
        case 0x196d00u: goto label_196d00;
        default: break;
    }

    ctx->pc = 0x196cc8u;

    // 0x196cc8: 0x29210005  slti        $at, $t1, 0x5
    ctx->pc = 0x196cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x196ccc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x196CCCu;
    {
        const bool branch_taken_0x196ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ccc) {
            ctx->pc = 0x196D08u;
            return;
        }
    }
    ctx->pc = 0x196CD4u;
    // 0x196cd4: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x196cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x196cd8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x196cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x196cdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x196cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196ce0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x196CE0u;
    {
        const bool branch_taken_0x196ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ce0) {
            ctx->pc = 0x196D08u;
            return;
        }
    }
    ctx->pc = 0x196CE8u;
    // 0x196ce8: 0x8ea30320  lw          $v1, 0x320($s5)
    ctx->pc = 0x196ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
    // 0x196cec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x196CECu;
    {
        const bool branch_taken_0x196cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196cec) {
            ctx->pc = 0x196D1Cu;
            return;
        }
    }
    ctx->pc = 0x196CF4u;
    // 0x196cf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cf8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x196CF8u;
    SET_GPR_U32(ctx, 31, 0x196D00u);
    ctx->pc = 0x196CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CF8u;
    // 0x196cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x196CF8u, 0x196D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D00u;
label_196d00:
    // 0x196d00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x196D00u;
    {
        const bool branch_taken_0x196d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196d00) {
            ctx->pc = 0x196D1Cu;
            return;
        }
    }
    ctx->pc = 0x196D08u;
}
