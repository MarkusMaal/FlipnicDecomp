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

// Function: entry_001230d4
// Address: 0x1230d4 - 0x123124
void entry_001230d4_0x1230d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001230d4_0x1230d4");
#endif

    ctx->pc = 0x1230d4u;

    // 0x1230d4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1230d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1230d8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1230d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1230dc: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1230dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1230e0: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x1230e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
    // 0x1230e4: 0x10640038  beq         $v1, $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1230E4u;
    {
        const bool branch_taken_0x1230e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1230E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230E4u;
        // 0x1230e8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230e4) {
            ctx->pc = 0x1231C8u;
            return;
        }
    }
    ctx->pc = 0x1230ECu;
    // 0x1230ec: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1230ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1230f0: 0x2409fffe  addiu       $t1, $zero, -0x2
    ctx->pc = 0x1230f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1230f4: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1230f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1230f8: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x1230f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1230fc: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x1230fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x123100: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x123100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x123104: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x123104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x123108: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x123108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12310c: 0xe94024  and         $t0, $a3, $t1
    ctx->pc = 0x12310cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x123110: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x123110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x123114: 0x14870003  bne         $a0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x123114u;
    {
        const bool branch_taken_0x123114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x123114) {
            ctx->pc = 0x123124u;
            return;
        }
    }
    ctx->pc = 0x12311Cu;
    // 0x12311c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12311Cu;
    {
        const bool branch_taken_0x12311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12311Cu;
        // 0x123120: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12311c) {
            ctx->pc = 0x123128u;
            return;
        }
    }
    ctx->pc = 0x123124u;
}
