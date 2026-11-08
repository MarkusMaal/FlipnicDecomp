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

// Function: entry_002031e8
// Address: 0x2031e8 - 0x20321c
void entry_002031e8_0x2031e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002031e8_0x2031e8");
#endif

    ctx->pc = 0x2031e8u;

label_2031e8:
    // 0x2031e8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2031e8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2031ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2031ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2031f0: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2031f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2031f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2031f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2031f8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2031f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2031fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2031FCu;
    {
        const bool branch_taken_0x2031fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2031fc) {
            ctx->pc = 0x2031E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2031e8;
        }
    }
    ctx->pc = 0x203204u;
    // 0x203204: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x203204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x203208: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203208u;
    {
        const bool branch_taken_0x203208 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203208u;
        // 0x20320c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203208) {
            ctx->pc = 0x20321Cu;
            return;
        }
    }
    ctx->pc = 0x203210u;
    // 0x203210: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x203214: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x203214u;
    {
        const bool branch_taken_0x203214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203214u;
        // 0x203218: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203214) {
            ctx->pc = 0x203228u;
            return;
        }
    }
    ctx->pc = 0x20321Cu;
}
