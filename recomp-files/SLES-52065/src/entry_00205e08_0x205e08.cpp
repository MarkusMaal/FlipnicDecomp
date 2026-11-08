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

// Function: entry_00205e08
// Address: 0x205e08 - 0x205e20
void entry_00205e08_0x205e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205e08_0x205e08");
#endif

    ctx->pc = 0x205e08u;

    // 0x205e08: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x205e08u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x205e0c: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x205e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x205e10: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205E10u;
    {
        const bool branch_taken_0x205e10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x205E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E10u;
        // 0x205e14: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e10) {
            ctx->pc = 0x205E20u;
            return;
        }
    }
    ctx->pc = 0x205E18u;
    // 0x205e18: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x205E18u;
    {
        const bool branch_taken_0x205e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e18) {
            ctx->pc = 0x205E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205E18u;
            // 0x205e1c: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205E28u;
            return;
        }
    }
    ctx->pc = 0x205E20u;
}
