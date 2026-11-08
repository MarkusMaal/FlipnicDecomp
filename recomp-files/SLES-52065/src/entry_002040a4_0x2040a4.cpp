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

// Function: entry_002040a4
// Address: 0x2040a4 - 0x2040b8
void entry_002040a4_0x2040a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002040a4_0x2040a4");
#endif

    ctx->pc = 0x2040a4u;

    // 0x2040a4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2040a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2040a8: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2040a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2040ac: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x2040acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2040b0: 0x1000feb5  b           . + 4 + (-0x14B << 2)
    ctx->pc = 0x2040B0u;
    {
        const bool branch_taken_0x2040b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040B0u;
        // 0x2040b4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040b0) {
            ctx->pc = 0x203B88u;
            return;
        }
    }
    ctx->pc = 0x2040B8u;
}
