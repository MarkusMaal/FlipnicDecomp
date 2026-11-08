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

// Function: entry_001bd050
// Address: 0x1bd050 - 0x1bd06c
void entry_001bd050_0x1bd050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd050_0x1bd050");
#endif

    ctx->pc = 0x1bd050u;

    // 0x1bd050: 0x24560001  addiu       $s6, $v0, 0x1
    ctx->pc = 0x1bd050u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd054: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bd054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bd058: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1bd058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bd05c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD05Cu;
    {
        const bool branch_taken_0x1bd05c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD05Cu;
        // 0x1bd060: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd05c) {
            ctx->pc = 0x1BD06Cu;
            return;
        }
    }
    ctx->pc = 0x1BD064u;
    // 0x1bd064: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1bd064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bd068: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1bd068u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1bd06cu;
}
