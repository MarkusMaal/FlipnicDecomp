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

// Function: entry_0010fba0
// Address: 0x10fba0 - 0x10fbc0
void entry_0010fba0_0x10fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fba0_0x10fba0");
#endif

    ctx->pc = 0x10fba0u;

    // 0x10fba0: 0x92230225  lbu         $v1, 0x225($s1)
    ctx->pc = 0x10fba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 549)));
    // 0x10fba4: 0x31fbc  dsll32      $v1, $v1, 30
    ctx->pc = 0x10fba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 30));
    // 0x10fba8: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10fba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x10fbac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FBACu;
    {
        const bool branch_taken_0x10fbac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBACu;
        // 0x10fbb0: 0x41ebc  dsll32      $v1, $a0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbac) {
            ctx->pc = 0x10FBC0u;
            return;
        }
    }
    ctx->pc = 0x10FBB4u;
    // 0x10fbb4: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x10fbb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FBB8u;
    {
        const bool branch_taken_0x10fbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fbb8) {
            ctx->pc = 0x10FBCCu;
            return;
        }
    }
    ctx->pc = 0x10FBC0u;
}
