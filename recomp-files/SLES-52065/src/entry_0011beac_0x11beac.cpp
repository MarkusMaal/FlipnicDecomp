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

// Function: entry_0011beac
// Address: 0x11beac - 0x11bec4
void entry_0011beac_0x11beac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011beac_0x11beac");
#endif

    ctx->pc = 0x11beacu;

    // 0x11beac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x11beacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11beb0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x11beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x11beb4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEB4u;
    {
        const bool branch_taken_0x11beb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEB4u;
        // 0x11beb8: 0x2113f  dsra32      $v0, $v0, 4 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11beb4) {
            ctx->pc = 0x11BEC4u;
            return;
        }
    }
    ctx->pc = 0x11BEBCu;
    // 0x11bebc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x11bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x11bec0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11bec0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x11bec4u;
}
