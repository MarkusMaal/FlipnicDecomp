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

// Function: entry_0017a7ec
// Address: 0x17a7ec - 0x17a840
void entry_0017a7ec_0x17a7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a7ec_0x17a7ec");
#endif

    switch (ctx->pc) {
        case 0x17a7fcu: goto label_17a7fc;
        case 0x17a828u: goto label_17a828;
        case 0x17a83cu: goto label_17a83c;
        default: break;
    }

    ctx->pc = 0x17a7ecu;

label_17a7ec:
    // 0x17a7ec: 0x0  nop
    ctx->pc = 0x17a7ecu;
    // NOP
label_17a7f0:
    // 0x17a7f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a7f4:
    // 0x17a7f4: 0xc04c6f0  jal         func_131BC0
label_17a7f8:
    if (ctx->pc == 0x17A7F8u) {
        ctx->pc = 0x17A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7F4u;
        // 0x17a7f8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7FCu;
        goto label_17a7fc;
    }
    ctx->pc = 0x17A7F4u;
    SET_GPR_U32(ctx, 31, 0x17A7FCu);
    ctx->pc = 0x17A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7F4u;
    // 0x17a7f8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x17A7F4u, 0x17A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7FCu;
label_17a7fc:
    // 0x17a7fc: 0x8f838630  lw          $v1, -0x79D0($gp)
    ctx->pc = 0x17a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a800:
    // 0x17a800: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17a800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a804:
    // 0x17a804: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x17a804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17a808:
    // 0x17a808: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17a80c:
    // 0x17a80c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17a810:
    // 0x17a810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a814:
    // 0x17a814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a818:
    // 0x17a818: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x17a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_17a81c:
    // 0x17a81c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17a81cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17a820:
    // 0x17a820: 0x320f809  jalr        $t9
label_17a824:
    if (ctx->pc == 0x17A824u) {
        ctx->pc = 0x17A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A820u;
        // 0x17a824: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A828u;
        goto label_17a828;
    }
    ctx->pc = 0x17A820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A828u);
        ctx->pc = 0x17A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A820u;
        // 0x17a824: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A820u, 0x17A828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A828u;
label_17a828:
    // 0x17a828: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x17a828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17a82c:
    // 0x17a82c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a830:
    // 0x17a830: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x17a830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_17a834:
    // 0x17a834: 0x320f809  jalr        $t9
label_17a838:
    if (ctx->pc == 0x17A838u) {
        ctx->pc = 0x17A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A834u;
        // 0x17a838: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A83Cu;
        goto label_17a83c;
    }
    ctx->pc = 0x17A834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A83Cu);
        ctx->pc = 0x17A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A834u;
        // 0x17a838: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A834u, 0x17A83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A83Cu;
label_17a83c:
    // 0x17a83c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17a83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x17a840u;
}
