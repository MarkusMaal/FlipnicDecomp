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

// Function: entry_001f9ea4
// Address: 0x1f9ea4 - 0x1f9eb8
void entry_001f9ea4_0x1f9ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9ea4_0x1f9ea4");
#endif

    ctx->pc = 0x1f9ea4u;

    // 0x1f9ea4: 0x3c01c016  lui         $at, 0xC016
    ctx->pc = 0x1f9ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49174 << 16));
    // 0x1f9ea8: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x1f9ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x1f9eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9eb0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1F9EB0u;
    {
        const bool branch_taken_0x1f9eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EB0u;
        // 0x1f9eb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9eb0) {
            ctx->pc = 0x1FA024u;
            return;
        }
    }
    ctx->pc = 0x1F9EB8u;
}
