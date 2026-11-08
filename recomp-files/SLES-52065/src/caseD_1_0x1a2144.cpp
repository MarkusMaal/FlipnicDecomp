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

// Function: caseD_1
// Address: 0x1a2144 - 0x1a2180
void caseD_1_0x1a2144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a2144");
#endif

    switch (ctx->pc) {
        case 0x1a2144u: goto label_1a2144;
        case 0x1a2148u: goto label_1a2148;
        case 0x1a214cu: goto label_1a214c;
        case 0x1a2150u: goto label_1a2150;
        case 0x1a2154u: goto label_1a2154;
        case 0x1a2158u: goto label_1a2158;
        case 0x1a215cu: goto label_1a215c;
        case 0x1a2160u: goto label_1a2160;
        case 0x1a2164u: goto label_1a2164;
        case 0x1a2168u: goto label_1a2168;
        case 0x1a216cu: goto label_1a216c;
        case 0x1a2170u: goto label_1a2170;
        case 0x1a2174u: goto label_1a2174;
        case 0x1a2178u: goto label_1a2178;
        case 0x1a217cu: goto label_1a217c;
        default: break;
    }

    ctx->pc = 0x1a2144u;

label_1a2144:
    // 0x1a2144: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
label_1a2148:
    if (ctx->pc == 0x1A2148u) {
        ctx->pc = 0x1A214Cu;
        goto label_1a214c;
    }
    ctx->pc = 0x1A2144u;
    {
        const bool branch_taken_0x1a2144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2144) {
            ctx->pc = 0x1A21CCu;
            return;
        }
    }
    ctx->pc = 0x1A214Cu;
label_1a214c:
    // 0x1a214c: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a2150:
    // 0x1a2150: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a2150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a2154:
    // 0x1a2154: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a2154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a2158:
    // 0x1a2158: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a2158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a215c:
    // 0x1a215c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a2160:
    // 0x1a2160: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a2164:
    // 0x1a2164: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a2168:
    // 0x1a2168: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a2168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a216c:
    // 0x1a216c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a216cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a2170:
    // 0x1a2170: 0x320f809  jalr        $t9
label_1a2174:
    if (ctx->pc == 0x1A2174u) {
        ctx->pc = 0x1A2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2170u;
        // 0x1a2174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2178u;
        goto label_1a2178;
    }
    ctx->pc = 0x1A2170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A2178u);
        ctx->pc = 0x1A2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2170u;
        // 0x1a2174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2170u, 0x1A2178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2178u;
label_1a2178:
    // 0x1a2178: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a217c:
    if (ctx->pc == 0x1A217Cu) {
        ctx->pc = 0x1A217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2178u;
        // 0x1a217c: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2180u;
        goto label_fallthrough_0x1a2178;
    }
    ctx->pc = 0x1A2178u;
    {
        const bool branch_taken_0x1a2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2178u;
        // 0x1a217c: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2178) {
            ctx->pc = 0x1A21CCu;
            return;
        }
    }
label_fallthrough_0x1a2178:
    ctx->pc = 0x1A2180u;
}
