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

// Function: entry_001a5178
// Address: 0x1a5178 - 0x1a5190
void entry_001a5178_0x1a5178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5178_0x1a5178");
#endif

    ctx->pc = 0x1a5178u;

    // 0x1a5178: 0x9262093c  lbu         $v0, 0x93C($s3)
    ctx->pc = 0x1a5178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2364)));
    // 0x1a517c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1A517Cu;
    {
        const bool branch_taken_0x1a517c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a517c) {
            ctx->pc = 0x1A5328u;
            return;
        }
    }
    ctx->pc = 0x1A5184u;
    // 0x1a5184: 0xa260075c  sb          $zero, 0x75C($s3)
    ctx->pc = 0x1a5184u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1884), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5188: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a5188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a518c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a518cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a5190u;
}
