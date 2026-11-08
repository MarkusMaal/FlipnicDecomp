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

// Function: entry_00112418
// Address: 0x112418 - 0x11243c
void entry_00112418_0x112418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112418_0x112418");
#endif

    ctx->pc = 0x112418u;

    // 0x112418: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x112418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x11241c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x11241cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112420: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x112420u;
    {
        const bool branch_taken_0x112420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112420) {
            ctx->pc = 0x1123E8u;
            return;
        }
    }
    ctx->pc = 0x112428u;
    // 0x112428: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x112428u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11242c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x11242cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x112430: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x112430u;
    {
        const bool branch_taken_0x112430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112430u;
        // 0x112434: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112430) {
            ctx->pc = 0x112480u;
            return;
        }
    }
    ctx->pc = 0x112438u;
    // 0x112438: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x112438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11243cu;
}
