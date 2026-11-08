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

// Function: entry_00168e34
// Address: 0x168e34 - 0x168e54
void entry_00168e34_0x168e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e34_0x168e34");
#endif

    ctx->pc = 0x168e34u;

    // 0x168e34: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x168e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168e38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x168e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x168e3c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x168e3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x168e40: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x168e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x168e44: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E44u;
    {
        const bool branch_taken_0x168e44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x168e44) {
            ctx->pc = 0x168E54u;
            return;
        }
    }
    ctx->pc = 0x168E4Cu;
    // 0x168e4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x168E4Cu;
    {
        const bool branch_taken_0x168e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E4Cu;
        // 0x168e50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e4c) {
            ctx->pc = 0x168E58u;
            return;
        }
    }
    ctx->pc = 0x168E54u;
}
