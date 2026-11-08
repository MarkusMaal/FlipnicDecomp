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

// Function: entry_00142dac
// Address: 0x142dac - 0x142de0
void entry_00142dac_0x142dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142dac_0x142dac");
#endif

    ctx->pc = 0x142dacu;

    // 0x142dac: 0x0  nop
    ctx->pc = 0x142dacu;
    // NOP
    // 0x142db0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142db4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x142db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x142db8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x142DB8u;
    {
        const bool branch_taken_0x142db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142db8) {
            ctx->pc = 0x142E2Cu;
            return;
        }
    }
    ctx->pc = 0x142DC0u;
    // 0x142dc0: 0x8c770028  lw          $s7, 0x28($v1)
    ctx->pc = 0x142dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x142dc4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x142dc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142dc8: 0x8e540014  lw          $s4, 0x14($s2)
    ctx->pc = 0x142dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x142dcc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x142dccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142dd0: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x142dd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x142dd4: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x142DD4u;
    {
        const bool branch_taken_0x142dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DD4u;
        // 0x142dd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142dd4) {
            ctx->pc = 0x142E2Cu;
            return;
        }
    }
    ctx->pc = 0x142DDCu;
    // 0x142ddc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x142ddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142de0u;
}
