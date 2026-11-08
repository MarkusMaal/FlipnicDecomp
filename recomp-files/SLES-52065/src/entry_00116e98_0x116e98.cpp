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

// Function: entry_00116e98
// Address: 0x116e98 - 0x116eb0
void entry_00116e98_0x116e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e98_0x116e98");
#endif

    ctx->pc = 0x116e98u;

    // 0x116e98: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x116e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116e9c: 0x94c50010  lhu         $a1, 0x10($a2)
    ctx->pc = 0x116e9cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x116ea0: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x116ea0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x116ea4: 0x14a0ffa4  bnez        $a1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x116EA4u;
    {
        const bool branch_taken_0x116ea4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x116EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EA4u;
        // 0x116ea8: 0xc42821  addu        $a1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ea4) {
            ctx->pc = 0x116D38u;
            return;
        }
    }
    ctx->pc = 0x116EACu;
    // 0x116eac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116eb0u;
}
