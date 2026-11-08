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

// Function: entry_0014d6fc
// Address: 0x14d6fc - 0x14d71c
void entry_0014d6fc_0x14d6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d6fc_0x14d6fc");
#endif

    ctx->pc = 0x14d6fcu;

    // 0x14d6fc: 0x0  nop
    ctx->pc = 0x14d6fcu;
    // NOP
    // 0x14d700: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14d700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14d704: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14d704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14d708: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d70c: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x14d70cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14d710: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d714: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D714u;
    {
        const bool branch_taken_0x14d714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D714u;
        // 0x14d718: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d714) {
            ctx->pc = 0x14D6ECu;
            return;
        }
    }
    ctx->pc = 0x14D71Cu;
}
