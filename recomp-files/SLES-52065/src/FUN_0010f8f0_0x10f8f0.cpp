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

// Function: FUN_0010f8f0
// Address: 0x10f8f0 - 0x10f954
void FUN_0010f8f0_0x10f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f8f0_0x10f8f0");
#endif

    switch (ctx->pc) {
        case 0x10f8f0u: goto label_10f8f0;
        case 0x10f8f4u: goto label_10f8f4;
        case 0x10f8f8u: goto label_10f8f8;
        case 0x10f8fcu: goto label_10f8fc;
        case 0x10f900u: goto label_10f900;
        case 0x10f904u: goto label_10f904;
        case 0x10f908u: goto label_10f908;
        case 0x10f90cu: goto label_10f90c;
        case 0x10f910u: goto label_10f910;
        case 0x10f914u: goto label_10f914;
        case 0x10f918u: goto label_10f918;
        case 0x10f91cu: goto label_10f91c;
        case 0x10f920u: goto label_10f920;
        case 0x10f924u: goto label_10f924;
        case 0x10f928u: goto label_10f928;
        case 0x10f92cu: goto label_10f92c;
        case 0x10f930u: goto label_10f930;
        case 0x10f934u: goto label_10f934;
        case 0x10f938u: goto label_10f938;
        case 0x10f93cu: goto label_10f93c;
        case 0x10f940u: goto label_10f940;
        case 0x10f944u: goto label_10f944;
        case 0x10f948u: goto label_10f948;
        case 0x10f94cu: goto label_10f94c;
        case 0x10f950u: goto label_10f950;
        default: break;
    }

    ctx->pc = 0x10f8f0u;

label_10f8f0:
    // 0x10f8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10f8f4:
    // 0x10f8f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10f8f8:
    // 0x10f8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10f8fc:
    // 0x10f8fc: 0x90820220  lbu         $v0, 0x220($a0)
    ctx->pc = 0x10f8fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_10f900:
    // 0x10f900: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10f904:
    if (ctx->pc == 0x10F904u) {
        ctx->pc = 0x10F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F900u;
        // 0x10f904: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F908u;
        goto label_10f908;
    }
    ctx->pc = 0x10F900u;
    {
        const bool branch_taken_0x10f900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F900u;
        // 0x10f904: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f900) {
            ctx->pc = 0x10F910u;
            goto label_10f910;
        }
    }
    ctx->pc = 0x10F908u;
label_10f908:
    // 0x10f908: 0x1000000e  b           . + 4 + (0xE << 2)
label_10f90c:
    if (ctx->pc == 0x10F90Cu) {
        ctx->pc = 0x10F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F908u;
        // 0x10f90c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F910u;
        goto label_10f910;
    }
    ctx->pc = 0x10F908u;
    {
        const bool branch_taken_0x10f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F908u;
        // 0x10f90c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f908) {
            ctx->pc = 0x10F944u;
            goto label_10f944;
        }
    }
    ctx->pc = 0x10F910u;
label_10f910:
    // 0x10f910: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10f910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10f914:
    // 0x10f914: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10f914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10f918:
    // 0x10f918: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x10f918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_10f91c:
    // 0x10f91c: 0x320f809  jalr        $t9
label_10f920:
    if (ctx->pc == 0x10F920u) {
        ctx->pc = 0x10F924u;
        goto label_10f924;
    }
    ctx->pc = 0x10F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F924u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F91Cu, 0x10F924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F924u;
label_10f924:
    // 0x10f924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_10f928:
    if (ctx->pc == 0x10F928u) {
        ctx->pc = 0x10F92Cu;
        goto label_10f92c;
    }
    ctx->pc = 0x10F924u;
    {
        const bool branch_taken_0x10f924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f924) {
            ctx->pc = 0x10F940u;
            goto label_10f940;
        }
    }
    ctx->pc = 0x10F92Cu;
label_10f92c:
    // 0x10f92c: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x10f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_10f930:
    // 0x10f930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f934:
    // 0x10f934: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10f938:
    // 0x10f938: 0x10000002  b           . + 4 + (0x2 << 2)
label_10f93c:
    if (ctx->pc == 0x10F93Cu) {
        ctx->pc = 0x10F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F938u;
        // 0x10f93c: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F940u;
        goto label_10f940;
    }
    ctx->pc = 0x10F938u;
    {
        const bool branch_taken_0x10f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F938u;
        // 0x10f93c: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f938) {
            ctx->pc = 0x10F944u;
            goto label_10f944;
        }
    }
    ctx->pc = 0x10F940u;
label_10f940:
    // 0x10f940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f944:
    // 0x10f944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10f948:
    // 0x10f948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10f94c:
    // 0x10f94c: 0x3e00008  jr          $ra
label_10f950:
    if (ctx->pc == 0x10F950u) {
        ctx->pc = 0x10F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F94Cu;
        // 0x10f950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F954u;
        goto label_fallthrough_0x10f94c;
    }
    ctx->pc = 0x10F94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F94Cu;
        // 0x10f950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10f94c:
    ctx->pc = 0x10F954u;
}
