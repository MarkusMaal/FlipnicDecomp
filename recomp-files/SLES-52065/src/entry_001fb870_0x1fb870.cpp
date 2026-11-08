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

// Function: entry_001fb870
// Address: 0x1fb870 - 0x1fb884
void entry_001fb870_0x1fb870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb870_0x1fb870");
#endif

    ctx->pc = 0x1fb870u;

    // 0x1fb870: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1fb870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1fb874: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb878: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1fb878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1fb87c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FB87Cu;
    {
        const bool branch_taken_0x1fb87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB87Cu;
        // 0x1fb880: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb87c) {
            ctx->pc = 0x1FB8F0u;
            return;
        }
    }
    ctx->pc = 0x1FB884u;
}
