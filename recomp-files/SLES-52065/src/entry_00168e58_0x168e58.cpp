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

// Function: entry_00168e58
// Address: 0x168e58 - 0x168e80
void entry_00168e58_0x168e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e58_0x168e58");
#endif

    ctx->pc = 0x168e58u;

    // 0x168e58: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x168E58u;
    {
        const bool branch_taken_0x168e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e58) {
            ctx->pc = 0x168E80u;
            return;
        }
    }
    ctx->pc = 0x168E60u;
    // 0x168e60: 0x8c8601d4  lw          $a2, 0x1D4($a0)
    ctx->pc = 0x168e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x168e64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x168e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168e68: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168E68u;
    {
        const bool branch_taken_0x168e68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x168e68) {
            ctx->pc = 0x168E80u;
            return;
        }
    }
    ctx->pc = 0x168E70u;
    // 0x168e70: 0x8c830230  lw          $v1, 0x230($a0)
    ctx->pc = 0x168e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x168e74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x168e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x168e78: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x168E78u;
    {
        const bool branch_taken_0x168e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E78u;
        // 0x168e7c: 0xac830230  sw          $v1, 0x230($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e78) {
            ctx->pc = 0x168EF0u;
            return;
        }
    }
    ctx->pc = 0x168E80u;
}
