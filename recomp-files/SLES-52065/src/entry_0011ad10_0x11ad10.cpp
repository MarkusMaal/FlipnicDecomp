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

// Function: entry_0011ad10
// Address: 0x11ad10 - 0x11ad40
void entry_0011ad10_0x11ad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ad10_0x11ad10");
#endif

    ctx->pc = 0x11ad10u;

    // 0x11ad10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ad14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11ad18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11ad18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11ad1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11ad1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11ad20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11ad20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ad24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11ad28: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11ad28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad2c: 0x808203c4  lb          $v0, 0x3C4($a0)
    ctx->pc = 0x11ad2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 964)));
    // 0x11ad30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AD30u;
    {
        const bool branch_taken_0x11ad30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD30u;
        // 0x11ad34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad30) {
            ctx->pc = 0x11AD40u;
            return;
        }
    }
    ctx->pc = 0x11AD38u;
    // 0x11ad38: 0xc046b74  jal         func_11ADD0
    ctx->pc = 0x11AD38u;
    SET_GPR_U32(ctx, 31, 0x11AD40u);
    ctx->pc = 0x11ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADD0u, 0x11AD38u, 0x11AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD40u;
}
