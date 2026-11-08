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

// Function: entry_0015a678
// Address: 0x15a678 - 0x15a6a0
void entry_0015a678_0x15a678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a678_0x15a678");
#endif

    ctx->pc = 0x15a678u;

    // 0x15a678: 0x862201f6  lh          $v0, 0x1F6($s1)
    ctx->pc = 0x15a678u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 502)));
    // 0x15a67c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15a680: 0xa62201f6  sh          $v0, 0x1F6($s1)
    ctx->pc = 0x15a680u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a684: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15a684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15a688: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15a688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15a68c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x15a68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15a690: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A690u;
    {
        const bool branch_taken_0x15a690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A690u;
        // 0x15a694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a690) {
            ctx->pc = 0x15A6A0u;
            return;
        }
    }
    ctx->pc = 0x15A698u;
    // 0x15a698: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x15A698u;
    {
        const bool branch_taken_0x15a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A698u;
        // 0x15a69c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a698) {
            ctx->pc = 0x15A970u;
            return;
        }
    }
    ctx->pc = 0x15A6A0u;
}
