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

// Function: entry_00207140
// Address: 0x207140 - 0x20717c
void entry_00207140_0x207140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207140_0x207140");
#endif

    ctx->pc = 0x207140u;

    // 0x207140: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x207140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x207144: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x207144u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x207148: 0x24425a00  addiu       $v0, $v0, 0x5A00
    ctx->pc = 0x207148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23040));
    // 0x20714c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x20714cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x207150: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x207150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x207154: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x207154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207158: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x207158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20715c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x20715cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x207160: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x207160u;
    {
        const bool branch_taken_0x207160 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x207164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207160u;
        // 0x207164: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207160) {
            ctx->pc = 0x20717Cu;
            return;
        }
    }
    ctx->pc = 0x207168u;
    // 0x207168: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x207168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x20716c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x20716cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x207170: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x207170u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x207174: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x207174u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207178: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x207178u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    ctx->pc = 0x20717cu;
}
