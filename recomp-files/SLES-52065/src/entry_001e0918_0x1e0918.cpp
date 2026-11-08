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

// Function: entry_001e0918
// Address: 0x1e0918 - 0x1e0940
void entry_001e0918_0x1e0918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0918_0x1e0918");
#endif

    ctx->pc = 0x1e0918u;

    // 0x1e0918: 0x24c40005  addiu       $a0, $a2, 0x5
    ctx->pc = 0x1e0918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1e091c: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x1e091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1e0920: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e0920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e0924: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x1e0924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x1e0928: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e0928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e092c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1e092cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1e0930: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x1e0930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e0934: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0934u;
    {
        const bool branch_taken_0x1e0934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0934u;
        // 0x1e0938: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0934) {
            ctx->pc = 0x1E0948u;
            return;
        }
    }
    ctx->pc = 0x1E093Cu;
    // 0x1e093c: 0x0  nop
    ctx->pc = 0x1e093cu;
    // NOP
    ctx->pc = 0x1e0940u;
}
