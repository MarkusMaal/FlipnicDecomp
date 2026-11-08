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

// Function: entry_0019d73c
// Address: 0x19d73c - 0x19d758
void entry_0019d73c_0x19d73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d73c_0x19d73c");
#endif

    ctx->pc = 0x19d73cu;

    // 0x19d73c: 0x0  nop
    ctx->pc = 0x19d73cu;
    // NOP
    // 0x19d740: 0x8ea307f4  lw          $v1, 0x7F4($s5)
    ctx->pc = 0x19d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
    // 0x19d744: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x19d744u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19d748: 0x1460ff7a  bnez        $v1, . + 4 + (-0x86 << 2)
    ctx->pc = 0x19D748u;
    {
        const bool branch_taken_0x19d748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D748u;
        // 0x19d74c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d748) {
            ctx->pc = 0x19D534u;
            return;
        }
    }
    ctx->pc = 0x19D750u;
    // 0x19d750: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19D750u;
    {
        const bool branch_taken_0x19d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d750) {
            ctx->pc = 0x19D774u;
            return;
        }
    }
    ctx->pc = 0x19D758u;
}
