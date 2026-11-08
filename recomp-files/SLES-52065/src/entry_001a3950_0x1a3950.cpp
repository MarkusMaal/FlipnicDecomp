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

// Function: entry_001a3950
// Address: 0x1a3950 - 0x1a397c
void entry_001a3950_0x1a3950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3950_0x1a3950");
#endif

    ctx->pc = 0x1a3950u;

    // 0x1a3950: 0x8e320684  lw          $s2, 0x684($s1)
    ctx->pc = 0x1a3950u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
    // 0x1a3954: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x1a3954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1a3958: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1a3958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1a395c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1a395cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a3960: 0x1460010d  bnez        $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x1A3960u;
    {
        const bool branch_taken_0x1a3960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3960) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3968u;
    // 0x1a3968: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x1a3968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x1a396c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A396Cu;
    {
        const bool branch_taken_0x1a396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a396c) {
            ctx->pc = 0x1A397Cu;
            return;
        }
    }
    ctx->pc = 0x1A3974u;
    // 0x1a3974: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3974u;
    {
        const bool branch_taken_0x1a3974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3974u;
        // 0x1a3978: 0x8e220678  lw          $v0, 0x678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3974) {
            ctx->pc = 0x1A3988u;
            return;
        }
    }
    ctx->pc = 0x1A397Cu;
}
