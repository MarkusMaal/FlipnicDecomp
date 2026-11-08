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

// Function: entry_0019c1c4
// Address: 0x19c1c4 - 0x19c1ec
void entry_0019c1c4_0x19c1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c1c4_0x19c1c4");
#endif

    ctx->pc = 0x19c1c4u;

    // 0x19c1c4: 0x8e230928  lw          $v1, 0x928($s1)
    ctx->pc = 0x19c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
    // 0x19c1c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19c1cc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C1CCu;
    {
        const bool branch_taken_0x19c1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1CCu;
        // 0x19c1d0: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1cc) {
            ctx->pc = 0x19C1F4u;
            return;
        }
    }
    ctx->pc = 0x19C1D4u;
    // 0x19c1d4: 0x8e22093c  lw          $v0, 0x93C($s1)
    ctx->pc = 0x19c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2364)));
    // 0x19c1d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C1D8u;
    {
        const bool branch_taken_0x19c1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1D8u;
        // 0x19c1dc: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1d8) {
            ctx->pc = 0x19C1ECu;
            return;
        }
    }
    ctx->pc = 0x19C1E0u;
    // 0x19c1e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C1E0u;
    {
        const bool branch_taken_0x19c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1E0u;
        // 0x19c1e4: 0x8c4a0010  lw          $t2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1e0) {
            ctx->pc = 0x19C1ECu;
            return;
        }
    }
    ctx->pc = 0x19C1E8u;
    // 0x19c1e8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19c1e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x19c1ecu;
}
