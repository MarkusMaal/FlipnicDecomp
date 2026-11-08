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

// Function: caseD_0
// Address: 0x112ce0 - 0x112d24
void caseD_0_0x112ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x112ce0");
#endif

    switch (ctx->pc) {
        case 0x112ce0u: goto label_112ce0;
        case 0x112ce4u: goto label_112ce4;
        case 0x112ce8u: goto label_112ce8;
        case 0x112cecu: goto label_112cec;
        case 0x112cf0u: goto label_112cf0;
        case 0x112cf4u: goto label_112cf4;
        case 0x112cf8u: goto label_112cf8;
        case 0x112cfcu: goto label_112cfc;
        case 0x112d00u: goto label_112d00;
        case 0x112d04u: goto label_112d04;
        case 0x112d08u: goto label_112d08;
        case 0x112d0cu: goto label_112d0c;
        case 0x112d10u: goto label_112d10;
        case 0x112d14u: goto label_112d14;
        case 0x112d18u: goto label_112d18;
        case 0x112d1cu: goto label_112d1c;
        case 0x112d20u: goto label_112d20;
        default: break;
    }

    ctx->pc = 0x112ce0u;

label_112ce0:
    // 0x112ce0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x112ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_112ce4:
    // 0x112ce4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_112ce8:
    if (ctx->pc == 0x112CE8u) {
        ctx->pc = 0x112CECu;
        goto label_112cec;
    }
    ctx->pc = 0x112CE4u;
    {
        const bool branch_taken_0x112ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112ce4) {
            ctx->pc = 0x112D2Cu;
            return;
        }
    }
    ctx->pc = 0x112CECu;
label_112cec:
    // 0x112cec: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x112cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_112cf0:
    // 0x112cf0: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x112cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_112cf4:
    // 0x112cf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x112cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_112cf8:
    // 0x112cf8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x112cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_112cfc:
    // 0x112cfc: 0x320f809  jalr        $t9
label_112d00:
    if (ctx->pc == 0x112D00u) {
        ctx->pc = 0x112D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CFCu;
        // 0x112d00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D04u;
        goto label_112d04;
    }
    ctx->pc = 0x112CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x112D04u);
        ctx->pc = 0x112D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CFCu;
        // 0x112d00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112CFCu, 0x112D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112D04u;
label_112d04:
    // 0x112d04: 0x92230043  lbu         $v1, 0x43($s1)
    ctx->pc = 0x112d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
label_112d08:
    // 0x112d08: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_112d0c:
    if (ctx->pc == 0x112D0Cu) {
        ctx->pc = 0x112D10u;
        goto label_112d10;
    }
    ctx->pc = 0x112D08u;
    {
        const bool branch_taken_0x112d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x112d08) {
            ctx->pc = 0x112D24u;
            return;
        }
    }
    ctx->pc = 0x112D10u;
label_112d10:
    // 0x112d10: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x112d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_112d14:
    // 0x112d14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x112d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_112d18:
    // 0x112d18: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x112d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_112d1c:
    // 0x112d1c: 0x320f809  jalr        $t9
label_112d20:
    if (ctx->pc == 0x112D20u) {
        ctx->pc = 0x112D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D1Cu;
        // 0x112d20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D24u;
        goto label_fallthrough_0x112d1c;
    }
    ctx->pc = 0x112D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x112D24u);
        ctx->pc = 0x112D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D1Cu;
        // 0x112d20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112D1Cu, 0x112D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x112d1c:
    ctx->pc = 0x112D24u;
}
