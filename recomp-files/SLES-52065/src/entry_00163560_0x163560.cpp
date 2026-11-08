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

// Function: entry_00163560
// Address: 0x163560 - 0x163580
void entry_00163560_0x163560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163560_0x163560");
#endif

    ctx->pc = 0x163560u;

    // 0x163560: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163564: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x163564u;
    {
        const bool branch_taken_0x163564 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x163568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163564u;
        // 0x163568: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163564) {
            ctx->pc = 0x163594u;
            return;
        }
    }
    ctx->pc = 0x16356Cu;
    // 0x16356c: 0x8623021a  lh          $v1, 0x21A($s1)
    ctx->pc = 0x16356cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x163570: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x163570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x163574: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x163574u;
    {
        const bool branch_taken_0x163574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163574) {
            ctx->pc = 0x163590u;
            return;
        }
    }
    ctx->pc = 0x16357Cu;
    // 0x16357c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163580u;
}
