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

// Function: entry_001b8b80
// Address: 0x1b8b80 - 0x1b8bbc
void entry_001b8b80_0x1b8b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8b80_0x1b8b80");
#endif

    ctx->pc = 0x1b8b80u;

    // 0x1b8b80: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1b8b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1b8b84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8b88: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1b8b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1b8b8c: 0x10a3006f  beq         $a1, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1B8B8Cu;
    {
        const bool branch_taken_0x1b8b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B8Cu;
        // 0x1b8b90: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b8c) {
            ctx->pc = 0x1B8D4Cu;
            return;
        }
    }
    ctx->pc = 0x1B8B94u;
    // 0x1b8b94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b8b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8b98: 0x10a4004b  beq         $a1, $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B8B98u;
    {
        const bool branch_taken_0x1b8b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B98u;
        // 0x1b8b9c: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b98) {
            ctx->pc = 0x1B8CC8u;
            return;
        }
    }
    ctx->pc = 0x1B8BA0u;
    // 0x1b8ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8ba4: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B8BA4u;
    {
        const bool branch_taken_0x1b8ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BA4u;
        // 0x1b8ba8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ba4) {
            ctx->pc = 0x1B8C40u;
            return;
        }
    }
    ctx->pc = 0x1B8BACu;
    // 0x1b8bac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8BACu;
    {
        const bool branch_taken_0x1b8bac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BACu;
        // 0x1b8bb0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8bac) {
            ctx->pc = 0x1B8BBCu;
            return;
        }
    }
    ctx->pc = 0x1B8BB4u;
    // 0x1b8bb4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1B8BB4u;
    {
        const bool branch_taken_0x1b8bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8bb4) {
            ctx->pc = 0x1B8DCCu;
            return;
        }
    }
    ctx->pc = 0x1B8BBCu;
}
