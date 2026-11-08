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

// Function: entry_0012405c
// Address: 0x12405c - 0x12407c
void entry_0012405c_0x12405c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012405c_0x12405c");
#endif

    ctx->pc = 0x12405cu;

    // 0x12405c: 0x0  nop
    ctx->pc = 0x12405cu;
    // NOP
    // 0x124060: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x124060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x124064: 0x16e20005  bne         $s7, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124064u;
    {
        const bool branch_taken_0x124064 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x124064) {
            ctx->pc = 0x12407Cu;
            return;
        }
    }
    ctx->pc = 0x12406Cu;
    // 0x12406c: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x12406cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x124070: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x124070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x124074: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x124074u;
    {
        const bool branch_taken_0x124074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124074u;
        // 0x124078: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124074) {
            ctx->pc = 0x12408Cu;
            return;
        }
    }
    ctx->pc = 0x12407Cu;
}
