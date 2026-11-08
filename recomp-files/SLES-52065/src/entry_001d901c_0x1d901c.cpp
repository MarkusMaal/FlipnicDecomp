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

// Function: entry_001d901c
// Address: 0x1d901c - 0x1d9058
void entry_001d901c_0x1d901c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d901c_0x1d901c");
#endif

    ctx->pc = 0x1d901cu;

    // 0x1d901c: 0x29020020  slti        $v0, $t0, 0x20
    ctx->pc = 0x1d901cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9020: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D9020u;
    {
        const bool branch_taken_0x1d9020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9020u;
        // 0x1d9024: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9020) {
            ctx->pc = 0x1D8FE0u;
            return;
        }
    }
    ctx->pc = 0x1D9028u;
    // 0x1d9028: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x1d9028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1d902c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D902Cu;
    {
        const bool branch_taken_0x1d902c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d902c) {
            ctx->pc = 0x1D9030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D902Cu;
            // 0x1d9030: 0xdfb00190  ld          $s0, 0x190($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D90B4u;
            return;
        }
    }
    ctx->pc = 0x1D9034u;
    // 0x1d9034: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9038: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d903c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d9040: 0x10a202b  sltu        $a0, $t0, $t2
    ctx->pc = 0x1d9040u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1d9044: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1d9044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1d9048: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D9048u;
    {
        const bool branch_taken_0x1d9048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9048u;
        // 0x1d904c: 0xafa30184  sw          $v1, 0x184($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9048) {
            ctx->pc = 0x1D9088u;
            return;
        }
    }
    ctx->pc = 0x1D9050u;
    // 0x1d9050: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1d9050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1d9054: 0x0  nop
    ctx->pc = 0x1d9054u;
    // NOP
    ctx->pc = 0x1d9058u;
}
