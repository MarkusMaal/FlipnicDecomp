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

// Function: entry_001364b4
// Address: 0x1364b4 - 0x1364d4
void entry_001364b4_0x1364b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001364b4_0x1364b4");
#endif

    ctx->pc = 0x1364b4u;

    // 0x1364b4: 0x0  nop
    ctx->pc = 0x1364b4u;
    // NOP
    // 0x1364b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1364b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1364bc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1364bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1364c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1364c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1364c4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x1364c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1364c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1364c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1364cc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1364CCu;
    {
        const bool branch_taken_0x1364cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1364D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364CCu;
        // 0x1364d0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364cc) {
            ctx->pc = 0x1364A4u;
            return;
        }
    }
    ctx->pc = 0x1364D4u;
}
