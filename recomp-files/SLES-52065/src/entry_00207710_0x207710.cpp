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

// Function: entry_00207710
// Address: 0x207710 - 0x20774c
void entry_00207710_0x207710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207710_0x207710");
#endif

    ctx->pc = 0x207710u;

    // 0x207710: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x207710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x207714: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x207714u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x207718: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x20771c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x20771cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x207720: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x207720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x207724: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x207724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207728: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x207728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20772c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x20772cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x207730: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x207730u;
    {
        const bool branch_taken_0x207730 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x207734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207730u;
        // 0x207734: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207730) {
            ctx->pc = 0x20774Cu;
            return;
        }
    }
    ctx->pc = 0x207738u;
    // 0x207738: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x207738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x20773c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x20773cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x207740: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x207740u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x207744: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x207744u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207748: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x207748u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    ctx->pc = 0x20774cu;
}
