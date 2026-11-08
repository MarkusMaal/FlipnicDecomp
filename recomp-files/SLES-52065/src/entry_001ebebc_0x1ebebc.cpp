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

// Function: entry_001ebebc
// Address: 0x1ebebc - 0x1ebef8
void entry_001ebebc_0x1ebebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebebc_0x1ebebc");
#endif

    ctx->pc = 0x1ebebcu;

    // 0x1ebebc: 0xf  sync
    ctx->pc = 0x1ebebcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebec0: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x1ebec0u;
    // CACHE instruction (ignored)
    // 0x1ebec4: 0xf  sync
    ctx->pc = 0x1ebec4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebec8: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1ebec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1ebecc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1ebeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1ebed0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ebed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ebed4: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1ebed4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ebed8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ebed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ebedc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBEDCu;
    {
        const bool branch_taken_0x1ebedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebedc) {
            ctx->pc = 0x1EBEF8u;
            return;
        }
    }
    ctx->pc = 0x1EBEE4u;
    // 0x1ebee4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBEE4u;
    {
        const bool branch_taken_0x1ebee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebee4) {
            ctx->pc = 0x1EBEF8u;
            return;
        }
    }
    ctx->pc = 0x1EBEECu;
    // 0x1ebeec: 0xf  sync
    ctx->pc = 0x1ebeecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebef0: 0xbcd40001  cache       0x14, 0x1($a2)
    ctx->pc = 0x1ebef0u;
    // CACHE instruction (ignored)
    // 0x1ebef4: 0xf  sync
    ctx->pc = 0x1ebef4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1ebef8u;
}
