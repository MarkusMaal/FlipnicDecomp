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

// Function: entry_001547c0
// Address: 0x1547c0 - 0x1547d0
void entry_001547c0_0x1547c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001547c0_0x1547c0");
#endif

    ctx->pc = 0x1547c0u;

    // 0x1547c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1547c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1547c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1547c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1547c8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1547C8u;
    {
        const bool branch_taken_0x1547c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547C8u;
        // 0x1547cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547c8) {
            ctx->pc = 0x154938u;
            return;
        }
    }
    ctx->pc = 0x1547D0u;
}
