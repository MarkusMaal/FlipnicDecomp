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

// Function: entry_001f9f08
// Address: 0x1f9f08 - 0x1f9f1c
void entry_001f9f08_0x1f9f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9f08_0x1f9f08");
#endif

    ctx->pc = 0x1f9f08u;

    // 0x1f9f08: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f9f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f9f0c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1f9f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1f9f10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9f14: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1F9F14u;
    {
        const bool branch_taken_0x1f9f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F14u;
        // 0x1f9f18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f14) {
            ctx->pc = 0x1FA024u;
            return;
        }
    }
    ctx->pc = 0x1F9F1Cu;
}
