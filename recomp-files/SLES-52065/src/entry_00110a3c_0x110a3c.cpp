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

// Function: entry_00110a3c
// Address: 0x110a3c - 0x110a5c
void entry_00110a3c_0x110a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110a3c_0x110a3c");
#endif

    ctx->pc = 0x110a3cu;

    // 0x110a3c: 0x0  nop
    ctx->pc = 0x110a3cu;
    // NOP
    // 0x110a40: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x110a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110a44: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x110a44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x110a48: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x110A48u;
    {
        const bool branch_taken_0x110a48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x110a48) {
            ctx->pc = 0x110A0Cu;
            return;
        }
    }
    ctx->pc = 0x110A50u;
    // 0x110a50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x110a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a54: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x110A54u;
    {
        const bool branch_taken_0x110a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A54u;
        // 0x110a58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a54) {
            ctx->pc = 0x110AD8u;
            return;
        }
    }
    ctx->pc = 0x110A5Cu;
}
