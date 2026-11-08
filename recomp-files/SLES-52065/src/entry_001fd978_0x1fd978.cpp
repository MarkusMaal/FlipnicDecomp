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

// Function: entry_001fd978
// Address: 0x1fd978 - 0x1fd9a8
void entry_001fd978_0x1fd978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd978_0x1fd978");
#endif

    ctx->pc = 0x1fd978u;

    // 0x1fd978: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1fd978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1fd97c: 0xaccb0004  sw          $t3, 0x4($a2)
    ctx->pc = 0x1fd97cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 11));
    // 0x1fd980: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FD980u;
    {
        const bool branch_taken_0x1fd980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD980u;
        // 0x1fd984: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd980) {
            ctx->pc = 0x1FD9B8u;
            return;
        }
    }
    ctx->pc = 0x1FD988u;
    // 0x1fd988: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x1fd988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x1fd98c: 0x25820008  addiu       $v0, $t4, 0x8
    ctx->pc = 0x1fd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x1fd990: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x1fd990u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1fd994: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x1fd994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1fd998: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD998u;
    {
        const bool branch_taken_0x1fd998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD998u;
        // 0x1fd99c: 0x1254821  addu        $t1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd998) {
            ctx->pc = 0x1FD9A8u;
            return;
        }
    }
    ctx->pc = 0x1FD9A0u;
    // 0x1fd9a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD9A0u;
    {
        const bool branch_taken_0x1fd9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9A0u;
        // 0x1fd9a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9a0) {
            ctx->pc = 0x1FD9B8u;
            return;
        }
    }
    ctx->pc = 0x1FD9A8u;
}
