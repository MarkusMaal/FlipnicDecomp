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

// Function: entry_001ebe80
// Address: 0x1ebe80 - 0x1ebebc
void entry_001ebe80_0x1ebe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebe80_0x1ebe80");
#endif

    ctx->pc = 0x1ebe80u;

    // 0x1ebe80: 0xf  sync
    ctx->pc = 0x1ebe80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebe84: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x1ebe84u;
    // CACHE instruction (ignored)
    // 0x1ebe88: 0xf  sync
    ctx->pc = 0x1ebe88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebe8c: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1ebe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1ebe90: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1ebe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1ebe94: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ebe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ebe98: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1ebe98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ebe9c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ebe9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ebea0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBEA0u;
    {
        const bool branch_taken_0x1ebea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebea0) {
            ctx->pc = 0x1EBEBCu;
            return;
        }
    }
    ctx->pc = 0x1EBEA8u;
    // 0x1ebea8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBEA8u;
    {
        const bool branch_taken_0x1ebea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebea8) {
            ctx->pc = 0x1EBEBCu;
            return;
        }
    }
    ctx->pc = 0x1EBEB0u;
    // 0x1ebeb0: 0xf  sync
    ctx->pc = 0x1ebeb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebeb4: 0xbcd40000  cache       0x14, 0x0($a2)
    ctx->pc = 0x1ebeb4u;
    // CACHE instruction (ignored)
    // 0x1ebeb8: 0xf  sync
    ctx->pc = 0x1ebeb8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1ebebcu;
}
