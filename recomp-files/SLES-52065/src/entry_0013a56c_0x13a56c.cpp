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

// Function: entry_0013a56c
// Address: 0x13a56c - 0x13a58c
void entry_0013a56c_0x13a56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a56c_0x13a56c");
#endif

    ctx->pc = 0x13a56cu;

    // 0x13a56c: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x13a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x13a570: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x13a570u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a574: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x13a574u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x13a578: 0xd2940  sll         $a1, $t5, 5
    ctx->pc = 0x13a578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x13a57c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x13a57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x13a580: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13A580u;
    {
        const bool branch_taken_0x13a580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A580u;
        // 0x13a584: 0xe57023  subu        $t6, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a580) {
            ctx->pc = 0x13A58Cu;
            return;
        }
    }
    ctx->pc = 0x13A588u;
    // 0x13a588: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x13a588u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    ctx->pc = 0x13a58cu;
}
