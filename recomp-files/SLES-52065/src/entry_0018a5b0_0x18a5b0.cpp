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

// Function: entry_0018a5b0
// Address: 0x18a5b0 - 0x18a5d4
void entry_0018a5b0_0x18a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a5b0_0x18a5b0");
#endif

    ctx->pc = 0x18a5b0u;

    // 0x18a5b0: 0x826312cc  lb          $v1, 0x12CC($s3)
    ctx->pc = 0x18a5b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4812)));
    // 0x18a5b4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A5B4u;
    {
        const bool branch_taken_0x18a5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a5b4) {
            ctx->pc = 0x18A5D4u;
            return;
        }
    }
    ctx->pc = 0x18A5BCu;
    // 0x18a5bc: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x18a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x18a5c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a5c4: 0x8c442b4c  lw          $a0, 0x2B4C($v0)
    ctx->pc = 0x18a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11084)));
    // 0x18a5c8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18a5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5cc: 0xc077dd8  jal         func_1DF760
    ctx->pc = 0x18A5CCu;
    SET_GPR_U32(ctx, 31, 0x18A5D4u);
    ctx->pc = 0x18A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5CCu;
    // 0x18a5d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF760u, 0x18A5CCu, 0x18A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5D4u;
}
