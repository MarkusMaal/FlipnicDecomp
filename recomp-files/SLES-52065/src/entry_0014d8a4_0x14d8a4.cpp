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

// Function: entry_0014d8a4
// Address: 0x14d8a4 - 0x14d8d8
void entry_0014d8a4_0x14d8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d8a4_0x14d8a4");
#endif

    ctx->pc = 0x14d8a4u;

    // 0x14d8a4: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x14d8a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x14d8a8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x14D8A8u;
    {
        const bool branch_taken_0x14d8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8a8) {
            ctx->pc = 0x14D8D8u;
            return;
        }
    }
    ctx->pc = 0x14D8B0u;
    // 0x14d8b0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x14d8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14d8b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14d8b8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x14d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14d8bc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x14d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d8c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d8c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14d8c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d8cc: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14d8d0: 0xc0537e8  jal         func_14DFA0
    ctx->pc = 0x14D8D0u;
    SET_GPR_U32(ctx, 31, 0x14D8D8u);
    ctx->pc = 0x14D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8D0u;
    // 0x14d8d4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DFA0u, 0x14D8D0u, 0x14D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8D8u;
}
