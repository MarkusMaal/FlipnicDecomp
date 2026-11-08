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

// Function: entry_00115148
// Address: 0x115148 - 0x115194
void entry_00115148_0x115148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115148_0x115148");
#endif

    ctx->pc = 0x115148u;

    // 0x115148: 0x92470255  lbu         $a3, 0x255($s2)
    ctx->pc = 0x115148u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x11514c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x11514cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x115150: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x115150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x115154: 0x64060002  daddiu      $a2, $zero, 0x2
    ctx->pc = 0x115154u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x115158: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x115158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11515c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x11515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x115160: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115164: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x115164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x115168: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x115168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x11516c: 0xa2450255  sb          $a1, 0x255($s2)
    ctx->pc = 0x11516cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 5));
    // 0x115170: 0x92450255  lbu         $a1, 0x255($s2)
    ctx->pc = 0x115170u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x115174: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x115174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x115178: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x115178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11517c: 0xa2430255  sb          $v1, 0x255($s2)
    ctx->pc = 0x11517cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 3));
    // 0x115180: 0xae42026c  sw          $v0, 0x26C($s2)
    ctx->pc = 0x115180u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 2));
    // 0x115184: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x115184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x115188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11518c: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x11518Cu;
    {
        const bool branch_taken_0x11518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11518Cu;
        // 0x115190: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11518c) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x115194u;
}
