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

// Function: entry_00149fdc
// Address: 0x149fdc - 0x14a024
void entry_00149fdc_0x149fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149fdc_0x149fdc");
#endif

    ctx->pc = 0x149fdcu;

    // 0x149fdc: 0x0  nop
    ctx->pc = 0x149fdcu;
    // NOP
    // 0x149fe0: 0x8fa204b4  lw          $v0, 0x4B4($sp)
    ctx->pc = 0x149fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x149fe4: 0x27b604b0  addiu       $s6, $sp, 0x4B0
    ctx->pc = 0x149fe4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x149fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149fec: 0xafa204b4  sw          $v0, 0x4B4($sp)
    ctx->pc = 0x149fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 2));
    // 0x149ff0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x149ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149ff4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x149ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x149ff8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x149ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x149ffc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x149ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a000: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A000u;
    {
        const bool branch_taken_0x14a000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A000u;
        // 0x14a004: 0x27b204a8  addiu       $s2, $sp, 0x4A8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a000) {
            ctx->pc = 0x14A044u;
            return;
        }
    }
    ctx->pc = 0x14A008u;
    // 0x14a008: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a00c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a010: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a014: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A014u;
    {
        const bool branch_taken_0x14a014 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A014u;
        // 0x14a018: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a014) {
            ctx->pc = 0x14A024u;
            return;
        }
    }
    ctx->pc = 0x14A01Cu;
    // 0x14a01c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14a020: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14a020u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14a024u;
}
