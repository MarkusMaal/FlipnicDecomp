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

// Function: entry_00163354
// Address: 0x163354 - 0x163370
void entry_00163354_0x163354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163354_0x163354");
#endif

    ctx->pc = 0x163354u;

    // 0x163354: 0x862301f4  lh          $v1, 0x1F4($s1)
    ctx->pc = 0x163354u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x163358: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x163358u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16335c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x16335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x163360: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x163360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163364: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x163364u;
    {
        const bool branch_taken_0x163364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163364u;
        // 0x163368: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163364) {
            ctx->pc = 0x163370u;
            return;
        }
    }
    ctx->pc = 0x16336Cu;
    // 0x16336c: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x16336cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    ctx->pc = 0x163370u;
}
