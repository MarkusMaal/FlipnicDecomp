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

// Function: entry_0019ce40
// Address: 0x19ce40 - 0x19ce8c
void entry_0019ce40_0x19ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ce40_0x19ce40");
#endif

    ctx->pc = 0x19ce40u;

    // 0x19ce40: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x19ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x19ce44: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x19ce44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19ce48: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x19ce48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x19ce4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19ce50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ce54: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x19ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19ce58: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x19ce58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19ce5c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x19ce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19ce60: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x19ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x19ce64: 0x8cd00004  lw          $s0, 0x4($a2)
    ctx->pc = 0x19ce64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x19ce68: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x19CE68u;
    {
        const bool branch_taken_0x19ce68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE68u;
        // 0x19ce6c: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce68) {
            ctx->pc = 0x19CF18u;
            return;
        }
    }
    ctx->pc = 0x19CE70u;
    // 0x19ce70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ce74: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CE74u;
    {
        const bool branch_taken_0x19ce74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ce74) {
            ctx->pc = 0x19CE8Cu;
            return;
        }
    }
    ctx->pc = 0x19CE7Cu;
    // 0x19ce7c: 0x10800084  beqz        $a0, . + 4 + (0x84 << 2)
    ctx->pc = 0x19CE7Cu;
    {
        const bool branch_taken_0x19ce7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce7c) {
            ctx->pc = 0x19D090u;
            return;
        }
    }
    ctx->pc = 0x19CE84u;
    // 0x19ce84: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x19CE84u;
    {
        const bool branch_taken_0x19ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce84) {
            ctx->pc = 0x19D090u;
            return;
        }
    }
    ctx->pc = 0x19CE8Cu;
}
