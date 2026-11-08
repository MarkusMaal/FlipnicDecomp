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

// Function: entry_0014d204
// Address: 0x14d204 - 0x14d238
void entry_0014d204_0x14d204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d204_0x14d204");
#endif

    ctx->pc = 0x14d204u;

    // 0x14d204: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x14d204u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x14d208: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x14D208u;
    {
        const bool branch_taken_0x14d208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d208) {
            ctx->pc = 0x14D238u;
            return;
        }
    }
    ctx->pc = 0x14D210u;
    // 0x14d210: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x14d210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14d214: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14d214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14d218: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x14d218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14d21c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x14d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14d220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d224: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14d224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14d228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d22c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14d230: 0xc053494  jal         func_14D250
    ctx->pc = 0x14D230u;
    SET_GPR_U32(ctx, 31, 0x14D238u);
    ctx->pc = 0x14D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D230u;
    // 0x14d234: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D250u, 0x14D230u, 0x14D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D238u;
}
