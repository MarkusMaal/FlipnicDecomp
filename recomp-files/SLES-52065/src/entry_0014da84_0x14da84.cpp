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

// Function: entry_0014da84
// Address: 0x14da84 - 0x14daac
void entry_0014da84_0x14da84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da84_0x14da84");
#endif

    ctx->pc = 0x14da84u;

    // 0x14da84: 0x0  nop
    ctx->pc = 0x14da84u;
    // NOP
    // 0x14da88: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14da88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14da8c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x14da8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x14da90: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x14da90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x14da94: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x14da94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14da98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14da98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14da9c: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DA9Cu;
    {
        const bool branch_taken_0x14da9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA9Cu;
        // 0x14daa0: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da9c) {
            ctx->pc = 0x14DA74u;
            return;
        }
    }
    ctx->pc = 0x14DAA4u;
    // 0x14daa4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14DAA4u;
    {
        const bool branch_taken_0x14daa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14daa4) {
            ctx->pc = 0x14DB58u;
            return;
        }
    }
    ctx->pc = 0x14DAACu;
}
