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

// Function: entry_00112814
// Address: 0x112814 - 0x11285c
void entry_00112814_0x112814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112814_0x112814");
#endif

    switch (ctx->pc) {
        case 0x11281cu: goto label_11281c;
        case 0x112854u: goto label_112854;
        default: break;
    }

    ctx->pc = 0x112814u;

    // 0x112814: 0xc044254  jal         func_110950
    ctx->pc = 0x112814u;
    SET_GPR_U32(ctx, 31, 0x11281Cu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x112814u, 0x11281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11281Cu;
label_11281c:
    // 0x11281c: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x11281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x112820: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x112820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112824: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x112824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x112828: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x112828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11282c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11282cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112830: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x112830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112834: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112838: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x112838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11283c: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x11283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x112840: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x112840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x112844: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112844u;
    {
        const bool branch_taken_0x112844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112844u;
        // 0x112848: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112844) {
            ctx->pc = 0x11285Cu;
            return;
        }
    }
    ctx->pc = 0x11284Cu;
    // 0x11284c: 0xc042118  jal         func_108460
    ctx->pc = 0x11284Cu;
    SET_GPR_U32(ctx, 31, 0x112854u);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x11284Cu, 0x112854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112854u;
label_112854:
    // 0x112854: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112854u;
    {
        const bool branch_taken_0x112854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112854) {
            ctx->pc = 0x112878u;
            return;
        }
    }
    ctx->pc = 0x11285Cu;
}
