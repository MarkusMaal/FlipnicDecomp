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

// Function: entry_001f9e90
// Address: 0x1f9e90 - 0x1f9ea4
void entry_001f9e90_0x1f9e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9e90_0x1f9e90");
#endif

    ctx->pc = 0x1f9e90u;

    // 0x1f9e90: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x1f9e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x1f9e94: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x1f9e94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x1f9e98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e9c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1F9E9Cu;
    {
        const bool branch_taken_0x1f9e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E9Cu;
        // 0x1f9ea0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e9c) {
            ctx->pc = 0x1FA024u;
            return;
        }
    }
    ctx->pc = 0x1F9EA4u;
}
