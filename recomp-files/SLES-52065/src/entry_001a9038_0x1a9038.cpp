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

// Function: entry_001a9038
// Address: 0x1a9038 - 0x1a904c
void entry_001a9038_0x1a9038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9038_0x1a9038");
#endif

    ctx->pc = 0x1a9038u;

    // 0x1a9038: 0x8e8309b4  lw          $v1, 0x9B4($s4)
    ctx->pc = 0x1a9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
    // 0x1a903c: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1a903cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a9040: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a9044: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9044u;
    {
        const bool branch_taken_0x1a9044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9044u;
        // 0x1a9048: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9044) {
            ctx->pc = 0x1A9068u;
            return;
        }
    }
    ctx->pc = 0x1A904Cu;
}
