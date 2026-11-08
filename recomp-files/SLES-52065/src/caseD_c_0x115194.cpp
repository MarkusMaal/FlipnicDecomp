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

// Function: caseD_c
// Address: 0x115194 - 0x1151d8
void caseD_c_0x115194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x115194");
#endif

    switch (ctx->pc) {
        case 0x115194u: goto label_115194;
        case 0x115198u: goto label_115198;
        case 0x11519cu: goto label_11519c;
        case 0x1151a0u: goto label_1151a0;
        case 0x1151a4u: goto label_1151a4;
        case 0x1151a8u: goto label_1151a8;
        case 0x1151acu: goto label_1151ac;
        case 0x1151b0u: goto label_1151b0;
        case 0x1151b4u: goto label_1151b4;
        case 0x1151b8u: goto label_1151b8;
        case 0x1151bcu: goto label_1151bc;
        case 0x1151c0u: goto label_1151c0;
        case 0x1151c4u: goto label_1151c4;
        case 0x1151c8u: goto label_1151c8;
        case 0x1151ccu: goto label_1151cc;
        case 0x1151d0u: goto label_1151d0;
        case 0x1151d4u: goto label_1151d4;
        default: break;
    }

    ctx->pc = 0x115194u;

label_115194:
    // 0x115194: 0x938282b4  lbu         $v0, -0x7D4C($gp)
    ctx->pc = 0x115194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_115198:
    // 0x115198: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x115198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_11519c:
    // 0x11519c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x11519cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1151a0:
    // 0x1151a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1151a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1151a4:
    // 0x1151a4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1151a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1151a8:
    // 0x1151a8: 0x320f809  jalr        $t9
label_1151ac:
    if (ctx->pc == 0x1151ACu) {
        ctx->pc = 0x1151ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A8u;
        // 0x1151ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1151B0u;
        goto label_1151b0;
    }
    ctx->pc = 0x1151A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1151B0u);
        ctx->pc = 0x1151ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A8u;
        // 0x1151ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1151A8u, 0x1151B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1151B0u;
label_1151b0:
    // 0x1151b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1151b4:
    if (ctx->pc == 0x1151B4u) {
        ctx->pc = 0x1151B8u;
        goto label_1151b8;
    }
    ctx->pc = 0x1151B0u;
    {
        const bool branch_taken_0x1151b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1151b0) {
            ctx->pc = 0x1151D8u;
            return;
        }
    }
    ctx->pc = 0x1151B8u;
label_1151b8:
    // 0x1151b8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1151b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1151bc:
    // 0x1151bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1151bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1151c0:
    // 0x1151c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1151c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1151c4:
    // 0x1151c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1151c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1151c8:
    // 0x1151c8: 0x320f809  jalr        $t9
label_1151cc:
    if (ctx->pc == 0x1151CCu) {
        ctx->pc = 0x1151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151C8u;
        // 0x1151cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1151D0u;
        goto label_1151d0;
    }
    ctx->pc = 0x1151C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1151D0u);
        ctx->pc = 0x1151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151C8u;
        // 0x1151cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1151C8u, 0x1151D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1151D0u;
label_1151d0:
    // 0x1151d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1151d4:
    if (ctx->pc == 0x1151D4u) {
        ctx->pc = 0x1151D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D0u;
        // 0x1151d4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1151D8u;
        goto label_fallthrough_0x1151d0;
    }
    ctx->pc = 0x1151D0u;
    {
        const bool branch_taken_0x1151d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D0u;
        // 0x1151d4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151d0) {
            ctx->pc = 0x1151DCu;
            return;
        }
    }
label_fallthrough_0x1151d0:
    ctx->pc = 0x1151D8u;
}
