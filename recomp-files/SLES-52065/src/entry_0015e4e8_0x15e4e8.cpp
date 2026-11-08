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

// Function: entry_0015e4e8
// Address: 0x15e4e8 - 0x15e538
void entry_0015e4e8_0x15e4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e4e8_0x15e4e8");
#endif

    ctx->pc = 0x15e4e8u;

    // 0x15e4e8: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x15e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x15e4ec: 0x8ee52c1c  lw          $a1, 0x2C1C($s7)
    ctx->pc = 0x15e4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11292)));
    // 0x15e4f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15e4f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e4f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15e4fc: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x15e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15e500: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15e500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15e504: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15e504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15e508: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x15e50c: 0x4800090  bltz        $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x15E50Cu;
    {
        const bool branch_taken_0x15e50c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E50Cu;
        // 0x15e510: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e50c) {
            ctx->pc = 0x15E750u;
            return;
        }
    }
    ctx->pc = 0x15E514u;
    // 0x15e514: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e518: 0x3f100  sll         $fp, $v1, 4
    ctx->pc = 0x15e518u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15e51c: 0xbe1821  addu        $v1, $a1, $fp
    ctx->pc = 0x15e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x15e520: 0x8c730030  lw          $s3, 0x30($v1)
    ctx->pc = 0x15e520u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15e524: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x15e524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15e528: 0x263a821  addu        $s5, $s3, $v1
    ctx->pc = 0x15e528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x15e52c: 0x275082a  slt         $at, $s3, $s5
    ctx->pc = 0x15e52cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x15e530: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x15E530u;
    {
        const bool branch_taken_0x15e530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E530u;
        // 0x15e534: 0x138880  sll         $s1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e530) {
            ctx->pc = 0x15E598u;
            return;
        }
    }
    ctx->pc = 0x15E538u;
}
