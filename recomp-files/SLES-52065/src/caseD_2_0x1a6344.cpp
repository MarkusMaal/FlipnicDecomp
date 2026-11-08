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

// Function: caseD_2
// Address: 0x1a6344 - 0x1a63c4
void caseD_2_0x1a6344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1a6344");
#endif

    switch (ctx->pc) {
        case 0x1a634cu: goto label_1a634c;
        case 0x1a6358u: goto label_1a6358;
        case 0x1a636cu: goto label_1a636c;
        case 0x1a63bcu: goto label_1a63bc;
        default: break;
    }

    ctx->pc = 0x1a6344u;

    // 0x1a6344: 0xc062114  jal         func_188450
    ctx->pc = 0x1A6344u;
    SET_GPR_U32(ctx, 31, 0x1A634Cu);
    ctx->pc = 0x1A6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6344u;
    // 0x1a6348: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6344u, 0x1A634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A634Cu;
label_1a634c:
    // 0x1a634c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a634cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6350: 0xc062114  jal         func_188450
    ctx->pc = 0x1A6350u;
    SET_GPR_U32(ctx, 31, 0x1A6358u);
    ctx->pc = 0x1A6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6350u;
    // 0x1a6354: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6350u, 0x1A6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6358u;
label_1a6358:
    // 0x1a6358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a635c: 0x8e8400e8  lw          $a0, 0xE8($s4)
    ctx->pc = 0x1a635cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x1a6360: 0xde8500c8  ld          $a1, 0xC8($s4)
    ctx->pc = 0x1a6360u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1a6364: 0xc081c20  jal         func_207080
    ctx->pc = 0x1A6364u;
    SET_GPR_U32(ctx, 31, 0x1A636Cu);
    ctx->pc = 0x1A6368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6364u;
    // 0x1a6368: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1A6364u, 0x1A636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A636Cu;
label_1a636c:
    // 0x1a636c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1a636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1a6370: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a6370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6374: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6378: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a6378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a637c: 0xffb00018  sd          $s0, 0x18($sp)
    ctx->pc = 0x1a637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    // 0x1a6380: 0x24422bf0  addiu       $v0, $v0, 0x2BF0
    ctx->pc = 0x1a6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
    // 0x1a6384: 0xde8300d0  ld          $v1, 0xD0($s4)
    ctx->pc = 0x1a6384u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1a6388: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a6388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1a638c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a638cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6390: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1a6390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6394: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1a6394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x1a6398: 0xffb20028  sd          $s2, 0x28($sp)
    ctx->pc = 0x1a6398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 18));
    // 0x1a639c: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x1a63a0: 0x8e8800e8  lw          $t0, 0xE8($s4)
    ctx->pc = 0x1a63a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x1a63a4: 0xde8a00c8  ld          $t2, 0xC8($s4)
    ctx->pc = 0x1a63a4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1a63a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a63ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a63acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a63b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a63b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a63b4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A63B4u;
    SET_GPR_U32(ctx, 31, 0x1A63BCu);
    ctx->pc = 0x1A63B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63B4u;
    // 0x1a63b8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A63B4u, 0x1A63BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63BCu;
label_1a63bc:
    // 0x1a63bc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1A63BCu;
    {
        const bool branch_taken_0x1a63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63bc) {
            ctx->pc = 0x1A64B0u;
            return;
        }
    }
    ctx->pc = 0x1A63C4u;
}
