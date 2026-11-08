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

// Function: entry_00112c60
// Address: 0x112c60 - 0x112ca8
void entry_00112c60_0x112c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112c60_0x112c60");
#endif

    switch (ctx->pc) {
        case 0x112ca0u: goto label_112ca0;
        default: break;
    }

    ctx->pc = 0x112c60u;

    // 0x112c60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x112c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112c64: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x112c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112c68: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x112c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x112c6c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x112c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112c70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x112c74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x112c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112c78: 0x8c722cd8  lw          $s2, 0x2CD8($v1)
    ctx->pc = 0x112c78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x112c7c: 0x92430220  lbu         $v1, 0x220($s2)
    ctx->pc = 0x112c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x112c80: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x112C80u;
    {
        const bool branch_taken_0x112c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x112c80) {
            ctx->pc = 0x112CBCu;
            return;
        }
    }
    ctx->pc = 0x112C88u;
    // 0x112c88: 0xa2400220  sb          $zero, 0x220($s2)
    ctx->pc = 0x112c88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x112c8c: 0x92420220  lbu         $v0, 0x220($s2)
    ctx->pc = 0x112c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x112c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112C90u;
    {
        const bool branch_taken_0x112c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C90u;
        // 0x112c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c90) {
            ctx->pc = 0x112CA8u;
            return;
        }
    }
    ctx->pc = 0x112C98u;
    // 0x112c98: 0xc042570  jal         func_1095C0
    ctx->pc = 0x112C98u;
    SET_GPR_U32(ctx, 31, 0x112CA0u);
    ctx->pc = 0x112C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C98u;
    // 0x112c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x112C98u, 0x112CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CA0u;
label_112ca0:
    // 0x112ca0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112CA0u;
    {
        const bool branch_taken_0x112ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CA0u;
        // 0x112ca4: 0xa24001d3  sb          $zero, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ca0) {
            ctx->pc = 0x112CBCu;
            return;
        }
    }
    ctx->pc = 0x112CA8u;
}
