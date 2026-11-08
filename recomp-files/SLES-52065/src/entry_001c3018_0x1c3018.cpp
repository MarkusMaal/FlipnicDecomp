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

// Function: entry_001c3018
// Address: 0x1c3018 - 0x1c304c
void entry_001c3018_0x1c3018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3018_0x1c3018");
#endif

    ctx->pc = 0x1c3018u;

    // 0x1c3018: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1c3018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1c301c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3020: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1c3020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1c3024: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1c3024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1c3028: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C3028u;
    {
        const bool branch_taken_0x1c3028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3028u;
        // 0x1c302c: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3028) {
            ctx->pc = 0x1C30A4u;
            return;
        }
    }
    ctx->pc = 0x1C3030u;
    // 0x1c3030: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3030u;
    {
        const bool branch_taken_0x1c3030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3030u;
        // 0x1c3034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3030) {
            ctx->pc = 0x1C3078u;
            return;
        }
    }
    ctx->pc = 0x1C3038u;
    // 0x1c3038: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c3038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c303c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C303Cu;
    {
        const bool branch_taken_0x1c303c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C303Cu;
        // 0x1c3040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c303c) {
            ctx->pc = 0x1C304Cu;
            return;
        }
    }
    ctx->pc = 0x1C3044u;
    // 0x1c3044: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C3044u;
    {
        const bool branch_taken_0x1c3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3044u;
        // 0x1c3048: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3044) {
            ctx->pc = 0x1C30ACu;
            return;
        }
    }
    ctx->pc = 0x1C304Cu;
}
