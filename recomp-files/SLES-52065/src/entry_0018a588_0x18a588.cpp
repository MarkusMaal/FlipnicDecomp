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

// Function: entry_0018a588
// Address: 0x18a588 - 0x18a5b0
void entry_0018a588_0x18a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a588_0x18a588");
#endif

    ctx->pc = 0x18a588u;

    // 0x18a588: 0x2b19821  addu        $s3, $s5, $s1
    ctx->pc = 0x18a588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x18a58c: 0x826310cc  lb          $v1, 0x10CC($s3)
    ctx->pc = 0x18a58cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4300)));
    // 0x18a590: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A590u;
    {
        const bool branch_taken_0x18a590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a590) {
            ctx->pc = 0x18A5B0u;
            return;
        }
    }
    ctx->pc = 0x18A598u;
    // 0x18a598: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x18a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x18a59c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a5a0: 0x8c442b2c  lw          $a0, 0x2B2C($v0)
    ctx->pc = 0x18a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11052)));
    // 0x18a5a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18a5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5a8: 0xc077dd8  jal         func_1DF760
    ctx->pc = 0x18A5A8u;
    SET_GPR_U32(ctx, 31, 0x18A5B0u);
    ctx->pc = 0x18A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5A8u;
    // 0x18a5ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF760u, 0x18A5A8u, 0x18A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5B0u;
}
