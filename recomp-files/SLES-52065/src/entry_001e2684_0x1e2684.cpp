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

// Function: entry_001e2684
// Address: 0x1e2684 - 0x1e26a4
void entry_001e2684_0x1e2684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2684_0x1e2684");
#endif

    ctx->pc = 0x1e2684u;

    // 0x1e2684: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1e2684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e2688: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1e2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e268c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e268cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e2690: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2690u;
    {
        const bool branch_taken_0x1e2690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2690u;
        // 0x1e2694: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2690) {
            ctx->pc = 0x1E26A4u;
            return;
        }
    }
    ctx->pc = 0x1E2698u;
    // 0x1e2698: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e2698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1e269c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E269Cu;
    {
        const bool branch_taken_0x1e269c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E26A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E269Cu;
        // 0x1e26a0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e269c) {
            ctx->pc = 0x1E26B8u;
            return;
        }
    }
    ctx->pc = 0x1E26A4u;
}
