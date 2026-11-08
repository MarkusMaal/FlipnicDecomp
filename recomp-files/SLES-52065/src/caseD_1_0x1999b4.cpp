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
// Address: 0x1999b4 - 0x1999fc
void caseD_1_0x1999b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1999b4");
#endif

    switch (ctx->pc) {
        case 0x1999b4u: goto label_1999b4;
        case 0x1999b8u: goto label_1999b8;
        case 0x1999bcu: goto label_1999bc;
        case 0x1999c0u: goto label_1999c0;
        case 0x1999c4u: goto label_1999c4;
        case 0x1999c8u: goto label_1999c8;
        case 0x1999ccu: goto label_1999cc;
        case 0x1999d0u: goto label_1999d0;
        case 0x1999d4u: goto label_1999d4;
        case 0x1999d8u: goto label_1999d8;
        case 0x1999dcu: goto label_1999dc;
        case 0x1999e0u: goto label_1999e0;
        case 0x1999e4u: goto label_1999e4;
        case 0x1999e8u: goto label_1999e8;
        case 0x1999ecu: goto label_1999ec;
        case 0x1999f0u: goto label_1999f0;
        case 0x1999f4u: goto label_1999f4;
        case 0x1999f8u: goto label_1999f8;
        default: break;
    }

    ctx->pc = 0x1999b4u;

label_1999b4:
    // 0x1999b4: 0x0  nop
    ctx->pc = 0x1999b4u;
    // NOP
label_1999b8:
    // 0x1999b8: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x1999b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1999bc:
    // 0x1999bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1999bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1999c0:
    // 0x1999c0: 0xc064c20  jal         func_193080
label_1999c4:
    if (ctx->pc == 0x1999C4u) {
        ctx->pc = 0x1999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999C0u;
        // 0x1999c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999C8u;
        goto label_1999c8;
    }
    ctx->pc = 0x1999C0u;
    SET_GPR_U32(ctx, 31, 0x1999C8u);
    ctx->pc = 0x1999C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999C0u;
    // 0x1999c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x1999C0u, 0x1999C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999C8u;
label_1999c8:
    // 0x1999c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1999c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1999cc:
    // 0x1999cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1999ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1999d0:
    // 0x1999d0: 0xc064c4c  jal         func_193130
label_1999d4:
    if (ctx->pc == 0x1999D4u) {
        ctx->pc = 0x1999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999D0u;
        // 0x1999d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999D8u;
        goto label_1999d8;
    }
    ctx->pc = 0x1999D0u;
    SET_GPR_U32(ctx, 31, 0x1999D8u);
    ctx->pc = 0x1999D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999D0u;
    // 0x1999d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x1999D0u, 0x1999D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999D8u;
label_1999d8:
    // 0x1999d8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1999d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1999dc:
    // 0x1999dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1999dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1999e0:
    // 0x1999e0: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1999e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1999e4:
    // 0x1999e4: 0x320f809  jalr        $t9
label_1999e8:
    if (ctx->pc == 0x1999E8u) {
        ctx->pc = 0x1999E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999E4u;
        // 0x1999e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999ECu;
        goto label_1999ec;
    }
    ctx->pc = 0x1999E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1999ECu);
        ctx->pc = 0x1999E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999E4u;
        // 0x1999e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1999E4u, 0x1999ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1999ECu;
label_1999ec:
    // 0x1999ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1999ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1999f0:
    // 0x1999f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1999f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1999f4:
    // 0x1999f4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1999f8:
    if (ctx->pc == 0x1999F8u) {
        ctx->pc = 0x1999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999F4u;
        // 0x1999f8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999FCu;
        goto label_fallthrough_0x1999f4;
    }
    ctx->pc = 0x1999F4u;
    {
        const bool branch_taken_0x1999f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999F4u;
        // 0x1999f8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999f4) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
label_fallthrough_0x1999f4:
    ctx->pc = 0x1999FCu;
}
