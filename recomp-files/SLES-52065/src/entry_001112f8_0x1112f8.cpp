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

// Function: entry_001112f8
// Address: 0x1112f8 - 0x111330
void entry_001112f8_0x1112f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001112f8_0x1112f8");
#endif

    ctx->pc = 0x1112f8u;

    // 0x1112f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1112f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1112fc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1112fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x111300: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x111300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111308: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x111308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11130c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x11130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111310: 0x90440224  lbu         $a0, 0x224($v0)
    ctx->pc = 0x111310u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x111314: 0x416bc  dsll32      $v0, $a0, 26
    ctx->pc = 0x111314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 26));
    // 0x111318: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x11131c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11131Cu;
    {
        const bool branch_taken_0x11131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11131Cu;
        // 0x111320: 0x30820007  andi        $v0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11131c) {
            ctx->pc = 0x111330u;
            return;
        }
    }
    ctx->pc = 0x111324u;
    // 0x111324: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x111324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x111328: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x111328u;
    {
        const bool branch_taken_0x111328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111328u;
        // 0x11132c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111328) {
            ctx->pc = 0x111344u;
            return;
        }
    }
    ctx->pc = 0x111330u;
}
