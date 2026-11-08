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

// Function: entry_001b9e84
// Address: 0x1b9e84 - 0x1b9ec0
void entry_001b9e84_0x1b9e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9e84_0x1b9e84");
#endif

    ctx->pc = 0x1b9e84u;

    // 0x1b9e84: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1b9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1b9e88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b9e8c: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1b9e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1b9e90: 0x1082006f  beq         $a0, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1B9E90u;
    {
        const bool branch_taken_0x1b9e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B9E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E90u;
        // 0x1b9e94: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e90) {
            ctx->pc = 0x1BA050u;
            return;
        }
    }
    ctx->pc = 0x1B9E98u;
    // 0x1b9e98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b9e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9e9c: 0x1083004b  beq         $a0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B9E9Cu;
    {
        const bool branch_taken_0x1b9e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E9Cu;
        // 0x1b9ea0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e9c) {
            ctx->pc = 0x1B9FCCu;
            return;
        }
    }
    ctx->pc = 0x1B9EA4u;
    // 0x1b9ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9ea8: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B9EA8u;
    {
        const bool branch_taken_0x1b9ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EA8u;
        // 0x1b9eac: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ea8) {
            ctx->pc = 0x1B9F44u;
            return;
        }
    }
    ctx->pc = 0x1B9EB0u;
    // 0x1b9eb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9EB0u;
    {
        const bool branch_taken_0x1b9eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EB0u;
        // 0x1b9eb4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9eb0) {
            ctx->pc = 0x1B9EC0u;
            return;
        }
    }
    ctx->pc = 0x1B9EB8u;
    // 0x1b9eb8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1B9EB8u;
    {
        const bool branch_taken_0x1b9eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9eb8) {
            ctx->pc = 0x1BA0D0u;
            return;
        }
    }
    ctx->pc = 0x1B9EC0u;
}
