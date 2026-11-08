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

// Function: entry_0014dacc
// Address: 0x14dacc - 0x14daec
void entry_0014dacc_0x14dacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dacc_0x14dacc");
#endif

    ctx->pc = 0x14daccu;

    // 0x14dacc: 0x0  nop
    ctx->pc = 0x14daccu;
    // NOP
    // 0x14dad0: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14dad4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x14dad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x14dad8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x14dad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x14dadc: 0xe3202b  sltu        $a0, $a3, $v1
    ctx->pc = 0x14dadcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14dae0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14dae4: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DAE4u;
    {
        const bool branch_taken_0x14dae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAE4u;
        // 0x14dae8: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dae4) {
            ctx->pc = 0x14DABCu;
            return;
        }
    }
    ctx->pc = 0x14DAECu;
}
