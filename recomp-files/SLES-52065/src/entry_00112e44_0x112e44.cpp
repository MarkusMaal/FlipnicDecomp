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

// Function: entry_00112e44
// Address: 0x112e44 - 0x112e64
void entry_00112e44_0x112e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112e44_0x112e44");
#endif

    ctx->pc = 0x112e44u;

    // 0x112e44: 0x0  nop
    ctx->pc = 0x112e44u;
    // NOP
    // 0x112e48: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112e4c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112e50: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x112E50u;
    {
        const bool branch_taken_0x112e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e50) {
            ctx->pc = 0x112E0Cu;
            return;
        }
    }
    ctx->pc = 0x112E58u;
    // 0x112e58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x112E5Cu;
    {
        const bool branch_taken_0x112e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E5Cu;
        // 0x112e60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e5c) {
            ctx->pc = 0x112EC0u;
            return;
        }
    }
    ctx->pc = 0x112E64u;
}
