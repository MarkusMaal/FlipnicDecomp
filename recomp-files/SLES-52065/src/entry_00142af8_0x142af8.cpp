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

// Function: entry_00142af8
// Address: 0x142af8 - 0x142b28
void entry_00142af8_0x142af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142af8_0x142af8");
#endif

    ctx->pc = 0x142af8u;

    // 0x142af8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142afc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x142afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x142b00: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x142B00u;
    {
        const bool branch_taken_0x142b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142b00) {
            ctx->pc = 0x142B74u;
            return;
        }
    }
    ctx->pc = 0x142B08u;
    // 0x142b08: 0x8c770028  lw          $s7, 0x28($v1)
    ctx->pc = 0x142b08u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x142b0c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x142b0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b10: 0x8e540014  lw          $s4, 0x14($s2)
    ctx->pc = 0x142b10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x142b14: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x142b14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b18: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x142b18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x142b1c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x142B1Cu;
    {
        const bool branch_taken_0x142b1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B1Cu;
        // 0x142b20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b1c) {
            ctx->pc = 0x142B74u;
            return;
        }
    }
    ctx->pc = 0x142B24u;
    // 0x142b24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x142b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142b28u;
}
