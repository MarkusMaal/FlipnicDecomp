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

// Function: entry_001e0d7c
// Address: 0x1e0d7c - 0x1e0da8
void entry_001e0d7c_0x1e0d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d7c_0x1e0d7c");
#endif

    ctx->pc = 0x1e0d7cu;

    // 0x1e0d7c: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x1e0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1e0d80: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0D80u;
    {
        const bool branch_taken_0x1e0d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0d80) {
            ctx->pc = 0x1E0D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0D80u;
            // 0x1e0d84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0DA8u;
            return;
        }
    }
    ctx->pc = 0x1E0D88u;
    // 0x1e0d88: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1e0d88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0d8c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1e0d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1e0d90: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x1e0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1e0d94: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x1e0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1e0d98: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1e0d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1e0d9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D9Cu;
    {
        const bool branch_taken_0x1e0d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D9Cu;
        // 0x1e0da0: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d9c) {
            ctx->pc = 0x1E0DB0u;
            return;
        }
    }
    ctx->pc = 0x1E0DA4u;
    // 0x1e0da4: 0x0  nop
    ctx->pc = 0x1e0da4u;
    // NOP
    ctx->pc = 0x1e0da8u;
}
