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

// Function: entry_0013adbc
// Address: 0x13adbc - 0x13add4
void entry_0013adbc_0x13adbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013adbc_0x13adbc");
#endif

    ctx->pc = 0x13adbcu;

    // 0x13adbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13adbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13adc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13ADC0u;
    {
        const bool branch_taken_0x13adc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13adc0) {
            ctx->pc = 0x13ADD4u;
            return;
        }
    }
    ctx->pc = 0x13ADC8u;
    // 0x13adc8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x13adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13adcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13ADCCu;
    {
        const bool branch_taken_0x13adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADCCu;
        // 0x13add0: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adcc) {
            ctx->pc = 0x13ADE4u;
            return;
        }
    }
    ctx->pc = 0x13ADD4u;
}
