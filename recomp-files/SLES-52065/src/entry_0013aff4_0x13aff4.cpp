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

// Function: entry_0013aff4
// Address: 0x13aff4 - 0x13b010
void entry_0013aff4_0x13aff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aff4_0x13aff4");
#endif

    ctx->pc = 0x13aff4u;

    // 0x13aff4: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x13aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x13aff8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x13aff8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13affc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AFFCu;
    {
        const bool branch_taken_0x13affc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFFCu;
        // 0x13b000: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13affc) {
            ctx->pc = 0x13B010u;
            return;
        }
    }
    ctx->pc = 0x13B004u;
    // 0x13b004: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x13b004u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x13b008: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13B008u;
    {
        const bool branch_taken_0x13b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B008u;
        // 0x13b00c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b008) {
            ctx->pc = 0x13B020u;
            return;
        }
    }
    ctx->pc = 0x13B010u;
}
