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

// Function: entry_001ebffc
// Address: 0x1ebffc - 0x1ec038
void entry_001ebffc_0x1ebffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebffc_0x1ebffc");
#endif

    ctx->pc = 0x1ebffcu;

    // 0x1ebffc: 0xf  sync
    ctx->pc = 0x1ebffcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec000: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x1ec000u;
    // CACHE instruction (ignored)
    // 0x1ec004: 0xf  sync
    ctx->pc = 0x1ec004u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec008: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1ec008u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1ec00c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1ec00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1ec010: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ec010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ec014: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1ec014u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ec018: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ec018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ec01c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC01Cu;
    {
        const bool branch_taken_0x1ec01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec01c) {
            ctx->pc = 0x1EC038u;
            return;
        }
    }
    ctx->pc = 0x1EC024u;
    // 0x1ec024: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC024u;
    {
        const bool branch_taken_0x1ec024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec024) {
            ctx->pc = 0x1EC038u;
            return;
        }
    }
    ctx->pc = 0x1EC02Cu;
    // 0x1ec02c: 0xf  sync
    ctx->pc = 0x1ec02cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec030: 0xbcd60001  cache       0x16, 0x1($a2)
    ctx->pc = 0x1ec030u;
    // CACHE instruction (ignored)
    // 0x1ec034: 0xf  sync
    ctx->pc = 0x1ec034u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1ec038u;
}
