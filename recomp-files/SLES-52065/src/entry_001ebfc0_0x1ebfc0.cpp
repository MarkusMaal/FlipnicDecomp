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

// Function: entry_001ebfc0
// Address: 0x1ebfc0 - 0x1ebffc
void entry_001ebfc0_0x1ebfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebfc0_0x1ebfc0");
#endif

    ctx->pc = 0x1ebfc0u;

    // 0x1ebfc0: 0xf  sync
    ctx->pc = 0x1ebfc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebfc4: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x1ebfc4u;
    // CACHE instruction (ignored)
    // 0x1ebfc8: 0xf  sync
    ctx->pc = 0x1ebfc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebfcc: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1ebfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1ebfd0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1ebfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1ebfd4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ebfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ebfd8: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1ebfd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ebfdc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ebfdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ebfe0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBFE0u;
    {
        const bool branch_taken_0x1ebfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebfe0) {
            ctx->pc = 0x1EBFFCu;
            return;
        }
    }
    ctx->pc = 0x1EBFE8u;
    // 0x1ebfe8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBFE8u;
    {
        const bool branch_taken_0x1ebfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebfe8) {
            ctx->pc = 0x1EBFFCu;
            return;
        }
    }
    ctx->pc = 0x1EBFF0u;
    // 0x1ebff0: 0xf  sync
    ctx->pc = 0x1ebff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebff4: 0xbcd60000  cache       0x16, 0x0($a2)
    ctx->pc = 0x1ebff4u;
    // CACHE instruction (ignored)
    // 0x1ebff8: 0xf  sync
    ctx->pc = 0x1ebff8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1ebffcu;
}
