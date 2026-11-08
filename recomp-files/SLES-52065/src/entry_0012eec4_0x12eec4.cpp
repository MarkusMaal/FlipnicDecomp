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

// Function: entry_0012eec4
// Address: 0x12eec4 - 0x12eee0
void entry_0012eec4_0x12eec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eec4_0x12eec4");
#endif

    ctx->pc = 0x12eec4u;

    // 0x12eec4: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x12eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x12eec8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x12eec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12eecc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EECCu;
    {
        const bool branch_taken_0x12eecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EECCu;
        // 0x12eed0: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eecc) {
            ctx->pc = 0x12EEE0u;
            return;
        }
    }
    ctx->pc = 0x12EED4u;
    // 0x12eed4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x12eed4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12eed8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12EED8u;
    {
        const bool branch_taken_0x12eed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EED8u;
        // 0x12eedc: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eed8) {
            ctx->pc = 0x12EEF0u;
            return;
        }
    }
    ctx->pc = 0x12EEE0u;
}
