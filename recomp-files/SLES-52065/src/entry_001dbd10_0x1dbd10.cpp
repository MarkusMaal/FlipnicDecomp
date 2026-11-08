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

// Function: entry_001dbd10
// Address: 0x1dbd10 - 0x1dbd40
void entry_001dbd10_0x1dbd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbd10_0x1dbd10");
#endif

    ctx->pc = 0x1dbd10u;

    // 0x1dbd10: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dbd14: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dbd18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbd1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dbd20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dbd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dbd24: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1dbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1dbd28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbd2c: 0x47182b  sltu        $v1, $v0, $a3
    ctx->pc = 0x1dbd2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1dbd30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBD30u;
    {
        const bool branch_taken_0x1dbd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD30u;
        // 0x1dbd34: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd30) {
            ctx->pc = 0x1DBD40u;
            return;
        }
    }
    ctx->pc = 0x1DBD38u;
    // 0x1dbd38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dbd38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd3c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1dbd3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1dbd40u;
}
