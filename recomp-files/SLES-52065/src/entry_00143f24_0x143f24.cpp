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

// Function: entry_00143f24
// Address: 0x143f24 - 0x143f50
void entry_00143f24_0x143f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f24_0x143f24");
#endif

    ctx->pc = 0x143f24u;

    // 0x143f24: 0x0  nop
    ctx->pc = 0x143f24u;
    // NOP
    // 0x143f28: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x143f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x143f2c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x143f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x143f30: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x143f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x143f34: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x143f34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x143f38: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x143F38u;
    {
        const bool branch_taken_0x143f38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x143F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F38u;
        // 0x143f3c: 0x2848821  addu        $s1, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f38) {
            ctx->pc = 0x143F54u;
            return;
        }
    }
    ctx->pc = 0x143F40u;
    // 0x143f40: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x143f40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x143f44: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x143F44u;
    {
        const bool branch_taken_0x143f44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143f44) {
            ctx->pc = 0x143F50u;
            return;
        }
    }
    ctx->pc = 0x143F4Cu;
    // 0x143f4c: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x143f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    ctx->pc = 0x143f50u;
}
