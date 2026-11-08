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

// Function: entry_001e39e8
// Address: 0x1e39e8 - 0x1e3a00
void entry_001e39e8_0x1e39e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e39e8_0x1e39e8");
#endif

    ctx->pc = 0x1e39e8u;

    // 0x1e39e8: 0xa2220040  sb          $v0, 0x40($s1)
    ctx->pc = 0x1e39e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e39ec: 0x92220041  lbu         $v0, 0x41($s1)
    ctx->pc = 0x1e39ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
    // 0x1e39f0: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1E39F0u;
    {
        const bool branch_taken_0x1e39f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39f0) {
            ctx->pc = 0x1E3C28u;
            return;
        }
    }
    ctx->pc = 0x1E39F8u;
    // 0x1e39f8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1E39F8u;
    {
        const bool branch_taken_0x1e39f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39F8u;
        // 0x1e39fc: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39f8) {
            ctx->pc = 0x1E3B18u;
            return;
        }
    }
    ctx->pc = 0x1E3A00u;
}
