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

// Function: entry_00112264
// Address: 0x112264 - 0x112284
void entry_00112264_0x112264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112264_0x112264");
#endif

    ctx->pc = 0x112264u;

    // 0x112264: 0x0  nop
    ctx->pc = 0x112264u;
    // NOP
    // 0x112268: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11226c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x11226cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112270: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112270u;
    {
        const bool branch_taken_0x112270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112270u;
        // 0x112274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112270) {
            ctx->pc = 0x112234u;
            return;
        }
    }
    ctx->pc = 0x112278u;
    // 0x112278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11227c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11227Cu;
    {
        const bool branch_taken_0x11227c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11227Cu;
        // 0x112280: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11227c) {
            ctx->pc = 0x1122C8u;
            return;
        }
    }
    ctx->pc = 0x112284u;
}
