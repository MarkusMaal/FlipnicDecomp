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

// Function: entry_001a1adc
// Address: 0x1a1adc - 0x1a1ae4
void entry_001a1adc_0x1a1adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1adc_0x1a1adc");
#endif

    ctx->pc = 0x1a1adcu;

    // 0x1a1adc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1ADCu;
    {
        const bool branch_taken_0x1a1adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ADCu;
        // 0x1a1ae0: 0xdc852818  ld          $a1, 0x2818($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1adc) {
            ctx->pc = 0x1A1B00u;
            return;
        }
    }
    ctx->pc = 0x1A1AE4u;
}
