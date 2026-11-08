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

// Function: entry_00127c74
// Address: 0x127c74 - 0x127c9c
void entry_00127c74_0x127c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127c74_0x127c74");
#endif

    ctx->pc = 0x127c74u;

    // 0x127c74: 0x0  nop
    ctx->pc = 0x127c74u;
    // NOP
    // 0x127c78: 0x10c80008  beq         $a2, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127C78u;
    {
        const bool branch_taken_0x127c78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x127c78) {
            ctx->pc = 0x127C9Cu;
            return;
        }
    }
    ctx->pc = 0x127C80u;
    // 0x127c80: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x127c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x127c84: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x127c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x127c88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x127c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x127c8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x127c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x127c90: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x127c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x127c94: 0xc04a364  jal         func_128D90
    ctx->pc = 0x127C94u;
    SET_GPR_U32(ctx, 31, 0x127C9Cu);
    ctx->pc = 0x127C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C94u;
    // 0x127c98: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128D90u, 0x127C94u, 0x127C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C9Cu;
}
