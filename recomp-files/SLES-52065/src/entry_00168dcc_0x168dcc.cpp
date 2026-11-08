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

// Function: entry_00168dcc
// Address: 0x168dcc - 0x168de8
void entry_00168dcc_0x168dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168dcc_0x168dcc");
#endif

    ctx->pc = 0x168dccu;

    // 0x168dcc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x168dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x168dd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x168dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168dd4: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x168dd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x168dd8: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168DD8u;
    {
        const bool branch_taken_0x168dd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x168DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DD8u;
        // 0x168ddc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dd8) {
            ctx->pc = 0x168DE8u;
            return;
        }
    }
    ctx->pc = 0x168DE0u;
    // 0x168de0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x168DE0u;
    {
        const bool branch_taken_0x168de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DE0u;
        // 0x168de4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168de0) {
            ctx->pc = 0x168DE8u;
            return;
        }
    }
    ctx->pc = 0x168DE8u;
}
