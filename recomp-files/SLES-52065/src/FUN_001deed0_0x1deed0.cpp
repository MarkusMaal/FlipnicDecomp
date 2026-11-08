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

// Function: FUN_001deed0
// Address: 0x1deed0 - 0x1def98
void FUN_001deed0_0x1deed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001deed0_0x1deed0");
#endif

    switch (ctx->pc) {
        case 0x1def18u: goto label_1def18;
        case 0x1def20u: goto label_1def20;
        case 0x1def30u: goto label_1def30;
        case 0x1def5cu: goto label_1def5c;
        case 0x1def68u: goto label_1def68;
        default: break;
    }

    ctx->pc = 0x1deed0u;

    // 0x1deed0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1deed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1deed4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1deed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1deed8: 0x90433810  lbu         $v1, 0x3810($v0)
    ctx->pc = 0x1deed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x223810u));
    // 0x1deedc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1deedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1deee0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1deee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deee4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1deee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1deee8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1deee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deeec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1deeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1deef0: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x1deef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1deef4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1deef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1deef8: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1deef8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1deefc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1deefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1def00: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1def00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1def04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1def04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1def08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1def08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1def0c: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x1def0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1def10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1def10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def14: 0x0  nop
    ctx->pc = 0x1def14u;
    // NOP
label_1def18:
    // 0x1def18: 0xc076352  jal         func_1D8D48
    ctx->pc = 0x1DEF18u;
    SET_GPR_U32(ctx, 31, 0x1DEF20u);
    ctx->pc = 0x1DEF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF18u;
    // 0x1def1c: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8D48u, 0x1DEF18u, 0x1DEF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF20u;
label_1def20:
    // 0x1def20: 0x26a53818  addiu       $a1, $s5, 0x3818
    ctx->pc = 0x1def20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 14360));
    // 0x1def24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1def24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def28: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1DEF28u;
    SET_GPR_U32(ctx, 31, 0x1DEF30u);
    ctx->pc = 0x1DEF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF28u;
    // 0x1def2c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1DEF28u, 0x1DEF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF30u;
label_1def30:
    // 0x1def30: 0x26853820  addiu       $a1, $s4, 0x3820
    ctx->pc = 0x1def30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 14368));
    // 0x1def34: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x1def34u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1def38: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1def38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1def3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def40: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DEF40u;
    {
        const bool branch_taken_0x1def40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1def40) {
            ctx->pc = 0x1DEF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEF40u;
            // 0x1def44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEF48u;
            goto label_1def48;
        }
    }
    ctx->pc = 0x1DEF48u;
label_1def48:
    // 0x1def48: 0x1010  mfhi        $v0
    ctx->pc = 0x1def48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1def4c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEF4Cu;
    {
        const bool branch_taken_0x1def4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1def4c) {
            ctx->pc = 0x1DEF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEF4Cu;
            // 0x1def50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEF60u;
            goto label_1def60;
        }
    }
    ctx->pc = 0x1DEF54u;
    // 0x1def54: 0xc080664  jal         func_201990
    ctx->pc = 0x1DEF54u;
    SET_GPR_U32(ctx, 31, 0x1DEF5Cu);
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1DEF54u, 0x1DEF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF5Cu;
label_1def5c:
    // 0x1def5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1def5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1def60:
    // 0x1def60: 0xc080664  jal         func_201990
    ctx->pc = 0x1DEF60u;
    SET_GPR_U32(ctx, 31, 0x1DEF68u);
    ctx->pc = 0x1DEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF60u;
    // 0x1def64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1DEF60u, 0x1DEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF68u;
label_1def68:
    // 0x1def68: 0x2a230030  slti        $v1, $s1, 0x30
    ctx->pc = 0x1def68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1def6c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1DEF6Cu;
    {
        const bool branch_taken_0x1def6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF6Cu;
        // 0x1def70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def6c) {
            ctx->pc = 0x1DEF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1def18;
        }
    }
    ctx->pc = 0x1DEF74u;
    // 0x1def74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1def74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1def78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1def78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1def7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1def7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1def80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1def80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1def84: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1def84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1def88: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1def88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1def8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1def8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1def90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF90u;
        // 0x1def94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEF98u;
}
