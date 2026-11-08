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

// Function: entry_00128ee8
// Address: 0x128ee8 - 0x128efc
void entry_00128ee8_0x128ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128ee8_0x128ee8");
#endif

    ctx->pc = 0x128ee8u;

    // 0x128ee8: 0xae800110  sw          $zero, 0x110($s4)
    ctx->pc = 0x128ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 0));
    // 0x128eec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x128eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ef0: 0xae840114  sw          $a0, 0x114($s4)
    ctx->pc = 0x128ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 4));
    // 0x128ef4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128EF4u;
    {
        const bool branch_taken_0x128ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EF4u;
        // 0x128ef8: 0xae8300a0  sw          $v1, 0xA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ef4) {
            ctx->pc = 0x128F0Cu;
            return;
        }
    }
    ctx->pc = 0x128EFCu;
}
