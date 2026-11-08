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

// Function: entry_00143f04
// Address: 0x143f04 - 0x143f24
void entry_00143f04_0x143f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f04_0x143f04");
#endif

    ctx->pc = 0x143f04u;

    // 0x143f04: 0x0  nop
    ctx->pc = 0x143f04u;
    // NOP
    // 0x143f08: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143f0c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x143f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x143f10: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x143f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x143f14: 0xd0202b  sltu        $a0, $a2, $s0
    ctx->pc = 0x143f14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x143f18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x143f1c: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x143F1Cu;
    {
        const bool branch_taken_0x143f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x143F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F1Cu;
        // 0x143f20: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f1c) {
            ctx->pc = 0x143EBCu;
            return;
        }
    }
    ctx->pc = 0x143F24u;
}
