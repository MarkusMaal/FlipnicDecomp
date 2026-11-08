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

// Function: entry_001f27d8
// Address: 0x1f27d8 - 0x1f2808
void entry_001f27d8_0x1f27d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f27d8_0x1f27d8");
#endif

    ctx->pc = 0x1f27d8u;

label_1f27d8:
    // 0x1f27d8: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x1f27d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x1f27dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F27DCu;
    {
        const bool branch_taken_0x1f27dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27DCu;
        // 0x1f27e0: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27dc) {
            ctx->pc = 0x1F2810u;
            return;
        }
    }
    ctx->pc = 0x1F27E4u;
    // 0x1f27e4: 0x24e3fa80  addiu       $v1, $a3, -0x580
    ctx->pc = 0x1f27e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965888));
    // 0x1f27e8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1f27e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f27ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1f27f0: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x1f27f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f27f4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1f27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1f27f8: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F27F8u;
    {
        const bool branch_taken_0x1f27f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f27f8) {
            ctx->pc = 0x1F27FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F27F8u;
            // 0x1f27fc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F27D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f27d8;
        }
    }
    ctx->pc = 0x1F2800u;
    // 0x1f2800: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2800u;
    {
        const bool branch_taken_0x1f2800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2800u;
        // 0x1f2804: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2800) {
            ctx->pc = 0x1F2814u;
            return;
        }
    }
    ctx->pc = 0x1F2808u;
}
