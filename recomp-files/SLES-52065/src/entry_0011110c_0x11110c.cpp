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

// Function: entry_0011110c
// Address: 0x11110c - 0x11112c
void entry_0011110c_0x11110c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011110c_0x11110c");
#endif

    ctx->pc = 0x11110cu;

    // 0x11110c: 0x0  nop
    ctx->pc = 0x11110cu;
    // NOP
    // 0x111110: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x111110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x111114: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x111114u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x111118: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x111118u;
    {
        const bool branch_taken_0x111118 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x111118) {
            ctx->pc = 0x1110DCu;
            return;
        }
    }
    ctx->pc = 0x111120u;
    // 0x111120: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x111120u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111124: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x111124u;
    {
        const bool branch_taken_0x111124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111124u;
        // 0x111128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111124) {
            ctx->pc = 0x1111A8u;
            return;
        }
    }
    ctx->pc = 0x11112Cu;
}
