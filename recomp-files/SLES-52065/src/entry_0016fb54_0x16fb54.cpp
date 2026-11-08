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

// Function: entry_0016fb54
// Address: 0x16fb54 - 0x16fb60
void entry_0016fb54_0x16fb54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fb54_0x16fb54");
#endif

    ctx->pc = 0x16fb54u;

    // 0x16fb54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fb58: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x16FB58u;
    {
        const bool branch_taken_0x16fb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB58u;
        // 0x16fb5c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb58) {
            ctx->pc = 0x170038u;
            return;
        }
    }
    ctx->pc = 0x16FB60u;
}
