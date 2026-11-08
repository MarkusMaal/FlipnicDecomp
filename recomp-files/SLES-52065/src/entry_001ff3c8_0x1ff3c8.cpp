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

// Function: entry_001ff3c8
// Address: 0x1ff3c8 - 0x1ff3e0
void entry_001ff3c8_0x1ff3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff3c8_0x1ff3c8");
#endif

    ctx->pc = 0x1ff3c8u;

label_1ff3c8:
    // 0x1ff3c8: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x1ff3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x1ff3cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FF3CCu;
    {
        const bool branch_taken_0x1ff3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3CCu;
        // 0x1ff3d0: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3cc) {
            ctx->pc = 0x1FF42Cu;
            return;
        }
    }
    ctx->pc = 0x1FF3D4u;
    // 0x1ff3d4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x1ff3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1ff3d8: 0x1049fffb  beq         $v0, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FF3D8u;
    {
        const bool branch_taken_0x1ff3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x1FF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3D8u;
        // 0x1ff3dc: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3d8) {
            ctx->pc = 0x1FF3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff3c8;
        }
    }
    ctx->pc = 0x1FF3E0u;
}
