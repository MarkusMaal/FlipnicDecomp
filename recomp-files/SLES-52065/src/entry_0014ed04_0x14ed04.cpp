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

// Function: entry_0014ed04
// Address: 0x14ed04 - 0x14ed34
void entry_0014ed04_0x14ed04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ed04_0x14ed04");
#endif

    ctx->pc = 0x14ed04u;

    // 0x14ed04: 0x0  nop
    ctx->pc = 0x14ed04u;
    // NOP
    // 0x14ed08: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x14ed08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14ed0c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14ed10: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14ed10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14ed14: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x14ED14u;
    {
        const bool branch_taken_0x14ed14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED14u;
        // 0x14ed18: 0x66082b  sltu        $at, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed14) {
            ctx->pc = 0x14ED58u;
            return;
        }
    }
    ctx->pc = 0x14ED1Cu;
    // 0x14ed1c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x14ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14ed20: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x14ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14ed24: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x14ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ed28: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x14ed28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14ed2c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14ED2Cu;
    {
        const bool branch_taken_0x14ed2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed2c) {
            ctx->pc = 0x14ED50u;
            return;
        }
    }
    ctx->pc = 0x14ED34u;
}
