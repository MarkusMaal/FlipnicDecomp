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

// Function: entry_0013b604
// Address: 0x13b604 - 0x13b624
void entry_0013b604_0x13b604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b604_0x13b604");
#endif

    ctx->pc = 0x13b604u;

    // 0x13b604: 0x0  nop
    ctx->pc = 0x13b604u;
    // NOP
    // 0x13b608: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x13b608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b60c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x13b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x13b610: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x13b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x13b614: 0x94282b  sltu        $a1, $a0, $s4
    ctx->pc = 0x13b614u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x13b618: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b61c: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13B61Cu;
    {
        const bool branch_taken_0x13b61c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B61Cu;
        // 0x13b620: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b61c) {
            ctx->pc = 0x13B5CCu;
            return;
        }
    }
    ctx->pc = 0x13B624u;
}
