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

// Function: entry_00143fdc
// Address: 0x143fdc - 0x144008
void entry_00143fdc_0x143fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143fdc_0x143fdc");
#endif

    ctx->pc = 0x143fdcu;

    // 0x143fdc: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x143fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x143fe0: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x143fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x143fe4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x143fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x143fe8: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x143fe8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x143fec: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x143fecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x143ff0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x143ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143ff4: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x143ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143ff8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143FF8u;
    {
        const bool branch_taken_0x143ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FF8u;
        // 0x143ffc: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ff8) {
            ctx->pc = 0x144008u;
            return;
        }
    }
    ctx->pc = 0x144000u;
    // 0x144000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x144000u;
    {
        const bool branch_taken_0x144000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144000u;
        // 0x144004: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144000) {
            ctx->pc = 0x144010u;
            return;
        }
    }
    ctx->pc = 0x144008u;
}
