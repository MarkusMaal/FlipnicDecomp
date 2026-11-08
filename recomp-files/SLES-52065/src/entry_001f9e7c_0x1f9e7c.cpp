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

// Function: entry_001f9e7c
// Address: 0x1f9e7c - 0x1f9e90
void entry_001f9e7c_0x1f9e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9e7c_0x1f9e7c");
#endif

    ctx->pc = 0x1f9e7cu;

    // 0x1f9e7c: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x1f9e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x1f9e80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f9e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f9e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e88: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1F9E88u;
    {
        const bool branch_taken_0x1f9e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E88u;
        // 0x1f9e8c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e88) {
            ctx->pc = 0x1FA024u;
            return;
        }
    }
    ctx->pc = 0x1F9E90u;
}
