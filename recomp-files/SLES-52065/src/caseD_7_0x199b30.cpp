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

// Function: caseD_7
// Address: 0x199b30 - 0x199b6c
void caseD_7_0x199b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x199b30");
#endif

    switch (ctx->pc) {
        case 0x199b30u: goto label_199b30;
        case 0x199b34u: goto label_199b34;
        case 0x199b38u: goto label_199b38;
        case 0x199b3cu: goto label_199b3c;
        case 0x199b40u: goto label_199b40;
        case 0x199b44u: goto label_199b44;
        case 0x199b48u: goto label_199b48;
        case 0x199b4cu: goto label_199b4c;
        case 0x199b50u: goto label_199b50;
        case 0x199b54u: goto label_199b54;
        case 0x199b58u: goto label_199b58;
        case 0x199b5cu: goto label_199b5c;
        case 0x199b60u: goto label_199b60;
        case 0x199b64u: goto label_199b64;
        case 0x199b68u: goto label_199b68;
        default: break;
    }

    ctx->pc = 0x199b30u;

label_199b30:
    // 0x199b30: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199b34:
    // 0x199b34: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x199b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_199b38:
    // 0x199b38: 0x320f809  jalr        $t9
label_199b3c:
    if (ctx->pc == 0x199B3Cu) {
        ctx->pc = 0x199B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B38u;
        // 0x199b3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B40u;
        goto label_199b40;
    }
    ctx->pc = 0x199B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199B40u);
        ctx->pc = 0x199B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B38u;
        // 0x199b3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B38u, 0x199B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199B40u;
label_199b40:
    // 0x199b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199b44:
    // 0x199b44: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_199b48:
    if (ctx->pc == 0x199B48u) {
        ctx->pc = 0x199B4Cu;
        goto label_199b4c;
    }
    ctx->pc = 0x199B44u;
    {
        const bool branch_taken_0x199b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199b44) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
    ctx->pc = 0x199B4Cu;
label_199b4c:
    // 0x199b4c: 0x8e460038  lw          $a2, 0x38($s2)
    ctx->pc = 0x199b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_199b50:
    // 0x199b50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199b54:
    // 0x199b54: 0xc064c20  jal         func_193080
label_199b58:
    if (ctx->pc == 0x199B58u) {
        ctx->pc = 0x199B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B54u;
        // 0x199b58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B5Cu;
        goto label_199b5c;
    }
    ctx->pc = 0x199B54u;
    SET_GPR_U32(ctx, 31, 0x199B5Cu);
    ctx->pc = 0x199B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B54u;
    // 0x199b58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x199B54u, 0x199B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B5Cu;
label_199b5c:
    // 0x199b5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199b60:
    // 0x199b60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199b64:
    // 0x199b64: 0x10000010  b           . + 4 + (0x10 << 2)
label_199b68:
    if (ctx->pc == 0x199B68u) {
        ctx->pc = 0x199B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B64u;
        // 0x199b68: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B6Cu;
        goto label_fallthrough_0x199b64;
    }
    ctx->pc = 0x199B64u;
    {
        const bool branch_taken_0x199b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B64u;
        // 0x199b68: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b64) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
label_fallthrough_0x199b64:
    ctx->pc = 0x199B6Cu;
}
