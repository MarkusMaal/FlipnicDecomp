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

// Function: entry_0014393c
// Address: 0x14393c - 0x14395c
void entry_0014393c_0x14393c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014393c_0x14393c");
#endif

    ctx->pc = 0x14393cu;

    // 0x14393c: 0x0  nop
    ctx->pc = 0x14393cu;
    // NOP
    // 0x143940: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x143940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x143944: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x143944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x143948: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14394c: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x14394cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x143950: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x143950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x143954: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x143954u;
    {
        const bool branch_taken_0x143954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143954u;
        // 0x143958: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143954) {
            ctx->pc = 0x143914u;
            return;
        }
    }
    ctx->pc = 0x14395Cu;
}
