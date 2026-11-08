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

// Function: entry_0017cd88
// Address: 0x17cd88 - 0x17cd9c
void entry_0017cd88_0x17cd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd88_0x17cd88");
#endif

    ctx->pc = 0x17cd88u;

    // 0x17cd88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CD88u;
    {
        const bool branch_taken_0x17cd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd88) {
            ctx->pc = 0x17CD9Cu;
            return;
        }
    }
    ctx->pc = 0x17CD90u;
    // 0x17cd90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cd90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17CD94u;
    {
        const bool branch_taken_0x17cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD94u;
        // 0x17cd98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd94) {
            ctx->pc = 0x17CDBCu;
            return;
        }
    }
    ctx->pc = 0x17CD9Cu;
}
