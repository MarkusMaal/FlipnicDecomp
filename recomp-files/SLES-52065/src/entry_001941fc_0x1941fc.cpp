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

// Function: entry_001941fc
// Address: 0x1941fc - 0x194220
void entry_001941fc_0x1941fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001941fc_0x1941fc");
#endif

    ctx->pc = 0x1941fcu;

    // 0x1941fc: 0x0  nop
    ctx->pc = 0x1941fcu;
    // NOP
    // 0x194200: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x194204: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x194204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x194208: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x194208u;
    {
        const bool branch_taken_0x194208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194208u;
        // 0x19420c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194208) {
            ctx->pc = 0x194220u;
            return;
        }
    }
    ctx->pc = 0x194210u;
    // 0x194210: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x194210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x194214: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x194214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x194218: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x194218u;
    {
        const bool branch_taken_0x194218 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x194218) {
            ctx->pc = 0x1941CCu;
            return;
        }
    }
    ctx->pc = 0x194220u;
}
