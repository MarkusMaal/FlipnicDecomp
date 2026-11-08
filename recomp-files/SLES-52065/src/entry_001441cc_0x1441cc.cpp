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

// Function: entry_001441cc
// Address: 0x1441cc - 0x1441ec
void entry_001441cc_0x1441cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001441cc_0x1441cc");
#endif

    ctx->pc = 0x1441ccu;

    // 0x1441cc: 0x0  nop
    ctx->pc = 0x1441ccu;
    // NOP
    // 0x1441d0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1441d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1441d4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1441d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1441d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1441d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1441dc: 0xa3302b  sltu        $a2, $a1, $v1
    ctx->pc = 0x1441dcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1441e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1441e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1441e4: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1441E4u;
    {
        const bool branch_taken_0x1441e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1441E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441E4u;
        // 0x1441e8: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441e4) {
            ctx->pc = 0x144184u;
            return;
        }
    }
    ctx->pc = 0x1441ECu;
}
