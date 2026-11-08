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

// Function: entry_001fffc8
// Address: 0x1fffc8 - 0x1fffec
void entry_001fffc8_0x1fffc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fffc8_0x1fffc8");
#endif

    ctx->pc = 0x1fffc8u;

label_1fffc8:
    // 0x1fffc8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1fffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1fffcc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1fffccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1fffd0: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x1fffd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fffd4: 0x0  nop
    ctx->pc = 0x1fffd4u;
    // NOP
    // 0x1fffd8: 0x0  nop
    ctx->pc = 0x1fffd8u;
    // NOP
    // 0x1fffdc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFFDCu;
    {
        const bool branch_taken_0x1fffdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fffdc) {
            ctx->pc = 0x1FFFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fffc8;
        }
    }
    ctx->pc = 0x1FFFE4u;
    // 0x1fffe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFFE4u;
    {
        const bool branch_taken_0x1fffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFE4u;
        // 0x1fffe8: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffe4) {
            ctx->pc = 0x200000u;
            return;
        }
    }
    ctx->pc = 0x1FFFECu;
}
