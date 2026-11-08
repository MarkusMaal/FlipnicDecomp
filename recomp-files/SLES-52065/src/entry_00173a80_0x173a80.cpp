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

// Function: entry_00173a80
// Address: 0x173a80 - 0x173ab8
void entry_00173a80_0x173a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173a80_0x173a80");
#endif

    ctx->pc = 0x173a80u;

    // 0x173a80: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x173a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x173a84: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x173a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x173a88: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x173a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x173a8c: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x173a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x173a90: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x173a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x173a94: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x173a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x173a98: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x173a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x173a9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173A9Cu;
    {
        const bool branch_taken_0x173a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A9Cu;
        // 0x173aa0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a9c) {
            ctx->pc = 0x173AB8u;
            return;
        }
    }
    ctx->pc = 0x173AA4u;
    // 0x173aa4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x173aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x173aa8: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x173aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x173aac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x173aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x173ab0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x173ab0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173ab4: 0x0  nop
    ctx->pc = 0x173ab4u;
    // NOP
    ctx->pc = 0x173ab8u;
}
