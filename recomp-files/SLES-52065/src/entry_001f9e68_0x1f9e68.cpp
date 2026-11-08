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

// Function: entry_001f9e68
// Address: 0x1f9e68 - 0x1f9e7c
void entry_001f9e68_0x1f9e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9e68_0x1f9e68");
#endif

    ctx->pc = 0x1f9e68u;

    // 0x1f9e68: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1f9e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x1f9e6c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f9e6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f9e70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e74: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1F9E74u;
    {
        const bool branch_taken_0x1f9e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E74u;
        // 0x1f9e78: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e74) {
            ctx->pc = 0x1FA024u;
            return;
        }
    }
    ctx->pc = 0x1F9E7Cu;
}
