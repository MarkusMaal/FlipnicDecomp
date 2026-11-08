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

// Function: entry_001b3c64
// Address: 0x1b3c64 - 0x1b3c98
void entry_001b3c64_0x1b3c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3c64_0x1b3c64");
#endif

    switch (ctx->pc) {
        case 0x1b3c84u: goto label_1b3c84;
        default: break;
    }

    ctx->pc = 0x1b3c64u;

    // 0x1b3c64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b3c68: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1b3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b3c6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b3c70: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b3c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c78: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1b3c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b3c7c: 0xc080796  jal         func_201E58
    ctx->pc = 0x1B3C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B3C84u);
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x1B3C7Cu, 0x1B3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C84u;
label_1b3c84:
    // 0x1b3c84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3C84u;
    {
        const bool branch_taken_0x1b3c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c84) {
            ctx->pc = 0x1B3C98u;
            return;
        }
    }
    ctx->pc = 0x1B3C8Cu;
    // 0x1b3c8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b3c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3C90u;
    {
        const bool branch_taken_0x1b3c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c90) {
            ctx->pc = 0x1B3CB0u;
            return;
        }
    }
    ctx->pc = 0x1B3C98u;
}
