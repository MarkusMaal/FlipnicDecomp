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

// Function: entry_00188cbc
// Address: 0x188cbc - 0x188cf4
void entry_00188cbc_0x188cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188cbc_0x188cbc");
#endif

    ctx->pc = 0x188cbcu;

    // 0x188cbc: 0x0  nop
    ctx->pc = 0x188cbcu;
    // NOP
    // 0x188cc0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x188CC0u;
    {
        const bool branch_taken_0x188cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cc0) {
            ctx->pc = 0x188D98u;
            return;
        }
    }
    ctx->pc = 0x188CC8u;
    // 0x188cc8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x188CC8u;
    {
        const bool branch_taken_0x188cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CC8u;
        // 0x188ccc: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cc8) {
            ctx->pc = 0x188D18u;
            return;
        }
    }
    ctx->pc = 0x188CD0u;
    // 0x188cd0: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x188cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x188cd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188cd8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x188cdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x188ce0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188CE0u;
    {
        const bool branch_taken_0x188ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CE0u;
        // 0x188ce4: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ce0) {
            ctx->pc = 0x188CF4u;
            return;
        }
    }
    ctx->pc = 0x188CE8u;
    // 0x188ce8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x188ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x188cec: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x188cf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x188cf4u;
}
