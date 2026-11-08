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

// Function: entry_001c29ec
// Address: 0x1c29ec - 0x1c29fc
void entry_001c29ec_0x1c29ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c29ec_0x1c29ec");
#endif

    ctx->pc = 0x1c29ecu;

    // 0x1c29ec: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c29f0: 0xac20f5d8  sw          $zero, -0xA28($at)
    ctx->pc = 0x1c29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964696), GPR_U32(ctx, 0));
    // 0x1c29f4: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x1C29F4u;
    {
        const bool branch_taken_0x1c29f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29F4u;
        // 0x1c29f8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29f4) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C29FCu;
}
